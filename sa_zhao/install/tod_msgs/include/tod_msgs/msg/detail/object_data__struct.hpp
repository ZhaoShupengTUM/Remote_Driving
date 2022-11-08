// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/ObjectData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_DATA__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__OBJECT_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tod_msgs__msg__ObjectData __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__ObjectData __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectData_
{
  using Type = ObjectData_<ContainerAllocator>;

  explicit ObjectData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->yaw_angle = 0.0f;
      this->dim_x = 0.0f;
      this->dim_y = 0.0f;
      this->dim_z = 0.0f;
      this->dist_center_x = 0.0f;
      this->dist_center_y = 0.0f;
      this->speed_x = 0.0f;
      this->speed_y = 0.0f;
      this->acceleration_x = 0.0f;
      this->acceleration_y = 0.0f;
      this->classification = 0;
    }
  }

  explicit ObjectData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->yaw_angle = 0.0f;
      this->dim_x = 0.0f;
      this->dim_y = 0.0f;
      this->dim_z = 0.0f;
      this->dist_center_x = 0.0f;
      this->dist_center_y = 0.0f;
      this->speed_x = 0.0f;
      this->speed_y = 0.0f;
      this->acceleration_x = 0.0f;
      this->acceleration_y = 0.0f;
      this->classification = 0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _yaw_angle_type =
    float;
  _yaw_angle_type yaw_angle;
  using _dim_x_type =
    float;
  _dim_x_type dim_x;
  using _dim_y_type =
    float;
  _dim_y_type dim_y;
  using _dim_z_type =
    float;
  _dim_z_type dim_z;
  using _dist_center_x_type =
    float;
  _dist_center_x_type dist_center_x;
  using _dist_center_y_type =
    float;
  _dist_center_y_type dist_center_y;
  using _speed_x_type =
    float;
  _speed_x_type speed_x;
  using _speed_y_type =
    float;
  _speed_y_type speed_y;
  using _acceleration_x_type =
    float;
  _acceleration_x_type acceleration_x;
  using _acceleration_y_type =
    float;
  _acceleration_y_type acceleration_y;
  using _classification_type =
    uint8_t;
  _classification_type classification;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__yaw_angle(
    const float & _arg)
  {
    this->yaw_angle = _arg;
    return *this;
  }
  Type & set__dim_x(
    const float & _arg)
  {
    this->dim_x = _arg;
    return *this;
  }
  Type & set__dim_y(
    const float & _arg)
  {
    this->dim_y = _arg;
    return *this;
  }
  Type & set__dim_z(
    const float & _arg)
  {
    this->dim_z = _arg;
    return *this;
  }
  Type & set__dist_center_x(
    const float & _arg)
  {
    this->dist_center_x = _arg;
    return *this;
  }
  Type & set__dist_center_y(
    const float & _arg)
  {
    this->dist_center_y = _arg;
    return *this;
  }
  Type & set__speed_x(
    const float & _arg)
  {
    this->speed_x = _arg;
    return *this;
  }
  Type & set__speed_y(
    const float & _arg)
  {
    this->speed_y = _arg;
    return *this;
  }
  Type & set__acceleration_x(
    const float & _arg)
  {
    this->acceleration_x = _arg;
    return *this;
  }
  Type & set__acceleration_y(
    const float & _arg)
  {
    this->acceleration_y = _arg;
    return *this;
  }
  Type & set__classification(
    const uint8_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CLASSIFICATION_UNKNOWN =
    0u;
  static constexpr uint8_t CLASSIFICATION_VEHICLE =
    1u;
  static constexpr uint8_t CLASSIFICATION_VRU =
    2u;
  static constexpr uint8_t CLASSIFICATION_ANIMAL =
    3u;
  static constexpr uint8_t CLASSIFICATION_OTHER =
    4u;

  // pointer types
  using RawPtr =
    tod_msgs::msg::ObjectData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::ObjectData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::ObjectData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::ObjectData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__ObjectData
    std::shared_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__ObjectData
    std::shared_ptr<tod_msgs::msg::ObjectData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectData_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->yaw_angle != other.yaw_angle) {
      return false;
    }
    if (this->dim_x != other.dim_x) {
      return false;
    }
    if (this->dim_y != other.dim_y) {
      return false;
    }
    if (this->dim_z != other.dim_z) {
      return false;
    }
    if (this->dist_center_x != other.dist_center_x) {
      return false;
    }
    if (this->dist_center_y != other.dist_center_y) {
      return false;
    }
    if (this->speed_x != other.speed_x) {
      return false;
    }
    if (this->speed_y != other.speed_y) {
      return false;
    }
    if (this->acceleration_x != other.acceleration_x) {
      return false;
    }
    if (this->acceleration_y != other.acceleration_y) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectData_

// alias to use template instance with default allocator
using ObjectData =
  tod_msgs::msg::ObjectData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObjectData_<ContainerAllocator>::CLASSIFICATION_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectData_<ContainerAllocator>::CLASSIFICATION_VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectData_<ContainerAllocator>::CLASSIFICATION_VRU;
template<typename ContainerAllocator>
constexpr uint8_t ObjectData_<ContainerAllocator>::CLASSIFICATION_ANIMAL;
template<typename ContainerAllocator>
constexpr uint8_t ObjectData_<ContainerAllocator>::CLASSIFICATION_OTHER;

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_DATA__STRUCT_HPP_
