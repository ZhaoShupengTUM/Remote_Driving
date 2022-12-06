//this node is used to visulize the user defined trajectory
#include "TrajVisualisationNode.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;

TrajVisualisation::TrajVisualisation(): Node("traj_visualization")
{
    //subscriber
    sub_param = this->create_subscription<traj_interfaces::msg::TrajParam> (
        "interactive/param", 10, std::bind(&TrajVisualisation::callback_traj_param, this, _1)
    );

    //publisher
    pub_path = this->create_publisher<nav_msgs::msg::Path>("trajectory/wished",10);

    pub_path_confirmed = this->create_publisher<nav_msgs::msg::Path>("trajectory/confirmed",10);

    //publishing the wished trajectory
    timer_1 = this->create_wall_timer(50ms, std::bind(&TrajVisualisation::timer_callback_wished, this));

    //publishing the confirmed trajectory
    timer_2 = this->create_wall_timer(
    50ms, std::bind(&TrajVisualisation::timer_callback_confirmed, this));

    // tf_buffer_ =
    // std::make_unique<tf2_ros::Buffer>(this->get_clock());

    // transform_listener_ =
    // std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
}

TrajVisualisation::~TrajVisualisation() {}

void TrajVisualisation::callback_traj_param(const traj_interfaces::msg::TrajParam::SharedPtr msg)
{
    //store the parameters
    taster_flag = msg->taster_confirm;
    // last_r_gear = r_gear;
    r_gear = msg->r_gear;
    // if(last_r_gear == r_gear) {
    //     gear_change = false;
    // } else {
    //     gear_change = true;
    //     gear_change_flag = true;
    // }

    //unit transformation
    swa = msg->lenkrad/360*2*M_PI;
    distance = msg->pedal;
    rwa = swa * 
    (VehicleParams::maximum_road_wheel_angle / VehicleParams::maximum_steering_wheel_angle);
        
    vector_traj.clear();

    //two directions of trajectories
    if(!r_gear) {
        vector_traj = trajtool.predict_rear_axle_trajectory_forward(rwa, distance);
    }
    else {
        vector_traj = trajtool.predict_rear_axle_trajectory_backward(rwa, distance);
    }

    //copy the confirmed wished traj to traj_confirmed
    if(taster_flag) {
        traj_confirmed.set__header(traj_wished.header);
        traj_confirmed.poses.clear();
        traj_confirmed.set__poses(traj_wished.poses);

        start_confirm = true;
    }

    //generate the wished traj msg
    pathID_add_judge();
    std::string path_frame_name = "path_"+std::to_string(pathID);
    msg_time = this->now();
    traj_wished = vector2pathmsg(path_frame_name, vector_traj, msg_time);
    msg_received = true;
}

void TrajVisualisation::timer_callback_confirmed()
{
    if(start_confirm)
    {
        pub_path_confirmed->publish(traj_confirmed);
    }
}

void TrajVisualisation::timer_callback_wished()
{
    if(msg_received) 
    {
        pub_path->publish(traj_wished);
    }
}

void TrajVisualisation::pathID_add_judge()
{
    if(taster_flag) {
        pathID += 1;
        taster_flag = false;
    }
    // if(gear_change_flag) {
    //     pathID += 1;
    //     gear_change_flag = false;
    // }
    // std::cout << "path id: " << std::to_string(pathID) << std::endl;
}

nav_msgs::msg::Path TrajVisualisation::vector2pathmsg(std::string frame_name, std::vector<Pose> traj, rclcpp::Time now)
{
    nav_msgs::msg::Path traj_result;
    traj_result.header.stamp = now;
    traj_result.header.frame_id = frame_name;

    for (const auto& pose: traj) {
        geometry_msgs::msg::PoseStamped p;
        p.header.stamp = now;
        p.header.frame_id = frame_name;

        //orientation
        double yaw_normal = pose.get_yaw();
        tf2::Quaternion q;
        q.setRPY(0,0,yaw_normal);       
        p.pose.orientation =  tf2::toMsg(q);

        //x,y position
        p.pose.position.x = pose.get_x();
        p.pose.position.y = pose.get_y();
        traj_result.poses.push_back(p);
    }

    return traj_result;
}


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajVisualisation>());
  rclcpp::shutdown();
  return 0;
}
