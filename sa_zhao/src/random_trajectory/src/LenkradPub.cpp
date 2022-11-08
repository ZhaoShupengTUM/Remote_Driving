#include <chrono>
#include <functional>
#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

#define PI 3.1415926

//this node publish a sinus signal of the lenkrad

using namespace std::chrono_literals;

class LenkradPublisher : public rclcpp::Node
{
    //create the node name
    public:
    LenkradPublisher():Node("lenkrad_pub")
    {
        publisher_ = this->create_publisher<std_msgs::msg::Float64>("lenkrad_winkel",10);

        timer_ = this->create_wall_timer(1001ms, std::bind(&LenkradPublisher::timer_callback, this));
    }
    private:
    void timer_callback()
    {
        auto message = std_msgs::msg::Float64();
        
        //define the period
        double T = 2*PI;
        double Winkel_v = 2*PI / T;

        //define the amplitude
        double A = 180;
        
        //define a initial phase
        double phase = PI/2;

        message.data  =  A * std::sin(Winkel_v * (timeLenkrad*0.1) + phase);
        timeLenkrad++; 

        RCLCPP_INFO(this->get_logger(), "Das Lenkradwinkel: '%f'", message);
        //publish the message
        publisher_->publish(message);

    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
    size_t count_;
    int timeLenkrad = 0;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<LenkradPublisher>()); //processing data from the
  //node and callbacks
  rclcpp::shutdown();
  return 0;
}