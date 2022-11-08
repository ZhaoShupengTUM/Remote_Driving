// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__COLORED_POINT__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__COLORED_POINT__BUILDER_HPP_

#include "tod_msgs/msg/detail/colored_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_ColoredPoint_color
{
public:
  explicit Init_ColoredPoint_color(::tod_msgs::msg::ColoredPoint & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::ColoredPoint color(::tod_msgs::msg::ColoredPoint::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::ColoredPoint msg_;
};

class Init_ColoredPoint_point
{
public:
  Init_ColoredPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColoredPoint_color point(::tod_msgs::msg::ColoredPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_ColoredPoint_color(msg_);
  }

private:
  ::tod_msgs::msg::ColoredPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::ColoredPoint>()
{
  return tod_msgs::msg::builder::Init_ColoredPoint_point();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__COLORED_POINT__BUILDER_HPP_
