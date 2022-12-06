//this node control the velocity and accelaration according to the trajectory
//sub: odometry, trajectory
//pub: accleration

#include <chrono>

#include "LongitudinalControlNode.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

PIDController pid_controller(1.0, 2.0, 0.01);
PIDController pid_controller_v(0.3, 0.0, 0.4);

//test the test_branch 

PIDControlNode::PIDControlNode(): Node("PID_longitudinal_control")
{
    pub_accel = this->create_publisher<ackermann_msgs::msg::AckermannDrive>("PID/control/accel_cmd", 10);

    pub_vehicle_state = this->create_publisher<traj_interfaces::msg::StateMachine>("statemachine/vehicle_state", 10);

    #ifdef DEBUG
    pub_rest_length = this->create_publisher<std_msgs::msg::Float64>("debug/vehicle_path_length",10);
    sub_set_length = this->create_subscription<std_msgs::msg::Float64>("debug/path_length", 10, std::bind(&PIDControlNode::callback_set_length, this, _1));
    pub_lateral_error = this->create_publisher<std_msgs::msg::Float64>("debug/lateral_error",10);
    #endif

    sub_odo = this->create_subscription<nav_msgs::msg::Odometry>("carla/ego_vehicle/odometry", 10, std::bind(&PIDControlNode::callback_odometry, this, _1));

    sub_EBS_sig = this->create_subscription<std_msgs::msg::Bool>("EBS/signal", 10, std::bind(&PIDControlNode::callback_EBS, this, _1));

    sub_aw_traj = this->create_subscription<autoware_auto_planning_msgs::msg::Trajectory>("pure_pursuit/input/reference_trajectory", 10, std::bind(&PIDControlNode::callback_path, this, _1));

    sub_param = this->create_subscription<traj_interfaces::msg::TrajParam>("interactive/param", 10, std::bind(&PIDControlNode::callback_param, this, _1));

    sub_carla_collision = this->create_subscription<carla_msgs::msg::CarlaCollisionEvent>("carla/ego_vehicle/collision", 10, std::bind(&PIDControlNode::callback_collision, this, _1));

    // sub_carla_vehicleState = this->create_subscription<carla_msgs::msg::CarlaEgoVehicleStatus>("carla/ego_vehicle/vehicle_status", 10, std::bind(&PIDControlNode::callback_carla_vehicle_state, this, _1));

    this->declare_parameter<double>("kp", 0.8);
    this->declare_parameter<double>("kd", 3.5);
    this->declare_parameter<double>("ki", 0.02);

    on_timer = this->create_wall_timer(
    1000ms, std::bind(&PIDControlNode::set_pid, this));

    ebs_sig.data = false; //default disable the ebs
    vehicle_state = WAIT; //default vehicle state
}

PIDControlNode::~PIDControlNode() {}

void PIDControlNode::set_pid()
{
    //get pid parameter
    this->get_parameter("kp", parameter_kp);
    this->get_parameter("kd", parameter_kd);
    this->get_parameter("ki", parameter_ki);
  
    pid_controller.Setpid(parameter_kp, parameter_ki, parameter_kd);
    // std::cout << "kp: " << parameter_kp << std::endl;
}
   
bool PIDControlNode::isDataReady() 
{
    //the path
    if(!current_path) {
        RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5000, "waiting for path...");
        return false;
    } 

    //the base_link pose
    if(!current_odometry) {
        RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5000, "waiting for odometry...");
        return false;
    }

    return true;
}

void PIDControlNode::callback_collision(const carla_msgs::msg::CarlaCollisionEvent::SharedPtr msg_collison)
{
    if(msg_collison) {
        collision_event_flag = true;
    }
}

void PIDControlNode::callback_EBS(const std_msgs::msg::Bool::SharedPtr msg)
{
    ebs_sig.data = msg->data;
}

void PIDControlNode::callback_param(const traj_interfaces::msg::TrajParam::SharedPtr msg_param)
{
    r_gear = msg_param->r_gear;
}

// void PIDControlNode::callback_carla_vehicle_state(const carla_msgs::msg::CarlaEgoVehicleStatus::SharedPtr msg_carla_vehState)
// {
//     vehicle_reverse = msg_carla_vehState->control.reverse;
// }

#ifdef DEBUG
void PIDControlNode::callback_set_length(const std_msgs::msg::Float64::SharedPtr msg_set_length)
{
    set_length = msg_set_length->data;
}
#endif

