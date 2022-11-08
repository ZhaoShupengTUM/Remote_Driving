// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__COLORED_POINT__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__COLORED_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point32__struct.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tod_msgs__msg__ColoredPoint __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__ColoredPoint __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColoredPoint_
{
  using Type = ColoredPoint_<ContainerAllocator>;

  explicit ColoredPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init),
    color(_init)
  {
    (void)_init;
  }

  explicit ColoredPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    color(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _point_type point;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::ColoredPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::ColoredPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::ColoredPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::ColoredPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__ColoredPoint
    std::shared_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__ColoredPoint
    std::shared_ptr<tod_msgs::msg::ColoredPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColoredPoint_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColoredPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColoredPoint_

// alias to use template instance with default allocator
using ColoredPoint =
  tod_msgs::msg::ColoredPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__COLORED_POINT__STRUCT_HPP_
