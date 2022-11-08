// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/ColoredPolygon.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__COLORED_POLYGON__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__COLORED_POLYGON__BUILDER_HPP_

#include "tod_msgs/msg/detail/colored_polygon__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_ColoredPolygon_points
{
public:
  explicit Init_ColoredPolygon_points(::tod_msgs::msg::ColoredPolygon & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::ColoredPolygon points(::tod_msgs::msg::ColoredPolygon::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::ColoredPolygon msg_;
};

class Init_ColoredPolygon_header
{
public:
  Init_ColoredPolygon_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColoredPolygon_points header(::tod_msgs::msg::ColoredPolygon::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ColoredPolygon_points(msg_);
  }

private:
  ::tod_msgs::msg::ColoredPolygon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::ColoredPolygon>()
{
  return tod_msgs::msg::builder::Init_ColoredPolygon_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__COLORED_POLYGON__BUILDER_HPP_
