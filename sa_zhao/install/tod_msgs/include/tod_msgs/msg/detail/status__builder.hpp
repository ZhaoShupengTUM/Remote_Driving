// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include "tod_msgs/msg/detail/status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_vehicle_gps_pos_type
{
public:
  explicit Init_Status_vehicle_gps_pos_type(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::Status vehicle_gps_pos_type(::tod_msgs::msg::Status::_vehicle_gps_pos_type_type arg)
  {
    msg_.vehicle_gps_pos_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_vehicle_nav_status
{
public:
  explicit Init_Status_vehicle_nav_status(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_gps_pos_type vehicle_nav_status(::tod_msgs::msg::Status::_vehicle_nav_status_type arg)
  {
    msg_.vehicle_nav_status = std::move(arg);
    return Init_Status_vehicle_gps_pos_type(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_vehicle_control_mode
{
public:
  explicit Init_Status_vehicle_control_mode(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_nav_status vehicle_control_mode(::tod_msgs::msg::Status::_vehicle_control_mode_type arg)
  {
    msg_.vehicle_control_mode = std::move(arg);
    return Init_Status_vehicle_nav_status(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_vehicle_lat_approved
{
public:
  explicit Init_Status_vehicle_lat_approved(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_control_mode vehicle_lat_approved(::tod_msgs::msg::Status::_vehicle_lat_approved_type arg)
  {
    msg_.vehicle_lat_approved = std::move(arg);
    return Init_Status_vehicle_control_mode(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_vehicle_long_approved
{
public:
  explicit Init_Status_vehicle_long_approved(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_lat_approved vehicle_long_approved(::tod_msgs::msg::Status::_vehicle_long_approved_type arg)
  {
    msg_.vehicle_long_approved = std::move(arg);
    return Init_Status_vehicle_lat_approved(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_vehicle_emergency_stop_released
{
public:
  explicit Init_Status_vehicle_emergency_stop_released(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_long_approved vehicle_emergency_stop_released(::tod_msgs::msg::Status::_vehicle_emergency_stop_released_type arg)
  {
    msg_.vehicle_emergency_stop_released = std::move(arg);
    return Init_Status_vehicle_long_approved(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_vehicle_ip_address
{
public:
  explicit Init_Status_vehicle_ip_address(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_emergency_stop_released vehicle_ip_address(::tod_msgs::msg::Status::_vehicle_ip_address_type arg)
  {
    msg_.vehicle_ip_address = std::move(arg);
    return Init_Status_vehicle_emergency_stop_released(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_tod_status
{
public:
  explicit Init_Status_tod_status(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_vehicle_ip_address tod_status(::tod_msgs::msg::Status::_tod_status_type arg)
  {
    msg_.tod_status = std::move(arg);
    return Init_Status_vehicle_ip_address(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_operator_video_rate_mode
{
public:
  explicit Init_Status_operator_video_rate_mode(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_tod_status operator_video_rate_mode(::tod_msgs::msg::Status::_operator_video_rate_mode_type arg)
  {
    msg_.operator_video_rate_mode = std::move(arg);
    return Init_Status_tod_status(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_operator_control_mode
{
public:
  explicit Init_Status_operator_control_mode(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_operator_video_rate_mode operator_control_mode(::tod_msgs::msg::Status::_operator_control_mode_type arg)
  {
    msg_.operator_control_mode = std::move(arg);
    return Init_Status_operator_video_rate_mode(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_operator_ip_address
{
public:
  explicit Init_Status_operator_ip_address(::tod_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_operator_control_mode operator_ip_address(::tod_msgs::msg::Status::_operator_ip_address_type arg)
  {
    msg_.operator_ip_address = std::move(arg);
    return Init_Status_operator_control_mode(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

class Init_Status_header
{
public:
  Init_Status_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_operator_ip_address header(::tod_msgs::msg::Status::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Status_operator_ip_address(msg_);
  }

private:
  ::tod_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::Status>()
{
  return tod_msgs::msg::builder::Init_Status_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
