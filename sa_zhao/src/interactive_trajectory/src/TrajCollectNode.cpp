//this node is used to collect the path 
#include "TrajCollectNode.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;

TrajCollect::TrajCollect(): Node("traj_collect")
{
    //subscriber
    sub_path = this->create_subscription<nav_msgs::msg::Path>("trajectory/confirmed", 10, std::bind(&TrajCollect::callback_path, this, _1));

    sub_traj_param = this->create_subscription<traj_interfaces::msg::TrajParam>("interactive/param", 10, std::bind(&TrajCollect::callback_param, this, _1));

    sub_statemachine = this->create_subscription<traj_interfaces::msg::StateMachine>("statemachine/vehicle_state", 10, std::bind(&TrajCollect::callback_statemachine, this, _1));

    sub_odo = this->create_subscription<nav_msgs::msg::Odometry>("carla/ego_vehicle/odometry", 10, std::bind(&TrajCollect::callback_odometry, this, _1));

    //publisher
    pub_all_path = this->create_publisher<nav_msgs::msg::Path>("trajectory/collected",10);

    pub_autoware_traj = this->create_publisher<autoware_auto_planning_msgs::msg::Trajectory>("pure_pursuit/input/reference_trajectory", 10);

    tf_buffer_ =
    std::make_unique<tf2_ros::Buffer>(this->get_clock());
    transform_listener_ =
    std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

    timer_1 = this->create_wall_timer(50ms, std::bind(&TrajCollect::send_collected_path, this));

    //the initial local path frame
    all_path.header.frame_id = "map";
    stored_path_header.frame_id = "nothing";
}

TrajCollect::~TrajCollect() {}

void TrajCollect::callback_param(const traj_interfaces::msg::TrajParam::SharedPtr param_msg)
{
    last_r_gear = current_r_gear;
    current_r_gear = param_msg->r_gear;
    gear_change = last_r_gear != current_r_gear;
    // if(gear_change) {
    //     all_path.poses.clear();
    // }
}

void TrajCollect::callback_statemachine(const traj_interfaces::msg::StateMachine::SharedPtr state_msg)
{
    vehicle_state = state_msg->vehicle_state;
}

void TrajCollect::callback_odometry(const nav_msgs::msg::Odometry::SharedPtr odo_msg) 
{
    vehicle_pose = odo_msg->pose.pose;
}

void TrajCollect::callback_path(const nav_msgs::msg::Path::SharedPtr msg_path)
{
    receivedPath = true;
    each_path = *msg_path;
    //detect the new path
    if(each_path.header.frame_id != stored_path_header.frame_id)
    {
        newPath = true;
    }
    stored_path_header = msg_path->header;
}

void TrajCollect::link_path(nav_msgs::msg::Path &path_after_link, nav_msgs::msg::Path &single_path)
{
    // local_path_header = msg_path->header;
    // poses_local = msg_path->poses;

    // Debug: The starting pose of next path is the ending pose of the last path       
    std::vector<geometry_msgs::msg::PoseStamped>::iterator pose_begin;
    if (single_path.header.frame_id == "path_1") {
        pose_begin = single_path.poses.begin();
    } else {
        pose_begin = single_path.poses.begin() + 1;
    }
    std::vector<geometry_msgs::msg::PoseStamped>::iterator pose_end =single_path.poses.end();

    //get the frame transform of single path
    auto pathn_map = KosTransform::waitForTransform(*tf_buffer_, "map", single_path.header.frame_id);
    geometry_msgs::msg::PoseStamped poseofFrame = KosTransform::transform2pose(pathn_map);

    //koordinate transform: path->map
    std::vector<geometry_msgs::msg::PoseStamped>::iterator pose;
    geometry_msgs::msg::PoseStamped pose_global;
    double frame_angle  {0.0};
    double pose_angle   {0.0};
    double pose_angle_after {0.0};
    for (pose = pose_begin; pose != pose_end; pose++)
    {
        // pose_global.header.frame_id = "path_start";
        pose_global.header.frame_id = "map";
        rclcpp::Time now = this->get_clock()->now();
        pose_global.header.stamp = now;
        
        //position transform
        pose_global.pose.position = KosTransform::transformToAbsoluteCoordinate2D(pose->pose.position, poseofFrame.pose);
        
        //orientation transform
        pose_angle = tf2::getYaw(pose->pose.orientation);
        frame_angle = tf2::getYaw(poseofFrame.pose.orientation);
        pose_angle_after = pose_angle + frame_angle;
        //RCLCPP_INFO(this->get_logger(), "The pose angle after transformation is %f", pose_angle_after);
        tf2::Quaternion pose_global_orientation;
        pose_global_orientation.setRPY(0,0,pose_angle_after);
        pose_global.pose.orientation = tf2::toMsg(pose_global_orientation);

        path_after_link.poses.push_back(pose_global);
    }

    //set the header stamp
    rclcpp::Time now = this->get_clock()->now();
    path_after_link.header.set__stamp(now);
    // path_after_link.header.frame_id = "map";

    // pub_all_path->publish(all_path);
}

void TrajCollect::clear_path(nav_msgs::msg::Path &path)
{
    path.poses.clear();
}

void TrajCollect::erase_path(nav_msgs::msg::Path &path, geometry_msgs::msg::Pose inputPose)
{
    std::vector<geometry_msgs::msg::Pose> vector_pose = TrajectoryLength::extractPoses(all_path);

    auto neareastIndex = TrajectoryLength::findClosestIdxWithDistAngThr(vector_pose, inputPose, 0.4, M_PI/4);

    if(neareastIndex.first) {
        int index = neareastIndex.second;
        path.poses.erase(path.poses.begin(), path.poses.begin()+index);
    }
}

void TrajCollect::path2autowaretraj(autoware_auto_planning_msgs::msg::Trajectory &aw_traj, nav_msgs::msg::Path &nav_traj)
{
    // autoware_auto_planning_msgs::msg::Trajectory autoware_traj;
    aw_traj.points.clear();
    aw_traj.header = nav_traj.header;
    if(current_r_gear)
    {
        for(const geometry_msgs::msg::PoseStamped& pose: nav_traj.poses)
        {
            autoware_auto_planning_msgs::msg::TrajectoryPoint autoware_point;
            autoware_point.pose = pose.pose;
            autoware_point.longitudinal_velocity_mps = -10.0;
            aw_traj.points.push_back(autoware_point);
        }
    }
    else{
        for(const geometry_msgs::msg::PoseStamped& pose: nav_traj.poses)
        {
            autoware_auto_planning_msgs::msg::TrajectoryPoint autoware_point;
            autoware_point.pose = pose.pose;
            autoware_point.longitudinal_velocity_mps = 10.0;
            aw_traj.points.push_back(autoware_point);
        } 
    }

    // pub_autoware_traj->publish(autoware_traj);
}

void TrajCollect::send_collected_path()
{
    if(receivedPath)
    {
        if(newPath)
        {
            //link the path 
            link_path(all_path, each_path);
            newPath = false;
        }

        erase_path(all_path, vehicle_pose);
        if(gear_change) {
            clear_path(all_path);
            gear_change = false;
        }

        path2autowaretraj(all_path_autoware, all_path);
        pub_all_path->publish(all_path);
        pub_autoware_traj->publish(all_path_autoware);
    }
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajCollect>());
  rclcpp::shutdown();
  return 0;
}