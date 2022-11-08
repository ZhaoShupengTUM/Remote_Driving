// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__BUILDER_HPP_

#include "tod_msgs/msg/detail/safety_driver_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyDriverStatus_vehicle_lat_approved
{
public:
  explicit Init_SafetyDriverStatus_vehicle_lat_approved(::tod_msgs::msg::SafetyDriverStatus & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::SafetyDriverStatus vehicle_lat_approved(::tod_msgs::msg::SafetyDriverStatus::_vehicle_lat_approved_type arg)
  {
    msg_.vehicle_lat_approved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::SafetyDriverStatus msg_;
};

class Init_SafetyDriverStatus_vehicle_long_approved
{
public:
  explicit Init_SafetyDriverStatus_vehicle_long_approved(::tod_msgs::msg::SafetyDriverStatus & msg)
  : msg_(msg)
  {}
  Init_SafetyDriverStatus_vehicle_lat_approved vehicle_long_approved(::tod_msgs::msg::SafetyDriverStatus::_vehicle_long_approved_type arg)
  {
    msg_.vehicle_long_approved = std::move(arg);
    return Init_SafetyDriverStatus_vehicle_lat_approved(msg_);
  }

private:
  ::tod_msgs::msg::SafetyDriverStatus msg_;
};

class Init_SafetyDriverStatus_vehicle_emergency_stop_released
{
public:
  Init_SafetyDriverStatus_vehicle_emergency_stop_released()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyDriverStatus_vehicle_long_approved vehicle_emergency_stop_released(::tod_msgs::msg::SafetyDriverStatus::_vehicle_emergency_stop_released_type arg)
  {
    msg_.vehicle_emergency_stop_released = std::move(arg);
    return Init_SafetyDriverStatus_vehicle_long_approved(msg_);
  }

private:
  ::tod_msgs::msg::SafetyDriverStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::SafetyDriverStatus>()
{
  return tod_msgs::msg::builder::Init_SafetyDriverStatus_vehicle_emergency_stop_released();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__BUILDER_HPP_