void PIDControlNode::callback_odometry(const nav_msgs::msg::Odometry::SharedPtr odometry)
{
    auto time_now = this->now();
    dt = time_now.seconds() - timepoint_last;
    timepoint_last = time_now.seconds();
    // std::cout << "The dt is: " << dt << std::endl;
    current_odometry = odometry;

    geometry_msgs::msg::Point current_point_rel;
    current_point_rel.set__x(-1.44);
    current_point_rel.set__y(0.0);
    current_point_rel.set__z(0.0);

    geometry_msgs::msg::Point current_point_abs = KosTransform::transformToAbsoluteCoordinate2D(current_point_rel, current_odometry->pose.pose);

    current_pose.pose.position = current_point_abs;
    current_pose.pose.orientation = current_odometry->pose.pose.orientation;
    current_pose.set__header(current_odometry->header);

    if(collision_event_flag) {
        collision_flag = true;
    } else {
        collision_flag = false;
    }
    collision_event_flag = false;

    if(isDataReady()) 
    {
        run();   
    }
}
        
void PIDControlNode::callback_path(const autoware_auto_planning_msgs::msg::Trajectory::SharedPtr path)
{
    current_path = path;
}

void PIDControlNode::run()
{
    path = AutowareTraj2navPath(*current_path);
    vector_pose = TrajectoryLength::extractPoses(path);

    if(!r_gear) {
        closet_idx = TrajectoryLength::findClosestIdxWithDistAngThr(vector_pose, current_pose.pose, 3.0, M_PI/4);
        // std::cout << "Index: " << closet_idx.second << std::endl;
        lost_flag = closet_idx.first;
        if(closet_idx.first) {
            rest_length = TrajectoryLength::calcTrajLengthBetweenTwoIndex(path, closet_idx.second, path.poses.size()-1) - VehicleParams::distance_front_bumper;
            // std::cout << "Rest length: " << rest_length << std::endl;
        }
    } else {
        closet_idx = TrajectoryLength::findClosestIdxWithDistAngThr(vector_pose, current_pose.pose, 0.5, M_PI/4);
        lost_flag = closet_idx.first;
        if(closet_idx.first) {
            rest_length = TrajectoryLength::calcTrajLengthBetweenTwoIndex(path, closet_idx.second, path.poses.size()-1) - VehicleParams::distance_rear_bumper;  
        }
    }

    #ifdef DEBUG
    //the longitudinal control
    std_msgs::msg::Float64 actual_length;
    actual_length.data = set_length - rest_length;
    pub_rest_length -> publish(actual_length);

    //the horizontal control
    if(closet_idx.first) {
        geometry_msgs::msg::Pose closest_pose = vector_pose.at(closet_idx.second);
        geometry_msgs::msg::Point closest_point = KosTransform::transformToRelativeCoordinate2D(closest_pose.position, current_pose.pose);
        double y_error = closest_point.y;
        std_msgs::msg::Float64 lateral_error;
        lateral_error.data = y_error;
        pub_lateral_error -> publish(lateral_error);
    }
    #endif    

    //state machine transform
    if(ebs_sig.data)
    {
        if(!r_gear) {
            vehicle_state = EMERGENCY_STOP;
        } else {
            if(closet_idx.first) {
                vehicle_state = MOVE_BACKWARD;
            } else {
                vehicle_state = WAIT;
            }
        }
    }
    else if(collision_flag)
    {
        if(!vehicle_collision_direction_mark) {
            vehicle_reverse = r_gear;  //mark the direction when vehicle collides
        }
        vehicle_collision_direction_mark = true;
        if(vehicle_reverse != r_gear) 
        { //if change the r_gear, the collision state will end
            collision_flag = false;
            if(closet_idx.first) 
            {
                if(rest_length <= 0.2) {
                    vehicle_state = END;
                } 
                else if (r_gear)
                {
                    vehicle_state = MOVE_BACKWARD;
                }
                else
                {
                    vehicle_state = MOVE_FORWARD;
                }
            } 
            else 
            {
                vehicle_state = WAIT;
            }
        } 
        else {
            vehicle_state = COLLISION;
        }
    }
    else
    {
        if(closet_idx.first) 
        {
            if(rest_length <= 0.2) {
                vehicle_state = END;
            } 
            else if (r_gear)
            {
                vehicle_state = MOVE_BACKWARD;
            }
            else
            {
                vehicle_state = MOVE_FORWARD;
            }
        } 
        else 
        {
            vehicle_state = WAIT;
        }
    }

    //controller according to the state
    switch (vehicle_state)
    {
    case WAIT:
        vehicle_wait();
        msg_state.set__vehicle_state(WAIT);
        pub_vehicle_state->publish(msg_state);
        break;
    case END:
        vehicle_end();
        msg_state.set__vehicle_state(END);
        pub_vehicle_state->publish(msg_state);
        break;      
    case MOVE_FORWARD:
        vehicle_move_forward();
        msg_state.set__vehicle_state(MOVE_FORWARD);
        pub_vehicle_state->publish(msg_state);
        break;
    case MOVE_BACKWARD:
        vehicle_move_backward();
        msg_state.set__vehicle_state(MOVE_BACKWARD);
        pub_vehicle_state->publish(msg_state);
        break;
    case EMERGENCY_STOP:
        vehicle_ebs();
        msg_state.set__vehicle_state(EMERGENCY_STOP);
        pub_vehicle_state->publish(msg_state);
        break;
    case COLLISION:
        vehicle_collision();
        msg_state.set__vehicle_state(COLLISION);
        pub_vehicle_state->publish(msg_state);
        break;
    }
}

