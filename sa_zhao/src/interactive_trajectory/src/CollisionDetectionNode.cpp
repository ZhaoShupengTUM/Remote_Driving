#include <rclcpp/rclcpp.hpp>

#include <geometry_msgs/msg/polygon_stamped.hpp>
// #include <sensor_msgs/msg/point_cloud.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
// #include <sensor_msgs/point_cloud_conversion.hpp>
#include <std_msgs/msg/bool.hpp>

#define BOOST_BIND_NO_PLACEHOLDERS //need to define this before the pcl lib to use the placeholder

// #include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
// #include <pcl/conversions.h>

#include "util/CollisionDetection.hpp"
#include "util/VehicleParams.h"

using namespace std::chrono_literals;
using std::placeholders::_1;

std::vector<Pose> _corridor;
std::vector<Pose> _laserPoints;

class CollisionDetectionNode: public rclcpp::Node
{
    public:
    CollisionDetectionNode(): Node("ebs_collision_detection")
    {
        sub_lidar_pcd = this->create_subscription<sensor_msgs::msg::PointCloud2>("/carla/ego_vehicle/lidar",10, std::bind(&CollisionDetectionNode::callback_lidar_pcd, this, _1));

        sub_corridor = this->create_subscription<geometry_msgs::msg::PolygonStamped>("EBS/corridor",10, std::bind(&CollisionDetectionNode::callback_corridor, this, _1));

        pub_EBS_sig = this->create_publisher<std_msgs::msg::Bool>("EBS/signal", 10);

        // on_timer = this->create_wall_timer(100ms, std::bind(&CollisionDetectionNode::run, this));
        
        eb_active.data = false;
    }

    private:
    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr sub_lidar_pcd;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr pub_EBS_sig;
    rclcpp::Subscription<geometry_msgs::msg::PolygonStamped>::SharedPtr sub_corridor;
    // rclcpp::TimerBase::SharedPtr on_timer;
    std_msgs::msg::Bool eb_active;

    CollisionDetection collisiontools;

    void run() {
        if (CollisionDetectionNode::check_collision()) {
            eb_active.data = true;
            pub_EBS_sig->publish(eb_active);
        } else {
            eb_active.data = false;
            pub_EBS_sig->publish(eb_active);
        }
    }
    
    void callback_lidar_pcd(const sensor_msgs::msg::PointCloud2::SharedPtr ros2_pc2) {  
        // sensor_msgs::msg::PointCloud pc;
        // sensor_msgs::convertPointCloud2ToPointCloud(*pc2, pc);
        // _laserPoints.clear();
        pcl::PCLPointCloud2 pcl_pc2;
        pcl_conversions::toPCL(*ros2_pc2, pcl_pc2);
        pcl::PointCloud<pcl::PointXYZ>::Ptr temp_cloud(new pcl::PointCloud<pcl::PointXYZ>);
        pcl::fromPCLPointCloud2(pcl_pc2, *temp_cloud);
        
        _laserPoints.clear();
        for (const auto& point : temp_cloud->points) {
            _laserPoints.emplace_back(point.x+VehicleParams::lidar_position_x, point.y+VehicleParams::lidar_position_y, 0);
        }

        run();
    }

    void callback_corridor(const geometry_msgs::msg::PolygonStamped::SharedPtr corridor) {
        //PolygonStampted -> vector
        _corridor.clear();
        for (const geometry_msgs::msg::Point32& point : corridor->polygon.points) {
            _corridor.emplace_back(point.x, point.y, 0);
        }
    }

    bool check_collision() 
    {
        if(_corridor.size()>3 && _laserPoints.size()>=1)
        {
            auto collision_result = collisiontools.check_for_collisions(_corridor, _laserPoints);
            if(collision_result.first) 
            {
                RCLCPP_INFO(this->get_logger(), "Collision Point numbers: %d", collision_result.second);
                return true;
            } 
            else {
                return false;
            }
        } 
        else {
            RCLCPP_INFO(this->get_logger(), "The corridor is too small or the laser points are too little");
            return false;
        }
        //Debug 
        //     int collision_numbers {0};
        //     for (auto point : _laserPoints) 
        //     {
        //         if (collisiontools.point_in_polygon(_corridor, point)) 
        //         {
        //             RCLCPP_INFO(this->get_logger(), "x:%d, y:%d", point.get_x(), point.get_y());
        //             collision_numbers ++;
        //         }
        //     }
        //     RCLCPP_INFO(this->get_logger(), "The number of collisions is %d", collision_numbers);
        // }

        // return true;
    
    }
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CollisionDetectionNode>());
  rclcpp::shutdown();
  return 0;
}