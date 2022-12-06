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

class TrajCollect: public rclcpp::Node
{
    public:
    TrajCollect();
    ~TrajCollect();

    private:
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;
    rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_traj_param;
    rclcpp::Subscription<traj_interfaces::msg::StateMachine>::SharedPtr sub_statemachine;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odo;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_all_path;
    rclcpp::Publisher<autoware_auto_planning_msgs::msg::Trajectory>::SharedPtr pub_autoware_traj;
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> transform_listener_{nullptr};

    rclcpp::TimerBase::SharedPtr timer_1;  

    //all path
    nav_msgs::msg::Path all_path;
    autoware_auto_planning_msgs::msg::Trajectory all_path_autoware;

    //each single path
    nav_msgs::msg::Path each_path;
    std_msgs::msg::Header stored_path_header;
    bool newPath {true};
    bool receivedPath {false};

    //vehicle pose
    geometry_msgs::msg::Pose vehicle_pose;

    //trajectory interfaces
    bool current_r_gear{false};
    bool last_r_gear{false};
    bool gear_change{false};

    //state machine
    int vehicle_state {WAIT};

    void callback_param(const traj_interfaces::msg::TrajParam::SharedPtr param_msg);

    void callback_statemachine(const traj_interfaces::msg::StateMachine::SharedPtr state_msg);

    void callback_odometry(const nav_msgs::msg::Odometry::SharedPtr odo_msg);

    void callback_path(const nav_msgs::msg::Path::SharedPtr msg_path);

    void send_collected_path();

    void path2autowaretraj(autoware_auto_planning_msgs::msg::Trajectory &aw_traj, nav_msgs::msg::Path &nav_traj);

    void link_path(nav_msgs::msg::Path &path_after_link, nav_msgs::msg::Path &single_path);

    void clear_path(nav_msgs::msg::Path &path);

    void erase_path(nav_msgs::msg::Path &path, geometry_msgs::msg::Pose vehicle_pose);
};

