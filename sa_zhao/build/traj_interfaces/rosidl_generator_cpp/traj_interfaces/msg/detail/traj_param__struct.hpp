// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice

#ifndef TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__STRUCT_HPP_
#define TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__traj_interfaces__msg__TrajParam __attribute__((deprecated))
#else
# define DEPRECATED__traj_interfaces__msg__TrajParam __declspec(deprecated)
#endif

namespace traj_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajParam_
{
  using Type = TrajParam_<ContainerAllocator>;

  explicit TrajParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lenkrad = 0.0;
      this->pedal = 0.0;
      this->taster_confirm = false;
      this->r_gear = false;
    }
  }

  explicit TrajParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lenkrad = 0.0;
      this->pedal = 0.0;
      this->taster_confirm = false;
      this->r_gear = false;
    }
  }

  // field types and members
  using _lenkrad_type =
    double;
  _lenkrad_type lenkrad;
  using _pedal_type =
    double;
  _pedal_type pedal;
  using _taster_confirm_type =
    bool;
  _taster_confirm_type taster_confirm;
  using _r_gear_type =
    bool;
  _r_gear_type r_gear;

  // setters for named parameter idiom
  Type & set__lenkrad(
    const double & _arg)
  {
    this->lenkrad = _arg;
    return *this;
  }
  Type & set__pedal(
    const double & _arg)
  {
    this->pedal = _arg;
    return *this;
  }
  Type & set__taster_confirm(
    const bool & _arg)
  {
    this->taster_confirm = _arg;
    return *this;
  }
  Type & set__r_gear(
    const bool & _arg)
  {
    this->r_gear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    traj_interfaces::msg::TrajParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const traj_interfaces::msg::TrajParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      traj_interfaces::msg::TrajParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      traj_interfaces::msg::TrajParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__traj_interfaces__msg__TrajParam
    std::shared_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__traj_interfaces__msg__TrajParam
    std::shared_ptr<traj_interfaces::msg::TrajParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajParam_ & other) const
  {
    if (this->lenkrad != other.lenkrad) {
      return false;
    }
    if (this->pedal != other.pedal) {
      return false;
    }
    if (this->taster_confirm != other.taster_confirm) {
      return false;
    }
    if (this->r_gear != other.r_gear) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajParam_

// alias to use template instance with default allocator
using TrajParam =
  traj_interfaces::msg::TrajParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace traj_interfaces

#endif  // TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__STRUCT_HPP_
