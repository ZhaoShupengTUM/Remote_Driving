#include "util/KosTransfrom.hpp"

namespace KosTransform
{
    rclcpp::Logger logger = rclcpp::get_logger(TF_UTILS_LOGGER);

    geometry_msgs::msg::Point transformToAbsoluteCoordinate2D(
        const geometry_msgs::msg::Point & point, const geometry_msgs::msg::Pose & origin)
    {
        // rotation
        geometry_msgs::msg::Point rot_p;
        double yaw = tf2::getYaw(origin.orientation);
        rot_p.x = (cos(yaw) * point.x) + ((-1) * sin(yaw) * point.y);
        rot_p.y = (sin(yaw) * point.x) + (cos(yaw) * point.y);

        // translation
        geometry_msgs::msg::Point res;
        res.x = rot_p.x + origin.position.x;
        res.y = rot_p.y + origin.position.y;
        res.z = origin.position.z;

        return res;
    }

     geometry_msgs::msg::Point transformToRelativeCoordinate2D(
        const geometry_msgs::msg::Point & point, const geometry_msgs::msg::Pose & origin)
    {
        // translation
        geometry_msgs::msg::Point trans_p;
        trans_p.x = point.x - origin.position.x;
        trans_p.y = point.y - origin.position.y;

        // rotation (use inverse matrix of rotation)
        double yaw = tf2::getYaw(origin.orientation);

        geometry_msgs::msg::Point res;
        res.x = (cos(yaw) * trans_p.x) + (sin(yaw) * trans_p.y);
        res.y = ((-1) * sin(yaw) * trans_p.x) + (cos(yaw) * trans_p.y);
        res.z = origin.position.z;

        return res;
    }

    geometry_msgs::msg::Quaternion getQuaternionFromYaw(const double _yaw)
    {
        tf2::Quaternion q;
        q.setRPY(0, 0, _yaw);
        return tf2::toMsg(q);
    }

    geometry_msgs::msg::PoseStamped transform2pose(
    const geometry_msgs::msg::TransformStamped & transform)
    {
        geometry_msgs::msg::PoseStamped pose;
        pose.header = transform.header;
        pose.pose.position.x = transform.transform.translation.x;
        pose.pose.position.y = transform.transform.translation.y;
        pose.pose.position.z = transform.transform.translation.z;
        pose.pose.orientation = transform.transform.rotation;
        return pose;
    }

    geometry_msgs::msg::TransformStamped waitForTransform(
    const tf2_ros::Buffer & tf_buffer, const std::string & from, const std::string & to)
    {
        while (rclcpp::ok()) {
            try {
            const auto transform = tf_buffer.lookupTransform(from, to, tf2::TimePointZero);
            return transform;
            } catch (tf2::TransformException & ex) {
            RCLCPP_INFO(logger, "waiting for transform from `%s` to `%s` ...", from.c_str(), to.c_str());
            rclcpp::sleep_for(std::chrono::milliseconds(5000));
            }
        }
        return geometry_msgs::msg::TransformStamped();
    }


}