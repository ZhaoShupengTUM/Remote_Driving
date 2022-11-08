// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_

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
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tod_msgs__msg__VehicleData __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__VehicleData __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleData_
{
  using Type = VehicleData_<ContainerAllocator>;

  explicit VehicleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    linear_acceleration(_init)
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
      this->steering_wheel_angle = 0.0f;
      this->curvature = 0.0f;
      this->engine_speed = 0.0f;
      this->longitudinal_speed = 0.0f;
    }
  }

  explicit VehicleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    linear_acceleration(_alloc, _init)
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
      this->steering_wheel_angle = 0.0f;
      this->curvature = 0.0f;
      this->engine_speed = 0.0f;
      this->longitudinal_speed = 0.0f;
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
  using _steering_wheel_angle_type =
    float;
  _steering_wheel_angle_type steering_wheel_angle;
  using _curvature_type =
    float;
  _curvature_type curvature;
  using _engine_speed_type =
    float;
  _engine_speed_type engine_speed;
  using _longitudinal_speed_type =
    float;
  _longitudinal_speed_type longitudinal_speed;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;

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
  Type & set__steering_wheel_angle(
    const float & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }
  Type & set__curvature(
    const float & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__engine_speed(
    const float & _arg)
  {
    this->engine_speed = _arg;
    return *this;
  }
  Type & set__longitudinal_speed(
    const float & _arg)
  {
    this->longitudinal_speed = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::VehicleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::VehicleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::VehicleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::VehicleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__VehicleData
    std::shared_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__VehicleData
    std::shared_ptr<tod_msgs::msg::VehicleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleData_ & other) const
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
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->engine_speed != other.engine_speed) {
      return false;
    }
    if (this->longitudinal_speed != other.longitudinal_speed) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleData_

// alias to use template instance with default allocator
using VehicleData =
  tod_msgs::msg::VehicleData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
