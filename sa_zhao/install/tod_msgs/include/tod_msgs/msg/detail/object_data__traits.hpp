// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tod_msgs:msg/ObjectData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_DATA__TRAITS_HPP_
#define TOD_MSGS__MSG__DETAIL__OBJECT_DATA__TRAITS_HPP_

#include "tod_msgs/msg/detail/object_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::msg::ObjectData>()
{
  return "tod_msgs::msg::ObjectData";
}

template<>
inline const char * name<tod_msgs::msg::ObjectData>()
{
  return "tod_msgs/msg/ObjectData";
}

template<>
struct has_fixed_size<tod_msgs::msg::ObjectData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tod_msgs::msg::ObjectData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tod_msgs::msg::ObjectData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_DATA__TRAITS_HPP_
