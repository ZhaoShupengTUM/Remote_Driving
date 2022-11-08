// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice

#ifndef TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__TRAITS_HPP_
#define TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__TRAITS_HPP_

#include "traj_interfaces/msg/detail/traj_param__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<traj_interfaces::msg::TrajParam>()
{
  return "traj_interfaces::msg::TrajParam";
}

template<>
inline const char * name<traj_interfaces::msg::TrajParam>()
{
  return "traj_interfaces/msg/TrajParam";
}

template<>
struct has_fixed_size<traj_interfaces::msg::TrajParam>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<traj_interfaces::msg::TrajParam>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<traj_interfaces::msg::TrajParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__TRAITS_HPP_
