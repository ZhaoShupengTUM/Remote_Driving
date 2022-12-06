#include <chrono>
#include <functional>
#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"

//this node publish a bool signal of the taster

using namespace std::chrono_literals;

class TasterPublisher : public rclcpp::Node
{
    //create the node name
    public:
    TasterPublisher():Node("taster_pub")
    {
        publisher_ = this->create_publisher<std_msgs::msg::Bool>("taster_akt",10);

        timer_ = this->create_wall_timer(100ms, std::bind(&TasterPublisher::timer_callback, this));
    }
    private:
    void timer_callback()
    {
        auto message = std_msgs::msg::Bool();
        message.data = false;
       
        //each 3 secoonds will the taster be pressed

        if(timeTaster % 60 == 0) {
            message.data = true;
             RCLCPP_INFO(this->get_logger(), "Das Taster ist now active und das Timestep ist: %d ", timeTaster);
            //publish the message   
            publisher_->publish(message);
        }
        else
        {
            message.data = false;
            publisher_->publish(message);
        }

        timeTaster++; 

    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr publisher_;
    int timeTaster = 0;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TasterPublisher>()); //processing data from the
  //node and callbacks
  rclcpp::shutdown();
  return 0;
}