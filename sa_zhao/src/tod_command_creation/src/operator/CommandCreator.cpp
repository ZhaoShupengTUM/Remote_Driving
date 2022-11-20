// Copyright 2020 Simon Hoffmann
// Change: two gears:  D/R  and P Shupeng Zhao
#include "CommandCreator.h"

using std::placeholders::_1;
using namespace std::chrono_literals;

CommandCreator::CommandCreator() : Node("command_creator"), _count(0)
{
    _joystickSubs = this->create_subscription<sensor_msgs::msg::Joy>(
        "/Operator/InputDevices/joystick", 
        1,
        std::bind(&CommandCreator::callback_joystick_msg, this, _1));
    
    _statusSubs = this->create_subscription<tod_msgs::msg::Status>(
        "/Operator/InputDevices/status_msg", 
        1,
        std::bind(&CommandCreator::callback_status_msg, this, _1));

    _vehicle_state_sub = this->create_subscription<traj_interfaces::msg::StateMachine>(
        "/statemachine/vehicle_state",
        1,
        std::bind(&CommandCreator::callback_vehicle_state, this, _1)
    );

    // _vehicle_collision_sub = this->create_subscription<carla_msgs::msg::CarlaCollisionEvent>(
    //     "/carla/ego_vehicle/collision",
    //     1,
    //     std::bind(&CommandCreator::callback_vehicle_collsion, this, _1)
    // );

    _param_pub = this->create_publisher<traj_interfaces::msg::TrajParam>("interactive/param", 1);

    _timer = this->create_wall_timer(
        100ms, 
        std::bind(&CommandCreator::timer_callback, this));

    // std::string desiredPath = ament_index_cpp::get_package_share_directory("tod_vehicle_config") + "/vehicle_config/";
    // vehicleParamHandler_ = std::make_unique<tod_core::param_set::Vehicle>(this, desiredPath);

    _prevButtonState.insert(std::pair<joystick::ButtonPos, int>(joystick::ButtonPos::INCREASE_DISTANCE, 0));
    _prevButtonState.insert(std::pair<joystick::ButtonPos, int>(joystick::ButtonPos::DECREASE_DISTANCE, 0));
    _prevButtonState.insert(std::pair<joystick::ButtonPos, int>(joystick::ButtonPos::REVERSE_GEAR, 0));
    _prevButtonState.insert(std::pair<joystick::ButtonPos, int>(joystick::ButtonPos::CONFIRM_TRAJ, 0));
    
    this->declare_parameter<bool>("ConstraintSteeringRate", false);
    this->declare_parameter<bool>("InvertSteeringInGearReverse", false);
    this->declare_parameter<double>("MaximumTrajLength", 0.0);
    this->declare_parameter<double>("MinimumTrajLength", 0.0);
    this->declare_parameter<double>("MaximumSteerWheelAngle", 0.0);
    this->declare_parameter<double>("MaxSteeringWheelAngleRate", 0.0);
    this->declare_parameter<double>("LengthRatio", 0.0);
    this->declare_parameter<std::string>("VehicleID", "tum-model3");
    
    if (!this->get_parameter("ConstraintSteeringRate", _constraintSteeringRate))
        RCLCPP_ERROR_STREAM(this->get_logger(), 
        this->get_name() << ": Could not get param /ConstraintSteeringRate - using "
        << (_constraintSteeringRate ? "true" : "false"));

    if (!this->get_parameter("InvertSteeringInGearReverse", _invertSteeringInGearReverse))
        RCLCPP_ERROR_STREAM(this->get_logger(), 
        this->get_name() << ": Could not get param /InvertSteeringInGearReverse - using "
        << (_invertSteeringInGearReverse ? "true" : "false"));

    if (!this->get_parameter("MaximumTrajLength", _maxTrajLength))
        RCLCPP_ERROR_STREAM(this->get_logger(), 
        this->get_name() << ": Could not get param /MaximumTrajLength - using "
        << _maxTrajLength << " m");

    if (!this->get_parameter("MinimumTrajLength", _minTrajLength))
        RCLCPP_ERROR_STREAM(this->get_logger(), 
        this->get_name() << ": Could not get param /minTrajLength - using "
        << _minTrajLength << " m");

    if (!this->get_parameter("MaximumSteerWheelAngle", _maxSteeringWheelAngle))
        RCLCPP_ERROR_STREAM(this->get_logger(), 
        this->get_name() << ": Could not get param /maxAcceleration - using "
        << _maxSteeringWheelAngle << " rad");

    if (!this->get_parameter("MaxSteeringWheelAngleRate", _maxSteeringWheelAngleRate))
        RCLCPP_ERROR_STREAM(this->get_logger(), this->get_name() << ": Could not get param /MaxSteeringWheelAngleRate - using "
        << _maxSteeringWheelAngleRate << " rad/s");

    if (!this->get_parameter("LengthRatio", _lengthRatio))
        RCLCPP_ERROR_STREAM(this->get_logger(), this->get_name() << ": Could not get param /maxDeceleration - using "
        << _lengthRatio << " m");

    if (!this->get_parameter("VehicleID", _vehicleID))
        RCLCPP_ERROR_STREAM(this->get_logger(), this->get_name() << ": Could not set param /vehicleID - using "
        << _vehicleID);
}

