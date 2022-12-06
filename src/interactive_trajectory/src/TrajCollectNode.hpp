//this node is used to collect the path 
#include <chrono>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/path.hpp>
#include <std_msgs/msg/header.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/LinearMath/Quaternion.h>

#include "traj_interfaces/msg/traj_param.hpp"

#include "util/KosTransfrom.hpp"


class TrajCollect: public rclcpp::Node
{
    public:
    TrajCollect();
    ~TrajCollect();

    private:
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_all_path;

    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> transform_listener_{nullptr};

    rclcpp::TimerBase::SharedPtr timer_1;  

    //all path
    nav_msgs::msg::Path all_path;

    //each single path
    nav_msgs::msg::Path each_path;
    std_msgs::msg::Header stored_path_header;
    bool newPath {false};
    bool receivedPath {false};

    void callback_path(const nav_msgs::msg::Path::SharedPtr msg_path);

    void send_collected_path();

    void link_path(nav_msgs::msg::Path &path_after_link, nav_msgs::msg::Path &single_path);
};

