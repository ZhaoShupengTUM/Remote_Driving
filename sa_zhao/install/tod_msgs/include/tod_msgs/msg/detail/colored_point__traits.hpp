// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__COLORED_POINT__TRAITS_HPP_
#define TOD_MSGS__MSG__DETAIL__COLORED_POINT__TRAITS_HPP_

#include "tod_msgs/msg/detail/colored_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point32__traits.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::msg::ColoredPoint>()
{
  return "tod_msgs::msg::ColoredPoint";
}

template<>
inline const char * name<tod_msgs::msg::ColoredPoint>()
{
  return "tod_msgs/msg/ColoredPoint";
}

template<>
struct has_fixed_size<tod_msgs::msg::ColoredPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point32>::value && has_fixed_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct has_bounded_size<tod_msgs::msg::ColoredPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point32>::value && has_bounded_size<std_msgs::msg::ColorRGBA>::value> {};

template<>
struct is_message<tod_msgs::msg::ColoredPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOD_MSGS__MSG__DETAIL__COLORED_POINT__TRAITS_HPP_
