// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/PrimaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__BUILDER_HPP_

#include "tod_msgs/msg/detail/primary_control_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_PrimaryControlCmd_steering_wheel_angle
{
public:
  explicit Init_PrimaryControlCmd_steering_wheel_angle(::tod_msgs::msg::PrimaryControlCmd & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::PrimaryControlCmd steering_wheel_angle(::tod_msgs::msg::PrimaryControlCmd::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::PrimaryControlCmd msg_;
};

class Init_PrimaryControlCmd_acceleration
{
public:
  explicit Init_PrimaryControlCmd_acceleration(::tod_msgs::msg::PrimaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_PrimaryControlCmd_steering_wheel_angle acceleration(::tod_msgs::msg::PrimaryControlCmd::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_PrimaryControlCmd_steering_wheel_angle(msg_);
  }

private:
  ::tod_msgs::msg::PrimaryControlCmd msg_;
};

class Init_PrimaryControlCmd_velocity
{
public:
  explicit Init_PrimaryControlCmd_velocity(::tod_msgs::msg::PrimaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_PrimaryControlCmd_acceleration velocity(::tod_msgs::msg::PrimaryControlCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_PrimaryControlCmd_acceleration(msg_);
  }

private:
  ::tod_msgs::msg::PrimaryControlCmd msg_;
};

class Init_PrimaryControlCmd_header
{
public:
  Init_PrimaryControlCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrimaryControlCmd_velocity header(::tod_msgs::msg::PrimaryControlCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PrimaryControlCmd_velocity(msg_);
  }

private:
  ::tod_msgs::msg::PrimaryControlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::PrimaryControlCmd>()
{
  return tod_msgs::msg::builder::Init_PrimaryControlCmd_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__BUILDER_HPP_
