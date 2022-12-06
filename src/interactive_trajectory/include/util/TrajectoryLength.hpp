#pragma once

#include <rclcpp/rclcpp.hpp>

#include "math.h"
#include <nav_msgs/msg/path.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <tf2/transform_datatypes.h>
#include <tf2/utils.h>

// #include <autoware_auto_planning_msgs/msg/trajectory.hpp>

namespace TrajectoryLength
{
    double calcDistance2D(const geometry_msgs::msg::Point & p, const geometry_msgs::msg::Point & q);

    double calcTrajLengthBetweenTwoIndex(const nav_msgs::msg::Path trajectory, int32_t
     begin, int32_t end);

    int findIndexofLengthfromEnd(const nav_msgs::msg::Path trajectory, double length);

    inline double brakeLength(double v, double a){
        return v*v/(2*abs(a));
    }

    double normalizeEulerAngle(const double euler);

    std::vector<geometry_msgs::msg::Pose> extractPoses(
    const nav_msgs::msg::Path & trajectory);

    std::pair<bool, int32_t> findClosestIdxWithDistAngThr(
    const std::vector<geometry_msgs::msg::Pose> & poses,
    const geometry_msgs::msg::Pose & current_pose, double th_dist, double th_yaw);
}