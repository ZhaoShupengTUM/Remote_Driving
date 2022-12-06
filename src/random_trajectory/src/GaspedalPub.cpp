#include <chrono>
#include <functional>
#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

#define PI 3.1415926

//this node publish a sinus signal of the gaspedal

using namespace std::chrono_literals;

class GaspedalPublisher : public rclcpp::Node
{
    //create the node name
    public:
    GaspedalPublisher():Node("gaspedal_pub")
    {
        publisher_ = this->create_publisher<std_msgs::msg::Float64>("gaspedal_winkel",10);

        timer_ = this->create_wall_timer(1000ms, std::bind(&GaspedalPublisher::timer_callback, this));
    }
    private:
    void timer_callback()
    {
        auto message = std_msgs::msg::Float64();
        
        //define the period
        double T = 2*PI;
        double Winkel_v = 2*PI / T;
        double shift = 1.0;

        //define the amplitude, assumpt that the pedal range [0,2]
        double A = 1;

        message.data  =  A * std::sin(Winkel_v * (timeGaspedal*0.1)) + shift;
        timeGaspedal++; 

        RCLCPP_INFO(this->get_logger(), "Das Gaspedalwinkel: '%f'", message);
        //publish the message
        publisher_->publish(message);

    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
    size_t count_;
    int timeGaspedal = 0;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GaspedalPublisher>()); //processing data from the
  //node and callbacks
  rclcpp::shutdown();
  return 0;
}