// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from traj_interfaces:msg/StateMachine.idl
// generated code does not contain a copyright notice

#ifndef TRAJ_INTERFACES__MSG__DETAIL__STATE_MACHINE__STRUCT_HPP_
#define TRAJ_INTERFACES__MSG__DETAIL__STATE_MACHINE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__traj_interfaces__msg__StateMachine __attribute__((deprecated))
#else
# define DEPRECATED__traj_interfaces__msg__StateMachine __declspec(deprecated)
#endif

namespace traj_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachine_
{
  using Type = StateMachine_<ContainerAllocator>;

  explicit StateMachine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_state = 0l;
    }
  }

  explicit StateMachine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_state = 0l;
    }
  }

  // field types and members
  using _vehicle_state_type =
    int32_t;
  _vehicle_state_type vehicle_state;

  // setters for named parameter idiom
  Type & set__vehicle_state(
    const int32_t & _arg)
  {
    this->vehicle_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    traj_interfaces::msg::StateMachine_<ContainerAllocator> *;
  using ConstRawPtr =
    const traj_interfaces::msg::StateMachine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      traj_interfaces::msg::StateMachine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      traj_interfaces::msg::StateMachine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__traj_interfaces__msg__StateMachine
    std::shared_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__traj_interfaces__msg__StateMachine
    std::shared_ptr<traj_interfaces::msg::StateMachine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachine_ & other) const
  {
    if (this->vehicle_state != other.vehicle_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachine_

// alias to use template instance with default allocator
using StateMachine =
  traj_interfaces::msg::StateMachine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace traj_interfaces

#endif  // TRAJ_INTERFACES__MSG__DETAIL__STATE_MACHINE__STRUCT_HPP_
