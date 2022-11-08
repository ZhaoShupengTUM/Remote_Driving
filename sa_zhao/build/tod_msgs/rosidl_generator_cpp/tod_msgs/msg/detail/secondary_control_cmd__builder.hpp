// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/SecondaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__BUILDER_HPP_

#include "tod_msgs/msg/detail/secondary_control_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_SecondaryControlCmd_flash_light
{
public:
  explicit Init_SecondaryControlCmd_flash_light(::tod_msgs::msg::SecondaryControlCmd & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::SecondaryControlCmd flash_light(::tod_msgs::msg::SecondaryControlCmd::_flash_light_type arg)
  {
    msg_.flash_light = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

class Init_SecondaryControlCmd_head_light
{
public:
  explicit Init_SecondaryControlCmd_head_light(::tod_msgs::msg::SecondaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_SecondaryControlCmd_flash_light head_light(::tod_msgs::msg::SecondaryControlCmd::_head_light_type arg)
  {
    msg_.head_light = std::move(arg);
    return Init_SecondaryControlCmd_flash_light(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

class Init_SecondaryControlCmd_wiper
{
public:
  explicit Init_SecondaryControlCmd_wiper(::tod_msgs::msg::SecondaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_SecondaryControlCmd_head_light wiper(::tod_msgs::msg::SecondaryControlCmd::_wiper_type arg)
  {
    msg_.wiper = std::move(arg);
    return Init_SecondaryControlCmd_head_light(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

class Init_SecondaryControlCmd_honk
{
public:
  explicit Init_SecondaryControlCmd_honk(::tod_msgs::msg::SecondaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_SecondaryControlCmd_wiper honk(::tod_msgs::msg::SecondaryControlCmd::_honk_type arg)
  {
    msg_.honk = std::move(arg);
    return Init_SecondaryControlCmd_wiper(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

class Init_SecondaryControlCmd_gear_position
{
public:
  explicit Init_SecondaryControlCmd_gear_position(::tod_msgs::msg::SecondaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_SecondaryControlCmd_honk gear_position(::tod_msgs::msg::SecondaryControlCmd::_gear_position_type arg)
  {
    msg_.gear_position = std::move(arg);
    return Init_SecondaryControlCmd_honk(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

class Init_SecondaryControlCmd_indicator
{
public:
  explicit Init_SecondaryControlCmd_indicator(::tod_msgs::msg::SecondaryControlCmd & msg)
  : msg_(msg)
  {}
  Init_SecondaryControlCmd_gear_position indicator(::tod_msgs::msg::SecondaryControlCmd::_indicator_type arg)
  {
    msg_.indicator = std::move(arg);
    return Init_SecondaryControlCmd_gear_position(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

class Init_SecondaryControlCmd_header
{
public:
  Init_SecondaryControlCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SecondaryControlCmd_indicator header(::tod_msgs::msg::SecondaryControlCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SecondaryControlCmd_indicator(msg_);
  }

private:
  ::tod_msgs::msg::SecondaryControlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::SecondaryControlCmd>()
{
  return tod_msgs::msg::builder::Init_SecondaryControlCmd_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__BUILDER_HPP_
