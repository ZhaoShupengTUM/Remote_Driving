//this node is used to collect the path 
#include <memory>
#include <iostream>
#include <chrono>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/path.hpp"
#include <std_msgs/msg/header.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/LinearMath/Quaternion.h>

using std::placeholders::_1;

class TrajCollect : public rclcpp::Node
{
    public:
    TrajCollect(): Node("TrajCollect")
    {
        //display
        RCLCPP_INFO(this->get_logger(), "The node is ready to collect all trajectories");

        //subscriber
        sub_path = this->create_subscription<nav_msgs::msg::Path>("trajectory", 10, std::bind(&TrajCollect::callback_path, this, _1));

        //publisher
        pub_all_path = this->create_publisher<nav_msgs::msg::Path>("all_trajectories",10);

        //the global path use the map frame
        all_path.header.frame_id = "map";

        path_header.frame_id = "nothing";

        //initialize the endpose
        endpose.header.frame_id = "map";
        rclcpp::Time now = this->get_clock()->now();
        endpose.header.stamp = now;
        endpose.pose.position.set__x(0);
        endpose.pose.position.set__y(0);
        endpose.pose.position.set__z(0);

        endpose.pose.orientation.set__w(1);
        endpose.pose.orientation.set__x(0);
        endpose.pose.orientation.set__y(0);
        endpose.pose.orientation.set__z(0);
    }


    private:
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_path;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_all_path;
    nav_msgs::msg::Path all_path;
    std_msgs::msg::Header path_header;
    geometry_msgs::msg::PoseStamped endpose; //store the endpose of each trajectory
    std::vector<geometry_msgs::msg::PoseStamped> poses_local;
    geometry_msgs::msg::PoseStamped pose_global;
    int newPath = 1;
    double angle_global = 0.0;
    double pose_angle = 0.0;
    double pose_angle_after = 0.0;

    void callback_path(const nav_msgs::msg::Path::SharedPtr each_path)
    {
        //ensures that only update when new paths come
        if(path_header.frame_id == each_path->header.frame_id)
        {
            newPath = 0;
        }
        else
        {
            newPath = 1;
        }

       if(newPath == 1)
       { 
          
           //store the path header
            path_header = each_path->header;

            poses_local = each_path->poses;

            for (auto& pose: poses_local)
            {
                pose_global.header.frame_id = "map";
                rclcpp::Time now = this->get_clock()->now();
                pose_global.header.stamp = now;

                RCLCPP_INFO(this->get_logger(), "The y of the pose before is %f",pose.pose.position.y);
                
                //must transform the coordinate of the pose into the frame "map", this transform contains translation and rotation 
                //Debug:vector rotation not frame rotation
                pose_global.pose.position.x = pose.pose.position.x * std::cos(angle_global) - pose.pose.position.y * std::sin(angle_global) + endpose.pose.position.x;
                pose_global.pose.position.y = pose.pose.position.x * std::sin(angle_global) + pose.pose.position.y * std::cos(angle_global) + endpose.pose.position.y;
                pose_global.pose.position.z = 0;

                //change to tf2::Quaternion
                tf2::Quaternion tf2_quat_pose, tf2_quat_r, tf2_quat_pose_r;
                tf2::convert(pose.pose.orientation, tf2_quat_pose);
                //tf2::convert(endpose.pose.orientation, tf2_quat_r);

                //dont use the tf2 multiplication rotation, but use directly the angle add
                //get the pose angel
                pose_angle = tf2_quat_pose.getAngle();
                RCLCPP_INFO(this->get_logger(), "The angle of the pose before is %f",pose_angle);

                pose_angle_after = pose_angle + angle_global;

                //Debug:set a condition to avoid the result angle after the roatation bigger as 2pi
                if(pose_angle_after > 2 * M_PI) 
                {
                    pose_angle_after -= 2*M_PI;
                }
                RCLCPP_INFO(this->get_logger(), "The angle of the pose after is %f",pose_angle_after);
                // tf2_quat_r.setRPY(0, 0, angle_global        
                // //transform the rotation of each pose
                // tf2_quat_pose_r = tf2_quat_r * tf2_quat_pose;
                // tf2_quat_pose_r = tf2_quat_pose_r.normalize();
                
                tf2_quat_pose_r.setRPY(0, 0, pose_angle_after);

                //change to geometry::msg::Quaternion
                geometry_msgs::msg::Quaternion pose_quat = tf2::toMsg(tf2_quat_pose_r);

                pose_global.pose.orientation = pose_quat;

                all_path.poses.push_back(pose_global);
            }

            //store the endpose of the path
            endpose = all_path.poses.back();

            //calculate the end pose angel
            geometry_msgs::msg::Quaternion endposeangle_global =
            all_path.poses.back().pose.orientation;
            tf2::Quaternion endposeangle_tf2_global;
            tf2::convert(endposeangle_global, endposeangle_tf2_global);
            angle_global = endposeangle_tf2_global.getAngle();

            RCLCPP_INFO(this->get_logger(), "The angle of the end pose of the global path is %f",angle_global);

            RCLCPP_INFO(this->get_logger(), "Integrate the %s trajectory", path_header.frame_id.c_str());

       }

       pub_all_path->publish(all_path);
       
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajCollect>());
  rclcpp::shutdown();
  return 0;
}