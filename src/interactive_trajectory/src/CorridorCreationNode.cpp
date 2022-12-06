#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/polygon_stamped.hpp>
#include <ackermann_msgs/msg/ackermann_drive.hpp>

#include "util/CorridorCreation.hpp"
#include "util/TrajectoryPrediction.hpp"

using std::placeholders::_1;

class CorridorCalc: public rclcpp::Node
{
    public:
    CorridorCalc(): Node("ebs_corridor")
    {
        //subscription of path
        sub_odo = this->create_subscription<nav_msgs::msg::Odometry>("carla/ego_vehicle/odometry", 10, std::bind(&CorridorCalc::callback_corridor, this, _1));

        sub_ackermann = this->create_subscription<ackermann_msgs::msg::AckermannDrive>("carla/ego_vehicle/ackermann_cmd", 10, std::bind(&CorridorCalc::callback_steer_angle, this, _1));

        //publisher of corridor
        pub_polygon = this->create_publisher<geometry_msgs::msg::PolygonStamped>("EBS/corridor",10);
    }

    private:
    rclcpp::Publisher<geometry_msgs::msg::PolygonStamped>::SharedPtr pub_polygon;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_odo;
    rclcpp::Subscription<ackermann_msgs::msg::AckermannDrive>::SharedPtr sub_ackermann;
    CorridorCreation corridortool;
    TrajectoryPrediction trajtool;
    double current_steer_angle{0.0};
    double max_del{5.0};

    void callback_steer_angle(const ackermann_msgs::msg::AckermannDrive::SharedPtr current_cmd)
    {
        current_steer_angle = current_cmd->steering_angle;
    }

    void callback_corridor(const nav_msgs::msg::Odometry::SharedPtr current_odo)
    {
        //get the velocity
        double v = current_odo->twist.twist.linear.x;

        //calc the braking distance
        double braking_dis = trajtool.braking_distance(v, max_del);

        //get the predicted trajectory
        std::vector<Pose> predicted_traj = trajtool.predict_vehicle_trajectory(current_steer_angle, braking_dis+0.5);

        //create a corridor
        std::vector<Pose> corriPre;
        corriPre = corridortool.calc_corridor(predicted_traj);

        //change the corridor data to the ros data type
        geometry_msgs::msg::PolygonStamped corPreRos;
        corPreRos.header.frame_id = current_odo->child_frame_id;
        corPreRos.header.stamp = current_odo->header.stamp;

        for (const auto& p: corriPre) {
            geometry_msgs::msg::Point32 points;
            points.x = p.get_x();
            points.y = p.get_y();
            corPreRos.polygon.points.push_back(points);
        }

        pub_polygon->publish(corPreRos);
    }
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CorridorCalc>());
  rclcpp::shutdown();
  return 0;
}