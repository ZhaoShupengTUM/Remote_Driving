// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tod_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_LIST__TRAITS_HPP_
#define TOD_MSGS__MSG__DETAIL__OBJECT_LIST__TRAITS_HPP_

#include "tod_msgs/msg/detail/object_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::msg::ObjectList>()
{
  return "tod_msgs::msg::ObjectList";
}

template<>
inline const char * name<tod_msgs::msg::ObjectList>()
{
  return "tod_msgs/msg/ObjectList";
}

template<>
struct has_fixed_size<tod_msgs::msg::ObjectList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tod_msgs::msg::ObjectList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tod_msgs::msg::ObjectList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_LIST__TRAITS_HPP_
