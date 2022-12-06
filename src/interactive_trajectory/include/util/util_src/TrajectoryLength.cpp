#include "util/TrajectoryLength.hpp"

namespace TrajectoryLength
{
    double calcDistance2D(const geometry_msgs::msg::Point & p, const geometry_msgs::msg::Point & q)
    {
        const double dx = p.x - q.x;
        const double dy = p.y - q.y;
        return sqrt(dx * dx + dy * dy);
    }

    double calcTrajLengthBetweenTwoIndex(
        const nav_msgs::msg::Path trajectory, 
        int32_t begin, 
        int32_t end)
    {
        geometry_msgs::msg::PoseStamped poseStamped;
        double length{0.0};
        int32_t count = trajectory.poses.size();
        //check the assignment
        if(end > count-1 || begin >= end){
            return -1;
        }else{
        for (int32_t i{begin}; i<end; i++ )
        {
            length += calcDistance2D(trajectory.poses.at(i).pose.position, trajectory.poses.at(i+1).pose.position);
        } 
        return length; 
        } 
    }

    int findIndexofLengthfromEnd(const nav_msgs::msg::Path trajectory, double length)
    {
        //check if the length is larger than the whole length of the trajectory
        geometry_msgs::msg::PoseStamped poseStamped;
        int count = trajectory.poses.size();  

        for(int i{count-1}; i>=0; i--){
            if(calcTrajLengthBetweenTwoIndex(trajectory, i, count-1) >= length){
                return i;
                break;
            }
        }
        return -1;
    }

    double normalizeEulerAngle(const double euler)
    {
        double res = euler;
        while (res > M_PI) {
            res -= (2 * M_PI);
        }
        while (res < -M_PI) {
            res += 2 * M_PI;
        }
        return res;
    }

    std::vector<geometry_msgs::msg::Pose> extractPoses(
    const nav_msgs::msg::Path & trajectory)
    {
    std::vector<geometry_msgs::msg::Pose> poses;

    for (const auto & p : trajectory.poses) {
        poses.push_back(p.pose);
    }

    return poses;
    }

    std::pair<bool, int32_t> findClosestIdxWithDistAngThr(
    const std::vector<geometry_msgs::msg::Pose> & poses,
    const geometry_msgs::msg::Pose & current_pose, double th_dist, double th_yaw)
    {
    double dist_squared_min = std::numeric_limits<double>::max();
    int32_t idx_min = -1;

    for (size_t i = 0; i < poses.size(); ++i) {
        const double ds = calcDistance2D(poses.at(i).position, current_pose.position);
        if (ds > th_dist ) {
        continue;
        }

        const double yaw_pose = tf2::getYaw(current_pose.orientation);
        const double yaw_ps = tf2::getYaw(poses.at(i).orientation);
        const double yaw_diff = normalizeEulerAngle(yaw_pose - yaw_ps);
        if (fabs(yaw_diff) > th_yaw) {
        continue;
        }

        if (ds < dist_squared_min) {
        dist_squared_min = ds;
        idx_min = i;
        }
    }

    return (idx_min >= 0) ? std::make_pair(true, idx_min) : std::make_pair(false, idx_min);
    }

}