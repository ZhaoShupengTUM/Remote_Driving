// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/PrimaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tod_msgs__msg__PrimaryControlCmd __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__PrimaryControlCmd __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrimaryControlCmd_
{
  using Type = PrimaryControlCmd_<ContainerAllocator>;

  explicit PrimaryControlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->acceleration = 0.0f;
      this->steering_wheel_angle = 0.0f;
    }
  }

  explicit PrimaryControlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->acceleration = 0.0f;
      this->steering_wheel_angle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _steering_wheel_angle_type =
    float;
  _steering_wheel_angle_type steering_wheel_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__steering_wheel_angle(
    const float & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__PrimaryControlCmd
    std::shared_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__PrimaryControlCmd
    std::shared_ptr<tod_msgs::msg::PrimaryControlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrimaryControlCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrimaryControlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrimaryControlCmd_

// alias to use template instance with default allocator
using PrimaryControlCmd =
  tod_msgs::msg::PrimaryControlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__STRUCT_HPP_