void CommandCreator::timer_callback() 
{
    if (_joystickInputSet && 
    _status == tod_msgs::msg::Status::TOD_STATUS_TELEOPERATION) {
        _param_pub->publish(_traj_param_cmd);
    }
    _joystickInputSet = false; 
    _traj_param_cmd.taster_confirm = false;
}

void CommandCreator::callback_vehicle_state(const traj_interfaces::msg::StateMachine::SharedPtr msg)
{
    _vehicle_state = msg->vehicle_state;
    // if(event_flag) {
    //     collision_flag = true;
    // } else {
    //     collision_flag = false;
    // }

    // event_flag = false;
}

void CommandCreator::callback_joystick_msg(const sensor_msgs::msg::Joy::SharedPtr msg) 
{
    
    if (_status == tod_msgs::msg::Status::TOD_STATUS_TELEOPERATION) {
        calculate_traj_direction(_traj_param_cmd, msg->axes);
        calculate_traj_distance(_traj_param_cmd, *msg);
        set_gear(_traj_param_cmd, msg->buttons);
        set_confirm(_traj_param_cmd, msg->buttons);
        _joystickInputSet = true;
    }
}

// void CommandCreator::callback_vehicle_collsion(const carla_msgs::msg::CarlaCollisionEvent::SharedPtr msg) {
//     if(msg) {
//         event_flag = true;
//     }
// }

void CommandCreator::callback_status_msg(const tod_msgs::msg::Status::SharedPtr msg) 
{
    if (_status == tod_msgs::msg::Status::TOD_STATUS_TELEOPERATION
        && msg->tod_status != tod_msgs::msg::Status::TOD_STATUS_TELEOPERATION) {
        init_control_messages();
    }
    _status = msg->tod_status;
}

void CommandCreator::calculate_traj_direction(traj_interfaces::msg::TrajParam &out, const std::vector<float> &axes) 
{
    double newDesiredSWA = axes.at(joystick::AxesPos::STEERING) * _maxSteeringWheelAngle * 180 / M_PI;
    //lenkrad unit: degree
    out.lenkrad = newDesiredSWA;
    std::cout << "Change the steering wheel angle: " << newDesiredSWA << "degrees." << std::endl;
}

void CommandCreator::calculate_traj_distance(traj_interfaces::msg::TrajParam &out, const sensor_msgs::msg::Joy &msg) 
{
    if (msg.buttons.at(joystick::ButtonPos::INCREASE_DISTANCE) == 1
        && _prevButtonState.at(joystick::ButtonPos::INCREASE_DISTANCE) == 0
        && out.pedal < _maxTrajLength) {
        out.pedal += _lengthRatio; // m increments
        std::cout << "Increase Trajectory Length: " << out.pedal << std::endl;
    }
    if (msg.buttons.at(joystick::ButtonPos::DECREASE_DISTANCE) == 1
        && _prevButtonState.at(joystick::ButtonPos::DECREASE_DISTANCE) == 0
        && out.pedal > _minTrajLength) {
        out.pedal -= _lengthRatio; // m increments
        std::cout << "Dcrease Trajectory Length: " << out.pedal << std::endl;
    }

    _prevButtonState.at(joystick::ButtonPos::INCREASE_DISTANCE) = msg.buttons.at(joystick::ButtonPos::INCREASE_DISTANCE);
    _prevButtonState.at(joystick::ButtonPos::DECREASE_DISTANCE) = msg.buttons.at(joystick::ButtonPos::DECREASE_DISTANCE);
}

void CommandCreator::set_gear(traj_interfaces::msg::TrajParam &out, const std::vector<int> &buttonState) 
{
    // Reverse Gear
    if (buttonState.at(joystick::ButtonPos::REVERSE_GEAR) == 1
        && _prevButtonState.at(joystick::ButtonPos::REVERSE_GEAR) == 0) {
            if(_vehicle_state == WAIT || _vehicle_state == EMERGENCY_STOP || _vehicle_state == END || _vehicle_state == COLLISION) 
            {
                if (out.r_gear) {
                out.r_gear = false;
                std::cout << "Deactivate R_GEAR." << std::endl;
                }
                else {
                    out.r_gear = true;
                    std::cout << "Activate R_GEAR." << std::endl;
                }
            }else {
                // std::cout << "Vehicle is still moving. Cannot activate R_GEAR." << std::endl;
                RCLCPP_WARN(this->get_logger(), "The Vehicle is still moving, please dont change the R-GEAR");
            }
    }

    _prevButtonState.at(joystick::ButtonPos::REVERSE_GEAR) = buttonState.at(joystick::ButtonPos::REVERSE_GEAR);
}

void CommandCreator::set_confirm(
        traj_interfaces::msg::TrajParam &out, 
        const std::vector<int> &buttonState)
{
    //get the confirmed button
    if (buttonState.at(joystick::ButtonPos::CONFIRM_TRAJ) == 1
        && _prevButtonState.at(joystick::ButtonPos::CONFIRM_TRAJ) == 0) {
            out.taster_confirm = true;
            std::cout << "Confirm the Trajectory." << std::endl;
    }

    _prevButtonState.at(joystick::ButtonPos::CONFIRM_TRAJ) = buttonState.at(joystick::ButtonPos::CONFIRM_TRAJ);
}

void CommandCreator::init_control_messages() 
{
    _traj_param_cmd.lenkrad = _traj_direction_init;
    _traj_param_cmd.pedal = _traj_length_init;
    _traj_param_cmd.r_gear = _r_gear_state_init;
    _traj_param_cmd.taster_confirm = false;
}
