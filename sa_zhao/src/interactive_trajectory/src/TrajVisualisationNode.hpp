//this node is used to visulize the user defined trajectory
#include <chrono>
// #include "math.h"

#include "rclcpp/rclcpp.hpp"

#include "nav_msgs/msg/path.hpp"
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <std_msgs/msg/bool.hpp>

//the tf2 library
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/exceptions.h>
#include <tf2_ros/transform_listener.h>  //receiving transforms
#include <tf2_ros/buffer.h>  //buffer the transformation

#include "util/TrajectoryPrediction.hpp"
#include "util/CorridorCreation.hpp"
#include "util/KosTransfrom.hpp"
#include "traj_interfaces/msg/traj_param.hpp"

class TrajVisualisation: public rclcpp::Node
{
    public:
    TrajVisualisation();
    ~TrajVisualisation();

    private:
    rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_param; 
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path;  
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_confirmed;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_right;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_left;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_right_confirmed;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path_left_confirmed;

    rclcpp::TimerBase::SharedPtr timer_1;  
    rclcpp::TimerBase::SharedPtr timer_2; 

    std::shared_ptr<tf2_ros::TransformListener> transform_listener_{nullptr};
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;

    //trajectory parameters 
    bool msg_received {false}; //start publishing visualed traj
    bool start_confirm {false};  //start publishing confirmed traj
    bool taster_flag {false};
    bool r_gear {false};
    bool last_r_gear {false};
    bool gear_change {false};
    bool gear_change_flag {false};
    double distance = -1.0;

    double swa = 0.0; //steering wheel
    double rwa = 0.0; //road wheel

    //trajectory
    nav_msgs::msg::Path traj_confirmed;
    nav_msgs::msg::Path path_left_confirmed;
    nav_msgs::msg::Path path_right_confirmed;

    nav_msgs::msg::Path traj_wished;
    nav_msgs::msg::Path path_left;
    nav_msgs::msg::Path path_right;
    std::vector<Pose> vector_traj;
    std::vector<Pose> vector_path_left;
    std::vector<Pose> vector_path_right;
    int pathID = 1;  
    rclcpp::Time msg_time;

    //trajectory tools
    TrajectoryPrediction trajtool;
    CorridorCreation corridortool;

    void callback_traj_param(const traj_interfaces::msg::TrajParam::SharedPtr msg);
    void timer_callback_confirmed();
    void timer_callback_wished();
    void pathID_add_judge();
    // nav_msgs::msg::Path::SharedPtr vector2pathmsg(std::string frame_name, std::vector<Pose> traj);
    nav_msgs::msg::Path vector2pathmsg(std::string frame_name, std::vector<Pose> traj, rclcpp::Time now);
};