void PIDControlNode::vehicle_end() 
{
    accel_cmd.speed = 0.0;
    accel_cmd.acceleration = max_decel;
    pub_accel->publish(accel_cmd);
    pid_controller.Reset();
    pid_controller_v.Reset();

    RCLCPP_INFO(this->get_logger(), "Vehicle State: END\n~At the End of the trajectory. Control_error: %f", rest_length);
}

void PIDControlNode::vehicle_move_forward()
{
    // double target_v = pid_controller_v.Control(rest_length, dt);
    // std::cout << "target_v:" << target_v << std::endl;
    vehicle_collision_direction_mark = false;
    accel_cmd.acceleration = pid_controller.Control(rest_length, dt);
    // std::cout << "output_a:" << accel_cmd.acceleration << std::endl;
    if(accel_cmd.acceleration>0) {
        accel_cmd.speed=8.0;
    } else {
        accel_cmd.speed=0.0;
    }

    pub_accel->publish(accel_cmd);

    RCLCPP_INFO(this->get_logger(), "Vehicle State: MOVE_FORWARD\n ~error:%f\n ~proportional_part:%f\n ~derivative_part:%f\n ~integral_part:%f\n", rest_length, pid_controller.proportional_part, pid_controller.derivative_part, pid_controller.integral_part);
}

void PIDControlNode::vehicle_move_backward()
{
    vehicle_collision_direction_mark = false;
    accel_cmd.acceleration = pid_controller.Control(rest_length, dt);
    if(accel_cmd.acceleration>0) {
        accel_cmd.speed=-5.0;
    } else {
        accel_cmd.speed=0.0;
    }
    pub_accel->publish(accel_cmd);

    RCLCPP_INFO(this->get_logger(), "Vehicle State: MOVE_BACKWARD\n ~error:%f\n ~proportional_part:%f\n ~derivative_part:%f\n ~integral_part:%f\n", rest_length, pid_controller.proportional_part, pid_controller.derivative_part, pid_controller.integral_part);
}

void PIDControlNode::vehicle_wait()
{
    // vehicle_collision_direction_mark = false;
    accel_cmd.acceleration = max_decel;
    accel_cmd.speed = 0.0;
    pub_accel->publish(accel_cmd);
    RCLCPP_INFO(this->get_logger(), "Vehicle State: WAIT\n~Vehicle lost. Please use keyboard B to refresh the trajectory!");
}

void PIDControlNode::vehicle_ebs()
{
    accel_cmd.acceleration = max_decel;
    accel_cmd.speed = 0.0;
    pub_accel->publish(accel_cmd);
    RCLCPP_INFO(this->get_logger(), "Vehicle State: EMERGENCY_STOP\n");
}

void PIDControlNode::vehicle_collision()
{
    accel_cmd.acceleration = 0.0;
    accel_cmd.speed = 0.0;
    pub_accel->publish(accel_cmd);
    std::string vehicle_direction;
    if(vehicle_reverse) {
        vehicle_direction = "Backward";
    } else {
        vehicle_direction = "Forward";
    }
    RCLCPP_WARN(this->get_logger(), "Vehicle State: COLLISION\n~The vehicle driving direction: %s\n ~Please switch the driving direction!", vehicle_direction.c_str());
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PIDControlNode>());
  rclcpp::shutdown();
  return 0;
}