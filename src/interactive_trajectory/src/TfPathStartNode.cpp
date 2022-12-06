//this node publish a tf to the TralVisual node to tell the starting frame of each path
//this node listens to the taster, the taster control the tf frame publihser
//this node listens to the TrajVisual to calculate the next path starting frame

#include <geometry_msgs/msg/transform_stamped.hpp>

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/path.hpp>
#include "traj_interfaces/msg/traj_param.hpp"
// #include "traj_interfaces/msg/state_machine.hpp"

#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h> 

#include "util/KosTransfrom.hpp"

using std::placeholders::_1;

class StaticFramePublisher : public rclcpp::Node
{
public:
  explicit StaticFramePublisher(): Node("tf_pathframe_transfer")
  {
    //pubslisher of KoS
    tf_publisher_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

    //subscriber of params
    sub_taster = this->create_subscription<traj_interfaces::msg::TrajParam>(
        "interactive/param",10, std::bind(&StaticFramePublisher::callback_taster, this, _1)
    );

    //subscriber of the trajectory
    sub_path = this->create_subscription<nav_msgs::msg::Path>(
      "trajectory/wished", 10, std::bind(&StaticFramePublisher::callback_path, this, _1)
    );

    tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
    transform_listener_= std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

    //check the transfrom between path_start and ego_vehicle 
    toFrameRel = "path_start";
    fromFrameRel = "map";
    auto transform_path_vehicle = KosTransform::waitForTransform(*tf_buffer_, fromFrameRel, toFrameRel);

    initialize_path_1();
  }

private:
  rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_taster;
  rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;

  std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_publisher_;
  std::shared_ptr<tf2_ros::TransformListener> transform_listener_{nullptr};
  std::unique_ptr<tf2_ros::Buffer> tf_buffer_;

  geometry_msgs::msg::PoseStamped endpose;
  geometry_msgs::msg::TransformStamped t;
  std::string toFrameRel;
  std::string fromFrameRel;
  int pathID = 1;
  bool taster_flag = false;
  // bool current_r_gear = false;
  // bool last_r_gear = false;
  // bool gear_change = false;

  void initialize_path_1()
  {
    rclcpp::Time now = this->get_clock()->now();
    t.header.stamp = now;
   
    t.header.frame_id = "path_start";
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

    tf_publisher_->sendTransform(t);
    RCLCPP_INFO(this->get_logger(), "Send the frame %s", t.child_frame_id.c_str());
  }

  void callback_path(const nav_msgs::msg::Path::SharedPtr path)
  {
    endpose = path->poses.back();
    //test
    // RCLCPP_INFO(this->get_logger(), "The frame of the endpose is %s", endpose.header.frame_id.c_str());
  }

  void callback_taster(const traj_interfaces::msg::TrajParam::SharedPtr msg)
  {
      taster_flag = msg->taster_confirm;
      // last_r_gear = current_r_gear;
      // current_r_gear = msg->r_gear;
      // if(last_r_gear == current_r_gear) {
      //   gear_change = false;
      // } else {
      //   gear_change = true;
      // }

      //the taster will send a new frame which is on the endpose of the trajectory
      if(taster_flag)
      {
        rclcpp::Time now = this->get_clock()->now();
        t.header.stamp = now;

        //Debug: should set the transformation from the path_1 to path_2
        t.header.frame_id = "path_" + std::to_string(pathID);
        t.child_frame_id = "path_" + std::to_string(pathID + 1);

        t.transform.translation.set__x(endpose.pose.position.x);
        t.transform.translation.set__y(endpose.pose.position.y);
        t.transform.translation.set__z(endpose.pose.position.z);
        t.transform.rotation = endpose.pose.orientation;

        tf_publisher_->sendTransform(t);
        
        pathID += 1;
        RCLCPP_INFO(this->get_logger(), "Send the frame %s", t.child_frame_id.c_str());
      }
      taster_flag = false;

      //the change of gear will generate a new path_n+1 frame as the same as the base_link
      // if(gear_change)
      // {
      //   // if(pathID != 1)
      //   {
      //     auto baselink_transform = KosTransform::waitForTransform(*tf_buffer_, "path_"+std::to_string(pathID), "base_link");
      //     rclcpp::Time now = this->get_clock()->now();
      //     baselink_transform.header.stamp = now;
      //     baselink_transform.child_frame_id = "path_" + std::to_string(pathID+1);
      //     baselink_transform.header.frame_id = "path_" + std::to_string(pathID);
      //     tf_publisher_->sendTransform(baselink_transform);  

      //     pathID += 1;    
      //     RCLCPP_INFO(this->get_logger(), "Send the frame %s", baselink_transform.child_frame_id.c_str());    
      //   }
      // }
  }
};

int main(int argc, char * argv[])
{
  auto logger = rclcpp::get_logger("logger");
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StaticFramePublisher>());
  rclcpp::shutdown();
  return 0;
}