// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__TRAITS_HPP_
#define TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__TRAITS_HPP_

#include "tod_msgs/srv/detail/input_device__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::srv::InputDevice_Request>()
{
  return "tod_msgs::srv::InputDevice_Request";
}

template<>
inline const char * name<tod_msgs::srv::InputDevice_Request>()
{
  return "tod_msgs/srv/InputDevice_Request";
}

template<>
struct has_fixed_size<tod_msgs::srv::InputDevice_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tod_msgs::srv::InputDevice_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tod_msgs::srv::InputDevice_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::srv::InputDevice_Response>()
{
  return "tod_msgs::srv::InputDevice_Response";
}

template<>
inline const char * name<tod_msgs::srv::InputDevice_Response>()
{
  return "tod_msgs/srv/InputDevice_Response";
}

template<>
struct has_fixed_size<tod_msgs::srv::InputDevice_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tod_msgs::srv::InputDevice_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tod_msgs::srv::InputDevice_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tod_msgs::srv::InputDevice>()
{
  return "tod_msgs::srv::InputDevice";
}

template<>
inline const char * name<tod_msgs::srv::InputDevice>()
{
  return "tod_msgs/srv/InputDevice";
}

template<>
struct has_fixed_size<tod_msgs::srv::InputDevice>
  : std::integral_constant<
    bool,
    has_fixed_size<tod_msgs::srv::InputDevice_Request>::value &&
    has_fixed_size<tod_msgs::srv::InputDevice_Response>::value
  >
{
};

template<>
struct has_bounded_size<tod_msgs::srv::InputDevice>
  : std::integral_constant<
    bool,
    has_bounded_size<tod_msgs::srv::InputDevice_Request>::value &&
    has_bounded_size<tod_msgs::srv::InputDevice_Response>::value
  >
{
};

template<>
struct is_service<tod_msgs::srv::InputDevice>
  : std::true_type
{
};

template<>
struct is_service_request<tod_msgs::srv::InputDevice_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tod_msgs::srv::InputDevice_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__TRAITS_HPP_
