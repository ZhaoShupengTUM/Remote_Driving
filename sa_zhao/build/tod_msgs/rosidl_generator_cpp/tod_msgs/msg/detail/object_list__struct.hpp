// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_
#define TOD_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_

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
// Member 'object_list'
#include "tod_msgs/msg/detail/object_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tod_msgs__msg__ObjectList __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__msg__ObjectList __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectList_
{
  using Type = ObjectList_<ContainerAllocator>;

  explicit ObjectList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ObjectList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_list_type =
    std::vector<tod_msgs::msg::ObjectData_<ContainerAllocator>, typename ContainerAllocator::template rebind<tod_msgs::msg::ObjectData_<ContainerAllocator>>::other>;
  _object_list_type object_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_list(
    const std::vector<tod_msgs::msg::ObjectData_<ContainerAllocator>, typename ContainerAllocator::template rebind<tod_msgs::msg::ObjectData_<ContainerAllocator>>::other> & _arg)
  {
    this->object_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::msg::ObjectList_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::msg::ObjectList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::ObjectList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::msg::ObjectList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__msg__ObjectList
    std::shared_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__msg__ObjectList
    std::shared_ptr<tod_msgs::msg::ObjectList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_list != other.object_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectList_

// alias to use template instance with default allocator
using ObjectList =
  tod_msgs::msg::ObjectList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_
