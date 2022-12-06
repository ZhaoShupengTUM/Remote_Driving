// Copyright 2020 Simon Hoffmann
#pragma once
#include "sensor_msgs/msg/joy.hpp"
#include "tod_msgs/msg/status.hpp"
// #include "tod_msgs/msg/primary_control_cmd.hpp"
// #include "tod_msgs/msg/secondary_control_cmd.hpp"
#include "tod_msgs/VehicleEnums.h"  //gear position
#include "tod_msgs/joystickConfig.h"
// #include "tod_helper/vehicle/Model.h"  //calculate the vehicle parameters
#include "traj_interfaces/msg/traj_param.hpp"
#include "traj_interfaces/msg/state_machine.hpp"
// #include "carla_msgs/msg/carla_collision_event.hpp"

#include <utility>
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>    
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "StateMachine.hpp"
// #include "ament_index_cpp/get_package_share_directory.hpp"

class CommandCreator : public rclcpp::Node
{
public:
    CommandCreator();

private:
    //
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr _joystickSubs;
    rclcpp::Subscription<tod_msgs::msg::Status>::SharedPtr _statusSubs;
    rclcpp::Publisher<traj_interfaces::msg::TrajParam>::SharedPtr _param_pub;
    rclcpp::Subscription<traj_interfaces::msg::StateMachine>::SharedPtr _vehicle_state_sub;
    // rclcpp::Subscription<carla_msgs::msg::CarlaCollisionEvent>::SharedPtr _vehicle_collision_sub;

    std::map<joystick::ButtonPos, int> _prevButtonState;
    uint8_t _status{tod_msgs::msg::Status::TOD_STATUS_IDLE};
    traj_interfaces::msg::StateMachine _state_machine_cmd;
    traj_interfaces::msg::TrajParam _traj_param_cmd;
    rclcpp::TimerBase::SharedPtr _timer;

    //the internal parameters
    bool _constraintSteeringRate{false};
    bool _invertSteeringInGearReverse{false};
    double _maxTrajLength {30.0};
    double _minTrajLength {6.0};
    double _maxSteeringWheelAngle {7.8538};
    double _maxSteeringWheelAngleRate {15.0};
    std::string _vehicleID{"tum-model3"};

    double _lengthRatio {2.0};
    // double _direction_ratio {20.0/M_PI};

    //traj_interface
    bool _r_gear_state_init {false};
    bool _button_confirm {false};
    double _traj_direction_init {0.0};  // range [-180, 180 degree]
    double _traj_length_init {10.0};  //range  [0, 30]

    int _vehicle_state {WAIT};

    size_t _count;
    bool _joystickInputSet{false};

    //collsion parameters
    bool collision_flag {false};
    bool event_flag {false};

    void init_control_messages();

    void callback_joystick_msg(const sensor_msgs::msg::Joy::SharedPtr msg);

    void callback_status_msg(const tod_msgs::msg::Status::SharedPtr msg);

    void callback_vehicle_state(const traj_interfaces::msg::StateMachine::SharedPtr msg);

    // void callback_vehicle_collsion(const carla_msgs::msg::CarlaCollisionEvent::SharedPtr msg);

    void calculate_traj_direction(
        traj_interfaces::msg::TrajParam &out, 
        const std::vector<float> &axes);

    void calculate_traj_distance(
        traj_interfaces::msg::TrajParam &out, 
        const sensor_msgs::msg::Joy &msg);

    void set_gear(
        traj_interfaces::msg::TrajParam &out, 
        const std::vector<int> &buttonState);

    void set_confirm(
        traj_interfaces::msg::TrajParam &out, 
        const std::vector<int> &buttonState);

    void timer_callback();
};
