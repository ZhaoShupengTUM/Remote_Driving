// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/KeyPress.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__KEY_PRESS__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__KEY_PRESS__BUILDER_HPP_

#include "tod_msgs/msg/detail/key_press__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPress_key
{
public:
  explicit Init_KeyPress_key(::tod_msgs::msg::KeyPress & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::KeyPress key(::tod_msgs::msg::KeyPress::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::KeyPress msg_;
};

class Init_KeyPress_header
{
public:
  Init_KeyPress_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPress_key header(::tod_msgs::msg::KeyPress::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KeyPress_key(msg_);
  }

private:
  ::tod_msgs::msg::KeyPress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::KeyPress>()
{
  return tod_msgs::msg::builder::Init_KeyPress_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__KEY_PRESS__BUILDER_HPP_
