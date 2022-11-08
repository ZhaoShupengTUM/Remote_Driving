// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/PaketInfo.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PAKET_INFO__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__PAKET_INFO__STRUCT_HPP_

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
# define DEPRECATED__tod_msgs__msg__PaketInfo __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__PaketInfo __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PaketInfo_
{
  using Type = PaketInfo_<ContainerAllocator>;

  explicit PaketInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latency_usec = 0ll;
      this->size_bit = 0l;
      this->seq_num = 0ull;
    }
  }

  explicit PaketInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latency_usec = 0ll;
      this->size_bit = 0l;
      this->seq_num = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _latency_usec_type =
    int64_t;
  _latency_usec_type latency_usec;
  using _size_bit_type =
    int32_t;
  _size_bit_type size_bit;
  using _seq_num_type =
    uint64_t;
  _seq_num_type seq_num;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__latency_usec(
    const int64_t & _arg)
  {
    this->latency_usec = _arg;
    return *this;
  }
  Type & set__size_bit(
    const int32_t & _arg)
  {
    this->size_bit = _arg;
    return *this;
  }
  Type & set__seq_num(
    const uint64_t & _arg)
  {
    this->seq_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::PaketInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::PaketInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::PaketInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::PaketInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__PaketInfo
    std::shared_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__PaketInfo
    std::shared_ptr<tod_msgs::msg::PaketInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PaketInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->latency_usec != other.latency_usec) {
      return false;
    }
    if (this->size_bit != other.size_bit) {
      return false;
    }
    if (this->seq_num != other.seq_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const PaketInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PaketInfo_

// alias to use template instance with default allocator
using PaketInfo =
  tod_msgs::msg::PaketInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__PAKET_INFO__STRUCT_HPP_
