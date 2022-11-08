// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/SecondaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__STRUCT_HPP_

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
# define DEPRECATED__tod_msgs__msg__SecondaryControlCmd __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__SecondaryControlCmd __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SecondaryControlCmd_
{
  using Type = SecondaryControlCmd_<ContainerAllocator>;

  explicit SecondaryControlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->indicator = 0;
      this->gear_position = 0;
      this->honk = 0;
      this->wiper = 0;
      this->head_light = 0;
      this->flash_light = 0;
    }
  }

  explicit SecondaryControlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->indicator = 0;
      this->gear_position = 0;
      this->honk = 0;
      this->wiper = 0;
      this->head_light = 0;
      this->flash_light = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _indicator_type =
    int8_t;
  _indicator_type indicator;
  using _gear_position_type =
    int8_t;
  _gear_position_type gear_position;
  using _honk_type =
    int8_t;
  _honk_type honk;
  using _wiper_type =
    int8_t;
  _wiper_type wiper;
  using _head_light_type =
    int8_t;
  _head_light_type head_light;
  using _flash_light_type =
    int8_t;
  _flash_light_type flash_light;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__indicator(
    const int8_t & _arg)
  {
    this->indicator = _arg;
    return *this;
  }
  Type & set__gear_position(
    const int8_t & _arg)
  {
    this->gear_position = _arg;
    return *this;
  }
  Type & set__honk(
    const int8_t & _arg)
  {
    this->honk = _arg;
    return *this;
  }
  Type & set__wiper(
    const int8_t & _arg)
  {
    this->wiper = _arg;
    return *this;
  }
  Type & set__head_light(
    const int8_t & _arg)
  {
    this->head_light = _arg;
    return *this;
  }
  Type & set__flash_light(
    const int8_t & _arg)
  {
    this->flash_light = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__SecondaryControlCmd
    std::shared_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__SecondaryControlCmd
    std::shared_ptr<tod_msgs::msg::SecondaryControlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SecondaryControlCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->indicator != other.indicator) {
      return false;
    }
    if (this->gear_position != other.gear_position) {
      return false;
    }
    if (this->honk != other.honk) {
      return false;
    }
    if (this->wiper != other.wiper) {
      return false;
    }
    if (this->head_light != other.head_light) {
      return false;
    }
    if (this->flash_light != other.flash_light) {
      return false;
    }
    return true;
  }
  bool operator!=(const SecondaryControlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SecondaryControlCmd_

// alias to use template instance with default allocator
using SecondaryControlCmd =
  tod_msgs::msg::SecondaryControlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__STRUCT_HPP_
