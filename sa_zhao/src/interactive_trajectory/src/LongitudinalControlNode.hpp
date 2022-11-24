#pragma once

#include <chrono>
#include <rclcpp/rclcpp.hpp>

#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <ackermann_msgs/msg/ackermann_drive.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float64.hpp>

#include <autoware_auto_planning_msgs/msg/trajectory.hpp>
#include <carla_msgs/msg/carla_collision_event.hpp>
// #include <carla_msgs/msg/carla_ego_vehicle_control.hpp>
#include "traj_interfaces/msg/state_machine.hpp"
#include "traj_interfaces/msg/traj_param.hpp"

#include "util/KosTransfrom.hpp"
#include "util/TrajectoryLength.hpp"
#include "util/DiscretePIDController.hpp"
#include "util/StateMachine.hpp"
#include "util/VehicleParams.h"

#define DEBUG

nav_msgs::msg::Path AutowareTraj2navPath(
const autoware_auto_planning_msgs::msg::Trajectory & trajectory)
{
nav_msgs::msg::Path path;

path.header = trajectory.header;

for (const auto & p : trajectory.points) {
    geometry_msgs::msg::PoseStamped poseStamped;
    poseStamped.pose = p.pose;
    poseStamped.header = trajectory.header;
    path.poses.push_back(poseStamped);
}
return path;
}

class PIDControlNode: public rclcpp::Node
{
    public:
    PIDControlNode();
    ~PIDControlNode();

    void set_pid();

    private:
    // rclcpp::Publisher<geometry_msgs::msg::Accel>::SharedPtr pub_accel;
    rclcpp::Publisher<ackermann_msgs::msg::AckermannDrive>::SharedPtr pub_accel;
    rclcpp::Publisher<traj_interfaces::msg::StateMachine>::SharedPtr pub_vehicle_state;
    rclcpp::Subscription<autoware_auto_planning_msgs::msg::Trajectory>::SharedPtr sub_aw_traj;
    rclcpp::Subscription<carla_msgs::msg::CarlaCollisionEvent>::SharedPtr sub_carla_collision;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odo;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr sub_EBS_sig;
    rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_param;
    rclcpp::TimerBase::SharedPtr on_timer;
    #ifdef DEBUG
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr pub_rest_length;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr sub_set_length;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr pub_lateral_error;    
    #endif

    //pid part
    ackermann_msgs::msg::AckermannDrive accel_cmd;
    // carla_msgs::msg::CarlaEgoVehicleControl vehicle_cmd;
    autoware_auto_planning_msgs::msg::Trajectory::ConstSharedPtr current_path;
    nav_msgs::msg::Odometry::ConstSharedPtr current_odometry;
    geometry_msgs::msg::PoseStamped current_pose;
    nav_msgs::msg::Path path;
    std::vector<geometry_msgs::msg::Pose> vector_pose;

    double rest_length{};
    double control_error{};
    double parameter_kp{1.2};
    double parameter_ki{0.0};
    double parameter_kd{50.0};

    double max_accel {3.0};
    double min_accel {0.0};
    double max_decel {-8.0};

    double dt {0.1};
    double timepoint_last {};

    //state machine part
    int vehicle_state{0};
    bool lost_flag {false};
    bool collision_flag {false};
    bool collision_event_flag {false};
    traj_interfaces::msg::StateMachine msg_state;

    //taster part
    bool r_gear {false};

    //EBS part
    std_msgs::msg::Bool ebs_sig;

    //traj part
    std::pair<bool, int32_t> closet_idx;

    bool isDataReady();

    void callback_EBS(const std_msgs::msg::Bool::SharedPtr msg);
    void callback_odometry(const nav_msgs::msg::Odometry::SharedPtr odometry);
    void callback_path(const autoware_auto_planning_msgs::msg::Trajectory::SharedPtr path);
    void callback_param(const traj_interfaces::msg::TrajParam::SharedPtr msg_param);
    void callback_collision(const carla_msgs::msg::CarlaCollisionEvent::SharedPtr msg_collison);
    #ifdef DEBUG
    double set_length{};
    void callback_set_length(const std_msgs::msg::Float64::SharedPtr msg_set_length);
    #endif 

    void run();


    void vehicle_end();
    void vehicle_wait();
    void vehicle_move_forward();
    void vehicle_move_backward();
    void vehicle_ebs();
    void vehicle_collision();

};
