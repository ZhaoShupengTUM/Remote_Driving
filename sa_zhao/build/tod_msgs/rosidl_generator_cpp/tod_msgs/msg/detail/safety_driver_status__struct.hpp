// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tod_msgs__msg__SafetyDriverStatus __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__SafetyDriverStatus __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyDriverStatus_
{
  using Type = SafetyDriverStatus_<ContainerAllocator>;

  explicit SafetyDriverStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_emergency_stop_released = false;
      this->vehicle_long_approved = false;
      this->vehicle_lat_approved = false;
    }
  }

  explicit SafetyDriverStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_emergency_stop_released = false;
      this->vehicle_long_approved = false;
      this->vehicle_lat_approved = false;
    }
  }

  // field types and members
  using _vehicle_emergency_stop_released_type =
    bool;
  _vehicle_emergency_stop_released_type vehicle_emergency_stop_released;
  using _vehicle_long_approved_type =
    bool;
  _vehicle_long_approved_type vehicle_long_approved;
  using _vehicle_lat_approved_type =
    bool;
  _vehicle_lat_approved_type vehicle_lat_approved;

  // setters for named parameter idiom
  Type & set__vehicle_emergency_stop_released(
    const bool & _arg)
  {
    this->vehicle_emergency_stop_released = _arg;
    return *this;
  }
  Type & set__vehicle_long_approved(
    const bool & _arg)
  {
    this->vehicle_long_approved = _arg;
    return *this;
  }
  Type & set__vehicle_lat_approved(
    const bool & _arg)
  {
    this->vehicle_lat_approved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__SafetyDriverStatus
    std::shared_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__SafetyDriverStatus
    std::shared_ptr<tod_msgs::msg::SafetyDriverStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyDriverStatus_ & other) const
  {
    if (this->vehicle_emergency_stop_released != other.vehicle_emergency_stop_released) {
      return false;
    }
    if (this->vehicle_long_approved != other.vehicle_long_approved) {
      return false;
    }
    if (this->vehicle_lat_approved != other.vehicle_lat_approved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyDriverStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyDriverStatus_

// alias to use template instance with default allocator
using SafetyDriverStatus =
  tod_msgs::msg::SafetyDriverStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__STRUCT_HPP_
