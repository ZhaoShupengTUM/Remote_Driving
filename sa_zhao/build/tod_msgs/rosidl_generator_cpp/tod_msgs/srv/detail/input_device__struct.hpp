// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__STRUCT_HPP_
#define TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tod_msgs__srv__InputDevice_Request __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__srv__InputDevice_Request __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InputDevice_Request_
{
  using Type = InputDevice_Request_<ContainerAllocator>;

  explicit InputDevice_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_device_directory = "";
    }
  }

  explicit InputDevice_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_device_directory(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_device_directory = "";
    }
  }

  // field types and members
  using _input_device_directory_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _input_device_directory_type input_device_directory;

  // setters for named parameter idiom
  Type & set__input_device_directory(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->input_device_directory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::srv::InputDevice_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::srv::InputDevice_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::srv::InputDevice_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::srv::InputDevice_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__srv__InputDevice_Request
    std::shared_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__srv__InputDevice_Request
    std::shared_ptr<tod_msgs::srv::InputDevice_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputDevice_Request_ & other) const
  {
    if (this->input_device_directory != other.input_device_directory) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputDevice_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputDevice_Request_

// alias to use template instance with default allocator
using InputDevice_Request =
  tod_msgs::srv::InputDevice_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tod_msgs


#ifndef _WIN32
# define DEPRECATED__tod_msgs__srv__InputDevice_Response __attribute__((deprecated))
#else
# define DEPRECATED__tod_msgs__srv__InputDevice_Response __declspec(deprecated)
#endif

namespace tod_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InputDevice_Response_
{
  using Type = InputDevice_Response_<ContainerAllocator>;

  explicit InputDevice_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->successfully_changed = false;
    }
  }

  explicit InputDevice_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->successfully_changed = false;
    }
  }

  // field types and members
  using _successfully_changed_type =
    bool;
  _successfully_changed_type successfully_changed;

  // setters for named parameter idiom
  Type & set__successfully_changed(
    const bool & _arg)
  {
    this->successfully_changed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tod_msgs::srv::InputDevice_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tod_msgs::srv::InputDevice_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tod_msgs::srv::InputDevice_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tod_msgs::srv::InputDevice_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tod_msgs__srv__InputDevice_Response
    std::shared_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tod_msgs__srv__InputDevice_Response
    std::shared_ptr<tod_msgs::srv::InputDevice_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputDevice_Response_ & other) const
  {
    if (this->successfully_changed != other.successfully_changed) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputDevice_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputDevice_Response_

// alias to use template instance with default allocator
using InputDevice_Response =
  tod_msgs::srv::InputDevice_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tod_msgs

namespace tod_msgs
{

namespace srv
{

struct InputDevice
{
  using Request = tod_msgs::srv::InputDevice_Request;
  using Response = tod_msgs::srv::InputDevice_Response;
};

}  // namespace srv

}  // namespace tod_msgs

#endif  // TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__STRUCT_HPP_
