//this node is used to collect the path 
#include <chrono>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <std_msgs/msg/header.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/LinearMath/Quaternion.h>
#include <autoware_auto_planning_msgs/msg/trajectory.hpp>

#include "traj_interfaces/msg/traj_param.hpp"
#include "traj_interfaces/msg/state_machine.hpp"

#include "util/StateMachine.hpp"
#include "util/KosTransfrom.hpp"
#include "util/TrajectoryLength.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;

class TrajCollect : public rclcpp::Node
{
    public:
    TrajCollect(): Node("traj_collect")
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

        //the initial local path frame
        all_path.header.frame_id = "map";
        local_path_header.frame_id = "nothing";
    }

    private:
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;
    rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_traj_param;
    rclcpp::Subscription<traj_interfaces::msg::StateMachine>::SharedPtr sub_statemachine;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odo;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_all_path;
    rclcpp::Publisher<autoware_auto_planning_msgs::msg::Trajectory>::SharedPtr pub_autoware_traj;
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> transform_listener_{nullptr};

    //all path
    nav_msgs::msg::Path all_path;
    geometry_msgs::msg::Pose vehicle_pose;
    geometry_msgs::msg::PoseStamped endpose; //store the endpose of each trajectory
    geometry_msgs::msg::PoseStamped pose_global;

    //each single path
    std_msgs::msg::Header local_path_header;
    std::vector<geometry_msgs::msg::PoseStamped> poses_local;
    double frame_angle = 0.0;
    double pose_angle = 0.0;
    double pose_angle_after = 0.0;

    bool newPath {true};

    //trajectory interfaces
    bool current_r_gear{false};
    bool last_r_gear{false};
    bool gear_change{false};

    //state machine
    int vehicle_state {WAIT};

    void callback_param(const traj_interfaces::msg::TrajParam::SharedPtr param_msg)
    {
        last_r_gear = current_r_gear;
        current_r_gear = param_msg->r_gear;
        gear_change = last_r_gear != current_r_gear;
        if(gear_change) {
            all_path.poses.clear();
        }
    }

    void callback_statemachine(const traj_interfaces::msg::StateMachine::SharedPtr state_msg)
    {
        vehicle_state = state_msg->vehicle_state;
    }

    void callback_odometry(const nav_msgs::msg::Odometry::SharedPtr odo_msg) {
        vehicle_pose = odo_msg->pose.pose;
    }

    void callback_path(const nav_msgs::msg::Path::SharedPtr msg_path)
    {
        //check new path 
        if(local_path_header.frame_id == msg_path->header.frame_id) {
        newPath = false;
        } else {
        newPath = true;
        }

        if(newPath)
        {  
            local_path_header = msg_path->header;
            poses_local = msg_path->poses;

            // Debug: The starting pose of next path is the ending pose of the last path       
            std::vector<geometry_msgs::msg::PoseStamped>::iterator pose_begin;
            if (msg_path->header.frame_id == "path_1") {
                pose_begin = poses_local.begin();
            } else {
                pose_begin = poses_local.begin() + 1;
            }
            
            //wait the frame transform
            auto pathn_map = KosTransform::waitForTransform(*tf_buffer_, "map", local_path_header.frame_id);
            geometry_msgs::msg::PoseStamped poseofFrame = KosTransform::transform2pose(pathn_map);

            //get all_path: path_n frame -> map frame
            std::vector<geometry_msgs::msg::PoseStamped>::iterator pose;
            for (pose = pose_begin; pose != poses_local.end(); pose++)
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

                all_path.poses.push_back(pose_global);
            }
        }

        //when the vehicle arrives at the end of traj, can clean the collected path
        if(vehicle_state == END || vehicle_state == EMERGENCY_STOP) {
            std::vector<geometry_msgs::msg::Pose> vector_pose = TrajectoryLength::extractPoses(all_path);
            auto neareastIndex = TrajectoryLength::findClosestIdxWithDistAngThr(vector_pose, vehicle_pose, 0.4, M_PI/4);
            int index = neareastIndex.second;
            all_path.poses.erase(all_path.poses.begin(), all_path.poses.begin()+index);
        } 

        if(gear_change) {
            all_path.poses.clear();
        }

        rclcpp::Time now = this->get_clock()->now();
        all_path.header.set__stamp(now);
        pub_all_path->publish(all_path);

        //autoware trajectory
        path2autowaretraj();
    }

    void path2autowaretraj() 
    {
        autoware_auto_planning_msgs::msg::Trajectory autoware_traj;
        autoware_traj.header = all_path.header;
        if(current_r_gear)
        {
            for(const geometry_msgs::msg::PoseStamped& pose: all_path.poses)
            {
                autoware_auto_planning_msgs::msg::TrajectoryPoint autoware_point;
                autoware_point.pose = pose.pose;
                autoware_point.longitudinal_velocity_mps = -10.0;
                autoware_traj.points.push_back(autoware_point);
            }
        }
        else{
            for(const geometry_msgs::msg::PoseStamped& pose: all_path.poses)
            {
                autoware_auto_planning_msgs::msg::TrajectoryPoint autoware_point;
                autoware_point.pose = pose.pose;
                autoware_point.longitudinal_velocity_mps = 10.0;
                autoware_traj.points.push_back(autoware_point);
            } 
        }

        pub_autoware_traj->publish(autoware_traj);
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajCollect>());
  rclcpp::shutdown();
  return 0;
}