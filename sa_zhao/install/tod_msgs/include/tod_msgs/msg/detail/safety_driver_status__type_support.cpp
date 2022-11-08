// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tod_msgs/msg/detail/safety_driver_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tod_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SafetyDriverStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tod_msgs::msg::SafetyDriverStatus(_init);
}

void SafetyDriverStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tod_msgs::msg::SafetyDriverStatus *>(message_memory);
  typed_message->~SafetyDriverStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SafetyDriverStatus_message_member_array[3] = {
  {
    "vehicle_emergency_stop_released",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs::msg::SafetyDriverStatus, vehicle_emergency_stop_released),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_long_approved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs::msg::SafetyDriverStatus, vehicle_long_approved),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_lat_approved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs::msg::SafetyDriverStatus, vehicle_lat_approved),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SafetyDriverStatus_message_members = {
  "tod_msgs::msg",  // message namespace
  "SafetyDriverStatus",  // message name
  3,  // number of fields
  sizeof(tod_msgs::msg::SafetyDriverStatus),
  SafetyDriverStatus_message_member_array,  // message members
  SafetyDriverStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SafetyDriverStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SafetyDriverStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SafetyDriverStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tod_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tod_msgs::msg::SafetyDriverStatus>()
{
  return &::tod_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyDriverStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tod_msgs, msg, SafetyDriverStatus)() {
  return &::tod_msgs::msg::rosidl_typesupport_introspection_cpp::SafetyDriverStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
