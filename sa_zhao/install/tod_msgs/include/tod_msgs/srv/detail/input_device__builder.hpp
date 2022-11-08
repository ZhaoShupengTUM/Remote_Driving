// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__BUILDER_HPP_
#define TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__BUILDER_HPP_

#include "tod_msgs/srv/detail/input_device__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace srv
{

namespace builder
{

class Init_InputDevice_Request_input_device_directory
{
public:
  Init_InputDevice_Request_input_device_directory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tod_msgs::srv::InputDevice_Request input_device_directory(::tod_msgs::srv::InputDevice_Request::_input_device_directory_type arg)
  {
    msg_.input_device_directory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::srv::InputDevice_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::srv::InputDevice_Request>()
{
  return tod_msgs::srv::builder::Init_InputDevice_Request_input_device_directory();
}

}  // namespace tod_msgs


namespace tod_msgs
{

namespace srv
{

namespace builder
{

class Init_InputDevice_Response_successfully_changed
{
public:
  Init_InputDevice_Response_successfully_changed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tod_msgs::srv::InputDevice_Response successfully_changed(::tod_msgs::srv::InputDevice_Response::_successfully_changed_type arg)
  {
    msg_.successfully_changed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::srv::InputDevice_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::srv::InputDevice_Response>()
{
  return tod_msgs::srv::builder::Init_InputDevice_Response_successfully_changed();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__BUILDER_HPP_
