// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

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
# define DEPRECATED__tod_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__Status __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operator_ip_address = "";
      this->operator_control_mode = 0;
      this->operator_video_rate_mode = 0;
      this->tod_status = 0;
      this->vehicle_ip_address = "";
      this->vehicle_emergency_stop_released = false;
      this->vehicle_long_approved = false;
      this->vehicle_lat_approved = false;
      this->vehicle_control_mode = 0;
      this->vehicle_nav_status = "";
      this->vehicle_gps_pos_type = "";
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    operator_ip_address(_alloc),
    vehicle_ip_address(_alloc),
    vehicle_nav_status(_alloc),
    vehicle_gps_pos_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operator_ip_address = "";
      this->operator_control_mode = 0;
      this->operator_video_rate_mode = 0;
      this->tod_status = 0;
      this->vehicle_ip_address = "";
      this->vehicle_emergency_stop_released = false;
      this->vehicle_long_approved = false;
      this->vehicle_lat_approved = false;
      this->vehicle_control_mode = 0;
      this->vehicle_nav_status = "";
      this->vehicle_gps_pos_type = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _operator_ip_address_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _operator_ip_address_type operator_ip_address;
  using _operator_control_mode_type =
    uint8_t;
  _operator_control_mode_type operator_control_mode;
  using _operator_video_rate_mode_type =
    uint8_t;
  _operator_video_rate_mode_type operator_video_rate_mode;
  using _tod_status_type =
    uint8_t;
  _tod_status_type tod_status;
  using _vehicle_ip_address_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _vehicle_ip_address_type vehicle_ip_address;
  using _vehicle_emergency_stop_released_type =
    bool;
  _vehicle_emergency_stop_released_type vehicle_emergency_stop_released;
  using _vehicle_long_approved_type =
    bool;
  _vehicle_long_approved_type vehicle_long_approved;
  using _vehicle_lat_approved_type =
    bool;
  _vehicle_lat_approved_type vehicle_lat_approved;
  using _vehicle_control_mode_type =
    uint8_t;
  _vehicle_control_mode_type vehicle_control_mode;
  using _vehicle_nav_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _vehicle_nav_status_type vehicle_nav_status;
  using _vehicle_gps_pos_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _vehicle_gps_pos_type_type vehicle_gps_pos_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__operator_ip_address(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->operator_ip_address = _arg;
    return *this;
  }
  Type & set__operator_control_mode(
    const uint8_t & _arg)
  {
    this->operator_control_mode = _arg;
    return *this;
  }
  Type & set__operator_video_rate_mode(
    const uint8_t & _arg)
  {
    this->operator_video_rate_mode = _arg;
    return *this;
  }
  Type & set__tod_status(
    const uint8_t & _arg)
  {
    this->tod_status = _arg;
    return *this;
  }
  Type & set__vehicle_ip_address(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->vehicle_ip_address = _arg;
    return *this;
  }
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
  Type & set__vehicle_control_mode(
    const uint8_t & _arg)
  {
    this->vehicle_control_mode = _arg;
    return *this;
  }
  Type & set__vehicle_nav_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->vehicle_nav_status = _arg;
    return *this;
  }
  Type & set__vehicle_gps_pos_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->vehicle_gps_pos_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_MODE_DIRECT =
    0u;
  static constexpr uint8_t CONTROL_MODE_SHARED =
    1u;
  static constexpr uint8_t CONTROL_MODE_WAYPOINT =
    2u;
  static constexpr uint8_t CONTROL_MODE_PATH_GUIDANCE =
    3u;
  static constexpr uint8_t CONTROL_MODE_PERCEPTION_MODIFICATION =
    4u;
  static constexpr uint8_t CONTROL_MODE_SAFECORRIDOR =
    5u;
  static constexpr uint8_t CONTROL_MODE_NONE =
    99u;
  static constexpr uint8_t VIDEO_RATE_CONTROL_MODE_SINGLE =
    0u;
  static constexpr uint8_t VIDEO_RATE_CONTROL_MODE_COLLECTIVE =
    1u;
  static constexpr uint8_t VIDEO_RATE_CONTROL_MODE_AUTOMATIC =
    2u;
  static constexpr uint8_t TOD_STATUS_IDLE =
    0u;
  static constexpr uint8_t TOD_STATUS_UPLINK_ONLY =
    1u;
  static constexpr uint8_t TOD_STATUS_TELEOPERATION =
    2u;

  // pointer types
  using RawPtr =
    tod_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__Status
    std::shared_ptr<tod_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__Status
    std::shared_ptr<tod_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->operator_ip_address != other.operator_ip_address) {
      return false;
    }
    if (this->operator_control_mode != other.operator_control_mode) {
      return false;
    }
    if (this->operator_video_rate_mode != other.operator_video_rate_mode) {
      return false;
    }
    if (this->tod_status != other.tod_status) {
      return false;
    }
    if (this->vehicle_ip_address != other.vehicle_ip_address) {
      return false;
    }
    if (this->vehicle_emergency_stop_released != other.vehicle_emergency_stop_released) {
      return false;
    }
    if (this->vehicle_long_approved != other.vehicle_long_approved) {
      return false;
    }
    if (this->vehicle_lat_approved != other.vehicle_lat_approved) {
      return false;
    }
    if (this->vehicle_control_mode != other.vehicle_control_mode) {
      return false;
    }
    if (this->vehicle_nav_status != other.vehicle_nav_status) {
      return false;
    }
    if (this->vehicle_gps_pos_type != other.vehicle_gps_pos_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  tod_msgs::msg::Status_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_DIRECT;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_SHARED;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_WAYPOINT;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_PATH_GUIDANCE;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_PERCEPTION_MODIFICATION;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_SAFECORRIDOR;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::CONTROL_MODE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::VIDEO_RATE_CONTROL_MODE_SINGLE;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::VIDEO_RATE_CONTROL_MODE_COLLECTIVE;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::VIDEO_RATE_CONTROL_MODE_AUTOMATIC;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::TOD_STATUS_IDLE;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::TOD_STATUS_UPLINK_ONLY;
template<typename ContainerAllocator>
constexpr uint8_t Status_<ContainerAllocator>::TOD_STATUS_TELEOPERATION;

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
