// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/KeyPress.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__KEY_PRESS__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__KEY_PRESS__STRUCT_HPP_

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
# define DEPRECATED__tod_msgs__msg__KeyPress __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__KeyPress __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPress_
{
  using Type = KeyPress_<ContainerAllocator>;

  explicit KeyPress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = 0l;
    }
  }

  explicit KeyPress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _key_type =
    int32_t;
  _key_type key;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__key(
    const int32_t & _arg)
  {
    this->key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::KeyPress_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::KeyPress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::KeyPress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::KeyPress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__KeyPress
    std::shared_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__KeyPress
    std::shared_ptr<tod_msgs::msg::KeyPress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPress_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->key != other.key) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPress_

// alias to use template instance with default allocator
using KeyPress =
  tod_msgs::msg::KeyPress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__KEY_PRESS__STRUCT_HPP_
