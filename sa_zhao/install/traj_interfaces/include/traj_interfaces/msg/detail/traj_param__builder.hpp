// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice

#ifndef TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__BUILDER_HPP_
#define TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__BUILDER_HPP_

#include "traj_interfaces/msg/detail/traj_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traj_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrajParam_r_gear
{
public:
  explicit Init_TrajParam_r_gear(::traj_interfaces::msg::TrajParam & msg)
  : msg_(msg)
  {}
  ::traj_interfaces::msg::TrajParam r_gear(::traj_interfaces::msg::TrajParam::_r_gear_type arg)
  {
    msg_.r_gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traj_interfaces::msg::TrajParam msg_;
};

class Init_TrajParam_taster_confirm
{
public:
  explicit Init_TrajParam_taster_confirm(::traj_interfaces::msg::TrajParam & msg)
  : msg_(msg)
  {}
  Init_TrajParam_r_gear taster_confirm(::traj_interfaces::msg::TrajParam::_taster_confirm_type arg)
  {
    msg_.taster_confirm = std::move(arg);
    return Init_TrajParam_r_gear(msg_);
  }

private:
  ::traj_interfaces::msg::TrajParam msg_;
};

class Init_TrajParam_pedal
{
public:
  explicit Init_TrajParam_pedal(::traj_interfaces::msg::TrajParam & msg)
  : msg_(msg)
  {}
  Init_TrajParam_taster_confirm pedal(::traj_interfaces::msg::TrajParam::_pedal_type arg)
  {
    msg_.pedal = std::move(arg);
    return Init_TrajParam_taster_confirm(msg_);
  }

private:
  ::traj_interfaces::msg::TrajParam msg_;
};

class Init_TrajParam_lenkrad
{
public:
  Init_TrajParam_lenkrad()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajParam_pedal lenkrad(::traj_interfaces::msg::TrajParam::_lenkrad_type arg)
  {
    msg_.lenkrad = std::move(arg);
    return Init_TrajParam_pedal(msg_);
  }

private:
  ::traj_interfaces::msg::TrajParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traj_interfaces::msg::TrajParam>()
{
  return traj_interfaces::msg::builder::Init_TrajParam_lenkrad();
}

}  // namespace traj_interfaces

#endif  // TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__BUILDER_HPP_
