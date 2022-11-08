// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__TRAITS_HPP_
#define TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__TRAITS_HPP_

#include "tod_msgs/msg/detail/safety_driver_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::msg::SafetyDriverStatus>()
{
  return "tod_msgs::msg::SafetyDriverStatus";
}

template<>
inline const char * name<tod_msgs::msg::SafetyDriverStatus>()
{
  return "tod_msgs/msg/SafetyDriverStatus";
}

template<>
struct has_fixed_size<tod_msgs::msg::SafetyDriverStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tod_msgs::msg::SafetyDriverStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tod_msgs::msg::SafetyDriverStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__TRAITS_HPP_
