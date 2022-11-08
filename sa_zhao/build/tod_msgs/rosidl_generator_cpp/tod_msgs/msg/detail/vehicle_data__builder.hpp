// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_

#include "tod_msgs/msg/detail/vehicle_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleData_linear_acceleration
{
public:
  explicit Init_VehicleData_linear_acceleration(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::VehicleData linear_acceleration(::tod_msgs::msg::VehicleData::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_longitudinal_speed
{
public:
  explicit Init_VehicleData_longitudinal_speed(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_linear_acceleration longitudinal_speed(::tod_msgs::msg::VehicleData::_longitudinal_speed_type arg)
  {
    msg_.longitudinal_speed = std::move(arg);
    return Init_VehicleData_linear_acceleration(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_engine_speed
{
public:
  explicit Init_VehicleData_engine_speed(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_longitudinal_speed engine_speed(::tod_msgs::msg::VehicleData::_engine_speed_type arg)
  {
    msg_.engine_speed = std::move(arg);
    return Init_VehicleData_longitudinal_speed(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_curvature
{
public:
  explicit Init_VehicleData_curvature(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_engine_speed curvature(::tod_msgs::msg::VehicleData::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_VehicleData_engine_speed(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_steering_wheel_angle
{
public:
  explicit Init_VehicleData_steering_wheel_angle(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_curvature steering_wheel_angle(::tod_msgs::msg::VehicleData::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return Init_VehicleData_curvature(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_flash_light
{
public:
  explicit Init_VehicleData_flash_light(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_steering_wheel_angle flash_light(::tod_msgs::msg::VehicleData::_flash_light_type arg)
  {
    msg_.flash_light = std::move(arg);
    return Init_VehicleData_steering_wheel_angle(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_head_light
{
public:
  explicit Init_VehicleData_head_light(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_flash_light head_light(::tod_msgs::msg::VehicleData::_head_light_type arg)
  {
    msg_.head_light = std::move(arg);
    return Init_VehicleData_flash_light(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_wiper
{
public:
  explicit Init_VehicleData_wiper(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_head_light wiper(::tod_msgs::msg::VehicleData::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_VehicleData_head_light(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_honk
{
public:
  explicit Init_VehicleData_honk(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_wiper honk(::tod_msgs::msg::VehicleData::_honk_type arg)
  {
    msg_.honk = std::move(arg);
    return Init_VehicleData_wiper(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_gear_position
{
public:
  explicit Init_VehicleData_gear_position(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_honk gear_position(::tod_msgs::msg::VehicleData::_gear_position_type arg)
  {
    msg_.gear_position = std::move(arg);
    return Init_VehicleData_honk(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_indicator
{
public:
  explicit Init_VehicleData_indicator(::tod_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_gear_position indicator(::tod_msgs::msg::VehicleData::_indicator_type arg)
  {
    msg_.indicator = std::move(arg);
    return Init_VehicleData_gear_position(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_header
{
public:
  Init_VehicleData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleData_indicator header(::tod_msgs::msg::VehicleData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleData_indicator(msg_);
  }

private:
  ::tod_msgs::msg::VehicleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::VehicleData>()
{
  return tod_msgs::msg::builder::Init_VehicleData_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
