#include <memory>
#include <iostream>
#include <chrono>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "traj_interfaces/msg/traj_param.hpp"
#include "nav_msgs/msg/path.hpp"
#include "pfas_head/TrajectoryPrediction.hpp"
#include "math.h"
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>

//the tf2 library
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/exceptions.h>
#include <tf2_ros/transform_listener.h>  //receiving transforms
#include <tf2_ros/buffer.h>  //buffer the transformation


//this node receive the TrajParam message 
//and publish a nav_msgs/msg/path message
//and alos publishes a twist message to make the vehicle go along the trajectory

using std::placeholders::_1;
using namespace std::chrono_literals;

TrajectoryPrediction trajtool;
double swa = 0.0;
double distance = 0.0;
double rwa = 0.0;
std::vector<Pose> traj;

class TrajCalculation: public rclcpp::Node
{
    public:
    TrajCalculation(): Node("TrajGeneration")
    {
        //display that the node is ready
        // RCLCPP_INFO(this->get_logger(), "The node is ready to generate a trajectory");

        //subscriber of the trajectory parameters
        sub_param = this->create_subscription<traj_interfaces::msg::TrajParam> (
            "trajectory_parameter", 10, std::bind(&TrajCalculation::callback_traj, this, _1)
        );

        //publisher of the trajectry
        pub_path = this->create_publisher<nav_msgs::msg::Path>("trajectory",10);

        //publish the velecity and angular velocity
        pub_twist = this->create_publisher<geometry_msgs::msg::Twist>("vehicle_cmd_vel",10);
        
        //the frequency of publishing the trajectory
        timer_ = this->create_wall_timer(
        100ms, std::bind(&TrajCalculation::timer_callback, this));

        //create a TransformListner object
        tf_buffer_ =
        std::make_unique<tf2_ros::Buffer>(this->get_clock());

        transform_listener_ =
        std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

        //display that the node is ready
        RCLCPP_INFO(this->get_logger(), "The node is ready to generate a trajectory");


    }

    private:
    rclcpp::Subscription<traj_interfaces::msg::TrajParam>::SharedPtr sub_param;  //subscriber of the TrajParam message
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr pub_path;  //publisher of the path message
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_twist;
    rclcpp::TimerBase::SharedPtr timer_;  //a timer defining the running period
    std::shared_ptr<tf2_ros::TransformListener> transform_listener_{nullptr};
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    int pathID = 0;

    void callback_traj(const traj_interfaces::msg::TrajParam::SharedPtr msg)
    {
        //this function is used to clalulate the trajectory of the type std::vector<Pose>
        //steering wheel angel(change the unit of degree to radian)
        swa = msg->lenkrad/360*2*M_PI;
        
        //distance
        distance = msg->pedal;
       
        //road wheel angle
        rwa = swa * 
        (VehicleParams::maximum_road_wheel_angle / VehicleParams::maximum_steering_wheel_angle);

        //get the trajectory
        traj = trajtool.predict_vehicle_trajectory(rwa, trajtool.calc_distance(msg->pedal));

        pathID += 1;
        RCLCPP_INFO(this->get_logger(), "Receieve the %s trajectory parameter", std::to_string(pathID).c_str());
    }

    void timer_callback()
    {
        //first need to find the KoS of the path
        std::string fromFrameRel = "map";
        std::string toFrameRel = "path_" + std::to_string(pathID);
        geometry_msgs::msg::TransformStamped transformStamped;

        try {
            transformStamped = tf_buffer_->lookupTransform(
            toFrameRel, fromFrameRel,
            tf2::TimePointZero);
        } catch (tf2::TransformException & ex) {
        //   RCLCPP_INFO(
        //     this->get_logger(), "Could not transform %s to %s: %s",
        //     toFrameRel.c_str(), fromFrameRel.c_str(), ex.what());
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Receieve the %s trajectory KoS", std::to_string(pathID).c_str());

        //part1: change the trajectory type from std::vector<Pose> to the nav_msgs::path and publish it
        nav_msgs::msg::Path trajectory;

        //get the system time
        trajectory.header.stamp = this->now();

        //set the coordinate system
        trajectory.header.frame_id = "path_" + std::to_string(pathID);

        for (const auto& pose: traj) {
            RCLCPP_INFO(this->get_logger(), "The yaw angle of the pose in Pose form is %f", pose.get_yaw());

            geometry_msgs::msg::PoseStamped p;

            //Debug: if the yaw rate is negative, should transform to a positive value, which corresponds to the get_angle range
            double yaw_normal = pose.get_yaw();
            if(pose.get_yaw() < 0)
            {
                yaw_normal = pose.get_yaw() + 2*M_PI;
            }

            //calculate the Quaternion from the yaw angle
            tf2::Quaternion q;
            q.setRPY(0,0,yaw_normal);       
            p.pose.orientation =  tf2::toMsg(q);

            RCLCPP_INFO(this->get_logger(), "The yaw angle of the pose in Quaternion is %f", q.getAngle());

            //calculate the x,y position
            p.pose.position.x = pose.get_x();
            p.pose.position.y = pose.get_y();

            p.header.stamp = this->now();
            p.header.frame_id = "map";

            trajectory.poses.push_back(p);
        }
        
        //if the parameter is read, then publish the trajectory
        if(distance != 0)
        {
            pub_path->publish(trajectory);
           // RCLCPP_INFO(this->get_logger(), "Publishing the trajectory");
        }
        
        //part2: using the trajectory parameters to calculate the velocities
        //create a twist message
        geometry_msgs::msg::Twist vehicle_vel;
        vehicle_vel.linear.x = 3; //constant linear velocity

        //calculate the turning radius
        double r = VehicleParams::distance_rear_axle / trajtool.calc_beta(rwa);
        vehicle_vel.angular.z = vehicle_vel.linear.x / r;

        pub_twist->publish(vehicle_vel);

    }

};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TrajCalculation>());
  rclcpp::shutdown();
  return 0;
}
