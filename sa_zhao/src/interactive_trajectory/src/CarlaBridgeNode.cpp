#include <chrono>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <geometry_msgs/msg/accel.hpp>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2/LinearMath/Quaternion.h>

#include <ackermann_msgs/msg/ackermann_drive.hpp>
// #include <carla_ackermann_msgs/msg/ego_vehicle_control_target.hpp>
#include <autoware_auto_control_msgs/msg/ackermann_lateral_command.hpp>
#include <traj_interfaces/msg/traj_param.hpp>

#include <util/KosTransfrom.hpp>

using std::placeholders::_1;
using namespace std::chrono_literals;

class CarlaBridgeNode: public rclcpp::Node
{
    public:
    CarlaBridgeNode(): Node("carla_bridge")
    {
        pub_cmd_carla = this->create_publisher<ackermann_msgs::msg::AckermannDrive>("carla/ego_vehicle/ackermann_cmd",10);

        pub_odemetry_to_pp = this->create_publisher<nav_msgs::msg::Odometry>("pure_pursuit/input/current_odometry", 10);

        pub_driving_image = this->create_publisher<sensor_msgs::msg::Image>("driving/image", 10);

        pub_driving_camera = this->create_publisher<sensor_msgs::msg::CameraInfo>("driving/camera_info", 10);

        sub_odometry_from_carla = this->create_subscription<nav_msgs::msg::Odometry>("carla/ego_vehicle/odometry",10,std::bind(&CarlaBridgeNode::callback_odometry,this,_1));

        sub_cmd_autoware = this->create_subscription<autoware_auto_control_msgs::msg::AckermannLateralCommand>("pure_pursuit/output/control_raw", 10, std::bind(&CarlaBridgeNode::callback_autoware_cmd, this, _1));

        sub_pid_accel = this->create_subscription<ackermann_msgs::msg::AckermannDrive>("PID/control/accel_cmd", 10, std::bind(&CarlaBridgeNode::callback_pid_cmd, this, _1));

        sub_image_front = this->create_subscription<sensor_msgs::msg::Image>("carla/ego_vehicle/god_view_front/image",10, std::bind(&CarlaBridgeNode::callback_image_front, this, _1));

        sub_image_back = this->create_subscription<sensor_msgs::msg::Image>("carla/ego_vehicle/god_view_back/image",10, std::bind(&CarlaBridgeNode::callback_image_back, this, _1));

        sub_camera_front = this->create_subscription<sensor_msgs::msg::CameraInfo>("carla/ego_vehicle/god_view_front/camera_info",10, std::bind(&CarlaBridgeNode::callback_camera_front, this, _1));

        sub_camera_back = this->create_subscription<sensor_msgs::msg::CameraInfo>("carla/ego_vehicle/god_view_back/camera_info",10, std::bind(&CarlaBridgeNode::callback_camera_back, this, _1));

        sub_traj_cmd = this->create_subscription<traj_interfaces::msg::TrajParam>("interactive/param", 10, std::bind(&CarlaBridgeNode::callback_traj_cmd, this, _1));

        //the frequency of publishing the control cmd
        on_timer = this->create_wall_timer(
        10ms, std::bind(&CarlaBridgeNode::timer_callback_cmd, this));

        //a static transform brodcaster for path_start frame
        tf2_publisher_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    }

    private:
    rclcpp::Publisher<ackermann_msgs::msg::AckermannDrive>::SharedPtr pub_cmd_carla;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr pub_odemetry_to_pp;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr pub_driving_image;
    rclcpp::Publisher<sensor_msgs::msg::CameraInfo>::SharedPtr pub_driving_camera;
    
