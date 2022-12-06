//this node publish a tf to the TralCalc node to tell the starting frame of each path
//this node listens to the taster, the taster control the tf frame publihser
//this node listens to the TrajGeneration to calculate the next path starting frame

#include <geometry_msgs/msg/transform_stamped.hpp>

#include <rclcpp/rclcpp.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>
#include <nav_msgs/msg/path.hpp>
#include "std_msgs/msg/bool.hpp"

#include <memory>

using std::placeholders::_1;

class StaticFramePublisher : public rclcpp::Node
{
public:
  explicit StaticFramePublisher(): Node("PathframeNode")
  {
    RCLCPP_INFO(this->get_logger(), "The node is ready to publish a transform");

    //pubslisher of new and old KoS
    tf_publisher_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

    //subscriber of taster
    sub_taster = this->create_subscription<std_msgs::msg::Bool>(
        "taster_akt",10, std::bind(&StaticFramePublisher::callback_taster, this, _1)
    );

    //subscriber of the trajectory
    sub_path = this->create_subscription<nav_msgs::msg::Path>(
      "trajectory", 10, std::bind(&StaticFramePublisher::callback_path, this, _1)
    );

    //there must be 2 transforms for each trajectory, one is the 

    //initialize the path_1 KoS as the same as the map 
    rclcpp::Time now = this->get_clock()->now();
    t.header.stamp = now;
   
    t.header.frame_id = "map";
    t.child_frame_id = "path_" + std::to_string(pathID);

    t.transform.translation.x = 0;
    t.transform.translation.y = 0;
    t.transform.translation.z = 0;
    tf2::Quaternion q;
    q.setRPY(0,0,0);
    t.transform.rotation.x = q.x();
    t.transform.rotation.y = q.y();
    t.transform.rotation.z = q.z();
    t.transform.rotation.w = q.w();

  }

private:
  void callback_path(const nav_msgs::msg::Path::SharedPtr path)
  {
    endpose = path->poses.back();

    //use the end pose to create a new transform
    rclcpp::Time now = this->get_clock()->now();
    t.header.stamp = now;

    //Debug: should set the transformation from the path_0 to path_1
    t.header.frame_id = "path_" + std::to_string(pathID - 1);
    t.child_frame_id = "path_" + std::to_string(pathID);

    t.transform.translation.set__x(endpose.pose.position.x);
    t.transform.translation.set__y(endpose.pose.position.y);
    t.transform.translation.set__z(endpose.pose.position.z);
    t.transform.rotation = endpose.pose.orientation;

  }

//the taster will make the pathID +1 
  void callback_taster(const std_msgs::msg::Bool::SharedPtr msg)
  {
      //the taster will send a new frame which is on the endpose of the trajectory
      if(msg->data == true)
      {
        tf_publisher_->sendTransform(t);
        pathID += 1;
        RCLCPP_INFO(this->get_logger(), "Send the frame %s", t.child_frame_id.c_str());
      }
     
  }

    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_publisher_;
    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr sub_taster;
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;
    geometry_msgs::msg::PoseStamped endpose;
    geometry_msgs::msg::TransformStamped t;
    //geometry_msgs::msg::TransformStamped t_global;
    int pathID = 1;

};

int main(int argc, char * argv[])
{
  auto logger = rclcpp::get_logger("logger");

  // Pass parameters and initialize node argv
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StaticFramePublisher>());
  rclcpp::shutdown();
  return 0;
}
