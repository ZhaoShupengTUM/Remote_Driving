// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traj_interfaces:msg/StateMachine.idl
// generated code does not contain a copyright notice

#ifndef TRAJ_INTERFACES__MSG__DETAIL__STATE_MACHINE__BUILDER_HPP_
#define TRAJ_INTERFACES__MSG__DETAIL__STATE_MACHINE__BUILDER_HPP_

#include "traj_interfaces/msg/detail/state_machine__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traj_interfaces
{

namespace msg
{

namespace builder
{

class Init_StateMachine_vehicle_state
{
public:
  Init_StateMachine_vehicle_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::traj_interfaces::msg::StateMachine vehicle_state(::traj_interfaces::msg::StateMachine::_vehicle_state_type arg)
  {
    msg_.vehicle_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traj_interfaces::msg::StateMachine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traj_interfaces::msg::StateMachine>()
{
  return traj_interfaces::msg::builder::Init_StateMachine_vehicle_state();
}

}  // namespace traj_interfaces

#endif  // TRAJ_INTERFACES__MSG__DETAIL__STATE_MACHINE__BUILDER_HPP_
