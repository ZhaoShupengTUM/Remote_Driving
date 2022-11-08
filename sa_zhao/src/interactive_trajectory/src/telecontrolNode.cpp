//include ros-relative
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <std_msgs/msg/bool.hpp>
#include "traj_interfaces/msg/traj_param.hpp"
#include "traj_interfaces/msg/state_machine.hpp"

#include "util/StateMachine.hpp"

//include keyboard-relative
#include <signal.h>
#include <stdio.h>
# include <termios.h>
# include <unistd.h>

#include <chrono>
using namespace std::chrono_literals;

//this is the ASCII code value of the keyborad
#define KEYCODE_RIGHT 0x43
#define KEYCODE_LEFT 0x44
#define KEYCODE_UP 0x41
#define KEYCODE_DOWN 0x42
#define KEYCODE_F 0x66
#define KEYCODE_Q 0x71
#define KEYCODE_B 0x62

using std::placeholders::_1;

class KeyboardReader
{
    public:
    KeyboardReader(): kfd(0)
    {
      // get the console in raw mode
      //tcgetattr
      tcgetattr(kfd, &cooked);
      struct termios raw;
      memcpy(&raw, &cooked, sizeof(struct termios));
      raw.c_lflag &=~ (ICANON | ECHO);

      // Setting a new line, then end of file
      raw.c_cc[VEOL] = 1;
      raw.c_cc[VEOF] = 2;
      tcsetattr(kfd, TCSANOW, &raw);
    }

    void readOne(char * c)
    {
      int rc = read(kfd, c, 1);
      if (rc < 0)
      {
        throw std::runtime_error("read failed");
      }
    }

    void shutdown()
    {
      tcsetattr(kfd, TCSANOW, &cooked);
    }

    private:
      int kfd;
      struct termios cooked;
};

KeyboardReader input;

void quit(int sig)
{
    (void)sig;
    input.shutdown();
    rclcpp::shutdown();
    exit(0);
}

class TeleopAuto
{
    public:
    TeleopAuto();
    int keyLoop();

    private:
    void spin();

    rclcpp::Node::SharedPtr nh_;
    rclcpp::Publisher<traj_interfaces::msg::TrajParam>::SharedPtr param_pub_;
    rclcpp::Subscription<traj_interfaces::msg::StateMachine>::SharedPtr vehicle_state_sub_;
    rclcpp::TimerBase::SharedPtr timer;

    traj_interfaces::msg::TrajParam traj_param_;
    double Lenkrad {0.0};  // range [-180, 180 degree]
    double Gaspedal {10.0};  //range  [0, 20]
    bool taster_confirm {false};
    bool r_gear {false};

    double l_scale {20.0};
    double g_scale {2.0};

    int vehicle_state{WAIT};

    void callback_state(const traj_interfaces::msg::StateMachine::SharedPtr state_msg);
    void timer_pub_cmd();
};

TeleopAuto::TeleopAuto()
  {
      nh_ = rclcpp::Node::make_shared("teleop_keyboard_control");

    //set two parameters
    /**
     * @param l_scale the resolution of the trajectory length(throttel angle)
     * @param g_scale the resolution of the trajectory direction(lenkrad angle)
    */
      nh_->declare_parameter("scale_angular", rclcpp::ParameterValue(10.0));
      nh_->declare_parameter("scale_linear", rclcpp::ParameterValue(2.0));
      nh_->get_parameter("scale_angular", l_scale);
      nh_->get_parameter("scale_linear", g_scale);

      param_pub_ = nh_->create_publisher<traj_interfaces::msg::TrajParam>("interactive/param", 10);

      vehicle_state_sub_ = nh_->create_subscription<traj_interfaces::msg::StateMachine>("statemachine/vehicle_state", 10, std::bind(&TeleopAuto::callback_state, this, _1));

      timer = nh_->create_wall_timer(10ms, std::bind(&TeleopAuto::timer_pub_cmd, this));

      //publish the default trajectory parameters
      traj_param_.lenkrad = Lenkrad;
      traj_param_.pedal = Gaspedal;
      traj_param_.taster_confirm = taster_confirm;
      traj_param_.r_gear = r_gear;
      param_pub_ -> publish(traj_param_);
      RCLCPP_INFO(nh_->get_logger(), "Default Trajectory Parameters: Length:%d, Steering:%d degree, Confirm:%d, R-GEAR:%d", Lenkrad, Gaspedal, taster_confirm, r_gear);

      //display
      // RCLCPP_INFO(nh_->get_logger(), "The keyboard control node starts!");
  }

