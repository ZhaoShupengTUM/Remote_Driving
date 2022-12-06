#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker_array.hpp>

using namespace std::chrono_literals;

class ObstalceShow: public rclcpp::Node
{
    public:
    ObstalceShow(): Node("obstacle_show")
    {
        pub_markers = this->create_publisher<visualization_msgs::msg::MarkerArray>("marker/obstalces", 10);

        timer_pub = this->create_wall_timer(50ms, std::bind(&ObstalceShow::send_marker_msg, this));

        initial_markers();
    }

    private:
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr pub_markers;
    rclcpp::TimerBase::SharedPtr timer_pub;

    visualization_msgs::msg::MarkerArray marker_array;
    visualization_msgs::msg::Marker marker_start;
    visualization_msgs::msg::Marker marker_end;
    visualization_msgs::msg::Marker marker_car_start;

    void send_marker_msg() {
        initial_markers();
        pub_markers->publish(marker_array);
        marker_array.markers.clear();
    }

    void initial_markers() {
        //marker start
        marker_start.header.frame_id = "map";
        marker_start.header.stamp = this->get_clock()->now();
        marker_start.id = 0;
        marker_start.type = visualization_msgs::msg::Marker::ARROW;
        marker_start.action = visualization_msgs::msg::Marker::ADD;
        marker_start.pose.position.set__x(-1.44);
        marker_start.pose.position.set__y(0);
        marker_start.pose.position.set__z(0);
        marker_start.pose.orientation.set__w(1);
        marker_start.pose.orientation.set__x(0);
        marker_start.pose.orientation.set__y(0);
        marker_start.pose.orientation.set__z(0);
        marker_start.scale.x = 3;
        marker_start.scale.y = 0.2;
        marker_start.scale.z = 0.2;
        marker_start.color.a = 1.0; // Don't forget to set the alpha!
        marker_start.color.r = 25.0;
        marker_start.color.g = 25.0;
        marker_start.color.b = 112.0;

        //marker end
        marker_end.header.frame_id = "map";
        marker_end.header.stamp = this->get_clock()->now();
        marker_end.id = 1;
        marker_end.type = visualization_msgs::msg::Marker::ARROW;
        marker_end.action = visualization_msgs::msg::Marker::ADD;
        marker_end.pose.position.set__x(10);
        marker_end.pose.position.set__y(12);
        marker_end.pose.position.set__z(0);
        marker_end.pose.orientation.set__w(1);
        marker_end.pose.orientation.set__x(0);
        marker_end.pose.orientation.set__y(0);
        marker_end.pose.orientation.set__z(0);
        marker_end.scale.x = 3;
        marker_end.scale.y = 0.2;
        marker_end.scale.z = 0.2;
        marker_end.color.a = 1.0; // Don't forget to set the alpha!
        marker_end.color.r = 25.0;
        marker_end.color.g = 25.0;
        marker_end.color.b = 112.0;

        //marker car
        marker_car_start.header.frame_id = "map";
        marker_car_start.header.stamp = this->get_clock()->now();
        marker_car_start.id = 2;
        marker_car_start.type = visualization_msgs::msg::Marker::CUBE;
        marker_car_start.action = visualization_msgs::msg::Marker::ADD;
        marker_car_start.pose.position.set__x(-1.44);
        marker_car_start.pose.position.set__y(0);
        marker_car_start.pose.position.set__z(0);
        marker_car_start.pose.orientation.set__w(1);
        marker_car_start.pose.orientation.set__x(0);
        marker_car_start.pose.orientation.set__y(0);
        marker_car_start.pose.orientation.set__z(0);
        marker_car_start.scale.x = 5;
        marker_car_start.scale.y = 3;
        marker_car_start.scale.z = 2;
        marker_car_start.color.a = 0.3; // Don't forget to set the alpha!
        marker_car_start.color.r = 255.0;
        marker_car_start.color.g = 255.0;
        marker_car_start.color.b = 0.0;

        marker_array.markers.push_back(marker_start);
        marker_array.markers.push_back(marker_end);
        marker_array.markers.push_back(marker_car_start);
    }

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ObstalceShow>());
  rclcpp::shutdown();
  return 0;
}