    rclcpp::Subscription<autoware_auto_control_msgs::msg::AckermannLateralCommand>::SharedPtr sub_cmd_autoware;
    rclcpp::Subscription<ackermann_msgs::msg::AckermannDrive>::SharedPtr sub_pid_accel;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odometry_from_carla;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr sub_image_front;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr sub_image_back;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr sub_camera_front;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr sub_camera_back;
    rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_traj_cmd;

    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf2_publisher_;
    std::shared_ptr<sensor_msgs::msg::Image> front_image_;
    std::shared_ptr<sensor_msgs::msg::Image> back_image_;
    // std::shared_ptr<sensor_msgs::msg::Image> show_image_;
    std::shared_ptr<sensor_msgs::msg::CameraInfo> front_camera_;
    std::shared_ptr<sensor_msgs::msg::CameraInfo> back_camera_;
    
    rclcpp::TimerBase::SharedPtr on_timer; 
    ackermann_msgs::msg::AckermannDrive cmd_carla;
    bool odo_get{false};
    bool r_gear{false};
    geometry_msgs::msg::TransformStamped t;

    void callback_image_front(const sensor_msgs::msg::Image::SharedPtr msg) {
        front_image_ = msg;
        if(!r_gear) {
            pub_driving_image->publish(*front_image_);
        }
    }

    void callback_image_back(const sensor_msgs::msg::Image::SharedPtr msg) {
        back_image_ = msg;
        if(r_gear) {
            pub_driving_image->publish(*back_image_);
        }
    }

    void callback_camera_front(const sensor_msgs::msg::CameraInfo::SharedPtr msg) {
        front_camera_ = msg;
        if(!r_gear) {
            pub_driving_camera->publish(*front_camera_);
        }
    }

    void callback_camera_back(const sensor_msgs::msg::CameraInfo::SharedPtr msg) {
        back_camera_ = msg;
        if(!r_gear) {
            pub_driving_camera->publish(*back_camera_);
        }
    }

    void callback_traj_cmd(const traj_interfaces::msg::TrajParam::SharedPtr traj_cmd_) {
        r_gear = traj_cmd_->r_gear;
    }

    void timer_callback_cmd(){
        pub_cmd_carla->publish(cmd_carla);
    }

    void callback_pid_cmd(const ackermann_msgs::msg::AckermannDrive::ConstSharedPtr accel_cmd) {    
        cmd_carla.set__speed(accel_cmd->speed);
        cmd_carla.set__acceleration(accel_cmd->acceleration);
    }

    void callback_autoware_cmd(const autoware_auto_control_msgs::msg::AckermannLateralCommand::ConstSharedPtr cmd_autoware){
        cmd_carla.set__steering_angle(cmd_autoware->steering_tire_angle);
    }

    void callback_odometry(const nav_msgs::msg::Odometry::ConstSharedPtr odo){
        pub_odemetry_to_pp->publish(*odo);

        //get the fisrt odometry to define the pose of the path_start frame
        if(!odo_get){
            //absulute frame transform: ego_vehicle -> map
            geometry_msgs::msg::Point pathstart_egovehicle;
            pathstart_egovehicle.set__x(-1.44);
            pathstart_egovehicle.set__y(0.0);
            pathstart_egovehicle.set__z(0.0);

            geometry_msgs::msg::Point pathstart_map;
            pathstart_map = KosTransform::transformToAbsoluteCoordinate2D(pathstart_egovehicle, odo->pose.pose);

            rclcpp::Time now = this->get_clock()->now();
            t.header.stamp = odo->header.stamp;
            t.header.frame_id = odo->header.frame_id;
            t.child_frame_id = "path_start";
            t.transform.translation.set__x(pathstart_map.x);
            t.transform.translation.set__y(pathstart_map.y);
            t.transform.translation.set__z(pathstart_map.z);
            t.transform.rotation = odo->pose.pose.orientation;
            
            //publish the static transform
            tf2_publisher_->sendTransform(t);
            RCLCPP_INFO(this->get_logger(), "Publish the path_start frame from the ego_vehicle!");
            odo_get = true;
        }
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CarlaBridgeNode>());
  rclcpp::shutdown();
  return 0;
}

