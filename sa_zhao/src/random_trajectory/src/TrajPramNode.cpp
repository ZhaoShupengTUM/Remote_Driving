#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float64.hpp"
#include "traj_interfaces/msg/traj_param.hpp"

//This node is only used to collect all the sensor data and than publish them to a calcualtion node

using std::placeholders::_1;

//flag_ controls the reading of the two parameters 
int flag_pedal = 0;
int flag_lenk = 0;

//_read marks that the parameter is already read, if both are read, the parameter message can be published
int lenkrad_read = 0;
int pedal_read = 0;

auto trajParam = traj_interfaces::msg::TrajParam();

class TasterSubscriber: public rclcpp::Node
{
    public:
    TasterSubscriber(): Node("TrajCalc")
    {
        //display that the node is prepared to receive
        RCLCPP_INFO(this->get_logger(), "The node is ready to collect the sensor date!");

        //subscribe the taster
        sub_taster = this->create_subscription<std_msgs::msg::Bool> (
            "taster_akt", 10, std::bind(&TasterSubscriber::callback_taster, this, _1)
        );

        //subscribe the Lenkrad
        sub_lenkrad = this->create_subscription<std_msgs::msg::Float64> (
            "lenkrad_winkel", 10, std::bind(&TasterSubscriber::callback_lenkrad, this, _1)
        );

        //subscribe the Gaspedal
        sub_gaspedal = this->create_subscription<std_msgs::msg::Float64> (
            "gaspedal_winkel", 10, std::bind(&TasterSubscriber::callback_gaspedal, this, _1)
        );

        //publish the trajectory parameters
        pub_trajparam = this->create_publisher<traj_interfaces::msg::TrajParam>("trajectory_parameter", 10);
    }

    private:

    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr sub_taster;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr sub_lenkrad;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr sub_gaspedal;
    rclcpp::Publisher<traj_interfaces::msg::TrajParam>::SharedPtr pub_trajparam;
    

    void callback_taster(const std_msgs::msg::Bool::SharedPtr msg)
    {
        if(msg->data == true)
        {
            RCLCPP_INFO(this->get_logger(), "I received: Taster active!");
            flag_lenk = 1;
            flag_pedal = 1;
            
        } 
        // else {
        //     flag_lenk = 0;
        //     flag_pedal = 0;
        // }
    }

    void callback_lenkrad(const std_msgs::msg::Float64::SharedPtr msg) 
    {
        if(flag_lenk == 1)
        {
            RCLCPP_INFO(this->get_logger(), "Das Lenkrad ist jetzt: %f degree." , msg->data);
            //lenkrad = msg->data;
            trajParam.lenkrad = msg->data;
            lenkrad_read = 1;

            //if the pedal is already read then publish
            if(pedal_read == 1)
            {
                pub_trajparam ->publish(trajParam);
                pedal_read = 0;
                lenkrad_read = 0;
            }
        }
        flag_lenk = 0;
        
      
    }

    void callback_gaspedal(const std_msgs::msg::Float64::SharedPtr msg)
    {
        
        if(flag_pedal == 1)
        {
            RCLCPP_INFO(this->get_logger(), "Das Gaspedal ist jetzt: %f", msg->data);
            //pedal = msg->data;
            trajParam.pedal = msg->data;
            pedal_read = 1;

            //if the lenkrad is already read then publish
            if(lenkrad_read == 1)
            {
                pub_trajparam ->publish(trajParam);
                pedal_read = 0;
                lenkrad_read = 0;
            }
        }
        flag_pedal = 0;
        
    }
    
};


// void TasterSubscriber::calc_trajactory(double lenkrad, double pedal)
//     {
//         double distance = traj.calc_distance(pedal);

//         //180 degree lenkrad -- 40 degree steering wheel angle
//         double beta = traj.calc_beta(lenkrad/18*4);

//         int numberofPoints = 50;
//         double ds = distance/(numberofPoints - 1);

//         double x(0), y(0), yaw(0);

//         RCLCPP_INFO(this->get_logger(), "The trajectory is calculated here: /n");

//         for(int i=1; i<numberofPoints; i++) 
//         {
//             //std::cout<<"x: "<<x<<"y: "<<y<<"yaw: "<<yaw<<std::endl
//             RCLCPP_INFO(this->get_logger(), "x: %f;  y: %f;  yaw:%f /n");
//             x += ds * std::cos(yaw + beta);
//             y += ds * std::sin(yaw + beta);
//             yaw += ds * std::sin(beta)/VehicleParams::distance_rear_axle;
//         }

//         RCLCPP_INFO(this->get_logger(), "The trajectory calculation is finished! /n");
//     }


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TasterSubscriber>());
  rclcpp::shutdown();
  return 0;
}
