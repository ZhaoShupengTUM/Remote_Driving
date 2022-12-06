//this node is used to collect the path 
#include "TrajCollectNode.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;

TrajCollect::TrajCollect(): Node("traj_collect")
{
    //subscriber
    sub_path = this->create_subscription<nav_msgs::msg::Path>("trajectory/confirmed", 10, std::bind(&TrajCollect::callback_path, this, _1));

    //publisher
    pub_all_path = this->create_publisher<nav_msgs::msg::Path>("trajectory/collected",10);

    tf_buffer_ =
    std::make_unique<tf2_ros::Buffer>(this->get_clock());
    transform_listener_ =
    std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

    timer_1 = this->create_wall_timer(50ms, std::bind(&TrajCollect::send_collected_path, this));

    all_path.header.frame_id = "map";
    stored_path_header.frame_id = "nothing";
}

TrajCollect::~TrajCollect() {}

void TrajCollect::callback_path(const nav_msgs::msg::Path::SharedPtr msg_path)
{
    receivedPath = true;
    each_path = *msg_path;
    if(each_path.header.frame_id != stored_path_header.frame_id)
    {
        newPath = true;
    }
    stored_path_header = msg_path->header;
}

void TrajCollect::link_path(nav_msgs::msg::Path &path_after_link, nav_msgs::msg::Path &single_path)
{  
    std::vector<geometry_msgs::msg::PoseStamped>::iterator pose_begin;
    if (single_path.header.frame_id == "path_1") {
        pose_begin = single_path.poses.begin();
    } else {
        pose_begin = single_path.poses.begin() + 1;
    }
    std::vector<geometry_msgs::msg::PoseStamped>::iterator pose_end = single_path.poses.end();

    //get the frame transform of single path
    auto pathn_map = KosTransform::waitForTransform(*tf_buffer_, "map", single_path.header.frame_id);
    geometry_msgs::msg::PoseStamped poseofFrame = KosTransform::transform2pose(pathn_map);

    //koordinate transform: path->map
    std::vector<geometry_msgs::msg::PoseStamped>::iterator pose;
    geometry_msgs::msg::PoseStamped pose_global;
    double frame_angle  {0.0};
    double pose_angle   {0.0};
    double pose_angle_after {0.0};
    for (pose = pose_begin; pose != pose_end; pose++)
    {
        pose_global.header.frame_id = "map";
        rclcpp::Time now = this->get_clock()->now();
        pose_global.header.stamp = now;
        
        //position transform
        pose_global.pose.position = KosTransform::transformToAbsoluteCoordinate2D(pose->pose.position, poseofFrame.pose);
        
        //orientation transform
        pose_angle = tf2::getYaw(pose->pose.orientation);
        frame_angle = tf2::getYaw(poseofFrame.pose.orientation);
        pose_angle_after = pose_angle + frame_angle;

        tf2::Quaternion pose_global_orientation;
        pose_global_orientation.setRPY(0,0,pose_angle_after);
        pose_global.pose.orientation = tf2::toMsg(pose_global_orientation);

        path_after_link.poses.push_back(pose_global);
    }

    //set the header time stamp
    rclcpp::Time now = this->get_clock()->now();
    path_after_link.header.set__stamp(now);
}

void TrajCollect::send_collected_path()
{
    if(receivedPath)
    {
        if(newPath)
        {
            link_path(all_path, each_path);
            newPath = false;
        }
    pub_all_path->publish(all_path);
    }
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajCollect>());
  rclcpp::shutdown();
  return 0;
}