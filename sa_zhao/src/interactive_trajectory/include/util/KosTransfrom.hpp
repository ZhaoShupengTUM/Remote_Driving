#ifndef KOSTRANSFORM_H
#define KOSTRANSFORM_H

#include <rclcpp/rclcpp.hpp>

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>

#include <tf2/transform_datatypes.h>
#include <tf2/utils.h>
#include <tf2_ros/transform_listener.h>

#define TF_UTILS_LOGGER "tf_utils"

namespace KosTransform
{
    geometry_msgs::msg::Point transformToAbsoluteCoordinate2D(
        const geometry_msgs::msg::Point & point, const geometry_msgs::msg::Pose & origin);

    geometry_msgs::msg::Point transformToRelativeCoordinate2D(
        const geometry_msgs::msg::Point & point, const geometry_msgs::msg::Pose & origin);

    geometry_msgs::msg::Quaternion getQuaternionFromYaw(const double _yaw);

    geometry_msgs::msg::PoseStamped transform2pose(
    const geometry_msgs::msg::TransformStamped & transform);
    
    geometry_msgs::msg::TransformStamped waitForTransform(
    const tf2_ros::Buffer & tf_buffer, const std::string & from, const std::string & to);
}

#endif