void TeleopAuto::spin()
{
  while (rclcpp::ok())
  {
    //spin_some: when called only execute once callback function
    rclcpp::spin_some(nh_);
  }
}

void TeleopAuto::timer_pub_cmd() 
{    
  // traj_interfaces::msg::TrajParam traj_param;
  traj_param_.set__lenkrad(Lenkrad);
  traj_param_.set__pedal(Gaspedal);
  traj_param_.set__taster_confirm(taster_confirm);
  traj_param_.set__r_gear(r_gear);

  param_pub_->publish(traj_param_);  
  if(taster_confirm) {
    taster_confirm = false; //confirm will only publish once
  }  
}

void TeleopAuto::callback_state(const traj_interfaces::msg::StateMachine::SharedPtr state_msg)
{
  vehicle_state = state_msg->vehicle_state;
}

int TeleopAuto::keyLoop()
{
  char c;
  // bool dirty=false;

  std::thread{std::bind(&TeleopAuto::spin, this)}.detach();

  puts("Reading from keyboard");
  puts("---------------------------");
  puts("Use Arrow keys to generate the trajectory. Up: Expand the trajectory. Down: Decrease the trajectory. Right: Trun right. Left: Turn left. F: Confirm the Trajectory. B:switch between forward driving and backward driving.(default: forward driving) ");
  puts("'Q' to quit.");

   for(;;)
   {
    // get the next event from the keyboard  
    try
    {
      input.readOne(&c);
    }
    catch (const std::runtime_error &)
    {
      perror("read():");
      return -1;
    }

    switch(c)
    {
    case KEYCODE_RIGHT:
        if(Lenkrad > -180)
        {
          Lenkrad -= l_scale;  
        }
        // dirty = true;
        RCLCPP_INFO(nh_->get_logger(), "The lenkrad is now: %f", Lenkrad);
        break;
    case KEYCODE_LEFT:
        if(Lenkrad < 180)
        {
          Lenkrad += l_scale;
        }
        // dirty = true;
        RCLCPP_INFO(nh_->get_logger(), "The lenkrad is now: %f", Lenkrad);
        break;
    case KEYCODE_UP:
        if(Gaspedal < 28)
        {
          Gaspedal += g_scale;
        }
        // dirty = true;
        RCLCPP_INFO(nh_->get_logger(), "The trajectory length is now: %f", Gaspedal);
        break;
    case KEYCODE_DOWN:
        if(Gaspedal > 6)
        {
          Gaspedal -= g_scale;
        }
        // dirty = true;
        RCLCPP_INFO(nh_->get_logger(), "The trajectory length is now: %f", Gaspedal);
        break;
    case KEYCODE_F:  
        if(vehicle_state == EMERGENCY_STOP && !r_gear) {
          RCLCPP_INFO(nh_->get_logger(), "CONNOT DRIVE FORWARD, EMERGENCY STOP");
        } else {
          taster_confirm = true;
          RCLCPP_INFO(nh_->get_logger(), "CONFIRM, SEND THE TRAJECTORY");
        }
        // dirty = true;
        break;
    case KEYCODE_B:    
        //check the state of the vehicle
        if(vehicle_state == END || vehicle_state == EMERGENCY_STOP || vehicle_state == WAIT ) {
          r_gear = !r_gear;
          // dirty = true;
          if(!r_gear) {
            RCLCPP_INFO(nh_->get_logger(), "R_GEAR DEACTIVATED, FORWARD DRIVING.");
          } else {
            RCLCPP_INFO(nh_->get_logger(), "R_GEAR ACTIVATED, BACKWARD DRIVING.");
          }          
        }
        else {
          RCLCPP_WARN(nh_->get_logger(), "Cannont switch to the reverse gear, vehicle is still moving!");
        }
        break;
    case KEYCODE_Q:
        RCLCPP_INFO(nh_->get_logger(), "quit");
        return 0;
    }

    // traj_interfaces::msg::TrajParam traj_param;
    // traj_param.set__lenkrad(Lenkrad);
    // traj_param.set__pedal(Gaspedal);
    // traj_param.set__taster_confirm(taster_confirm);
    // traj_param.set__r_gear(r_gear);
  
    // if(dirty ==true)
    // {
    //   param_pub_->publish(traj_param);    
    //   dirty=false;
    //   taster_confirm = false;
    // }

   }

   return 0;

}

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  TeleopAuto teleop_auto;

  signal(SIGINT,quit);

  int rc = teleop_auto.keyLoop();
  input.shutdown();
  rclcpp::shutdown();
  
  return rc;
}