#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "nav_msgs/msg/path.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include <chrono>

//this node publish a marker message to visulize the vehicle in RVInav_msgs::msg::Path message to control the marker
using namespace std::chrono_literals;
using std::placeholders::_1;

int pose_count = 0;
visualization_msgs::msg::Marker vehicle;
geometry_msgs::msg::Pose endPoint;

class MarkerPublisher : public rclcpp::Node
{
    //the node name
    public:
    MarkerPublisher():Node("vehicle_pub")
    {
        //display that the node is ready
        RCLCPP_INFO(this->get_logger(), "The node is ready to generate a vehicle marker");

        endPoint.position.x = 0;
        endPoint.position.y = 0;

        pub_marker = this->create_publisher<visualization_msgs::msg::Marker>("vehicle_marker",10);

        sub_path = this->create_subscription<nav_msgs::msg::Path> (
            "trajectory", 10, std::bind(&MarkerPublisher::callback_path, this, _1)
        );

        timer_ = this->create_wall_timer(200ms, std::bind(&MarkerPublisher::marker_pub, this));
    }

    private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr pub_marker;
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;

    void marker_pub()
    {
        //set the shape type
        uint32_t shape = visualization_msgs::msg::Marker::CUBE;

        //set the frame id and timestamp for this marker
        vehicle.header.frame_id = "/vehicle_frame";
        vehicle.header.stamp = this->now();

        // Set the namespace and id for this marker.  This serves to create a unique ID
        // Any marker sent with the same namespace and id will overwrite the old one
        vehicle.ns = "vehicle_shape";
        vehicle.id = 0;

        //set the marker type
        vehicle.type = shape;

        // Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
        vehicle.action = visualization_msgs::msg::Marker::ADD;

        // Set the scale of the marker -- 1x1x1 here means 1m on a side
        vehicle.scale.x = 5.08;
        vehicle.scale.y = 2.177;
        vehicle.scale.z = 1.736;

         // Set the color -- be sure to set alpha to something non-zero!
        vehicle.color.r = 0.0f;
        vehicle.color.g = 1.0f;
        vehicle.color.b = 0.0f;
        vehicle.color.a = 1.0;

        //vehicle.lifetime = 

        // Publish the marker
        // while (pub_marker->get_subscription_count() < 1)
        // {
        //     // if (!ros::ok())
        //     // {
        //     //     return 0;
        //     // }
        //     RCLCPP_WARN_ONCE(this->get_logger(),"Please create a //subscriber to the marker");
        //     }
   
        pub_marker->publish(vehicle);
    }

    void callback_path(const nav_msgs::msg::Path::SharedPtr msg)
    {
        //if the end point is different, the car should go from the starting point
        if( (endPoint.position.x != msg->poses.back().pose.position.x) && (endPoint.position.y != msg->poses.back().pose.position.y))
        {
            pose_count = 0;   
        }
        // Set the pose of the marker.  This is a full 6DOF pose relative to the frame/time specified in the header
        //set the position acccording to the velocity
        // x += msg->linear.x * 0.2;
        // z_angle += msg->angular.z * 0.2;
        double x = msg->poses.at(pose_count).pose.position.x;
        vehicle.pose.position.x = x;
       
        // RCLCPP_INFO(this->get_logger(), "The first term of path in x is %f", x);
        double y = msg->poses.at(pose_count).pose.position.y;
        vehicle.pose.position.y = y;

        // RCLCPP_INFO(this->get_logger(), "The first term of path in y is %f", y);
        vehicle.pose.position.z = 0;
       
        vehicle.pose.orientation = msg->poses.at(pose_count).pose.orientation;

        if(pose_count < 49)
        {
            pose_count ++;
        }

        //get the end point of the path
        endPoint = msg->poses.back().pose;
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MarkerPublisher>()); //processing data from the
  //node and callbacks
  rclcpp::shutdown();
  return 0;
}