// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/VideoInfo.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__VIDEO_INFO__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__VIDEO_INFO__STRUCT_HPP_

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
# define DEPRECATED__tod_msgs__msg__VideoInfo __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__VideoInfo __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VideoInfo_
{
  using Type = VideoInfo_<ContainerAllocator>;

  explicit VideoInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kbitrate = 0ul;
      this->framerate = 0ul;
      this->image_height = 0ul;
      this->image_width = 0ul;
      this->image_nof_pixel = 0ul;
    }
  }

  explicit VideoInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kbitrate = 0ul;
      this->framerate = 0ul;
      this->image_height = 0ul;
      this->image_width = 0ul;
      this->image_nof_pixel = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _kbitrate_type =
    uint32_t;
  _kbitrate_type kbitrate;
  using _framerate_type =
    uint32_t;
  _framerate_type framerate;
  using _image_height_type =
    uint32_t;
  _image_height_type image_height;
  using _image_width_type =
    uint32_t;
  _image_width_type image_width;
  using _image_nof_pixel_type =
    uint32_t;
  _image_nof_pixel_type image_nof_pixel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__kbitrate(
    const uint32_t & _arg)
  {
    this->kbitrate = _arg;
    return *this;
  }
  Type & set__framerate(
    const uint32_t & _arg)
  {
    this->framerate = _arg;
    return *this;
  }
  Type & set__image_height(
    const uint32_t & _arg)
  {
    this->image_height = _arg;
    return *this;
  }
  Type & set__image_width(
    const uint32_t & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__image_nof_pixel(
    const uint32_t & _arg)
  {
    this->image_nof_pixel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::VideoInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::VideoInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::VideoInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::VideoInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__VideoInfo
    std::shared_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__VideoInfo
    std::shared_ptr<tod_msgs::msg::VideoInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VideoInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->kbitrate != other.kbitrate) {
      return false;
    }
    if (this->framerate != other.framerate) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_nof_pixel != other.image_nof_pixel) {
      return false;
    }
    return true;
  }
  bool operator!=(const VideoInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VideoInfo_

// alias to use template instance with default allocator
using VideoInfo =
  tod_msgs::msg::VideoInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__VIDEO_INFO__STRUCT_HPP_
