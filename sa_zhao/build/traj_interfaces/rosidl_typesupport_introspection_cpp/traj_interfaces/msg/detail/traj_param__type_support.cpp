// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "traj_interfaces/msg/detail/traj_param__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace traj_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajParam_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) traj_interfaces::msg::TrajParam(_init);
}

void TrajParam_fini_function(void * message_memory)
{
  auto typed_message = static_cast<traj_interfaces::msg::TrajParam *>(message_memory);
  typed_message->~TrajParam();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajParam_message_member_array[4] = {
  {
    "lenkrad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces::msg::TrajParam, lenkrad),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pedal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces::msg::TrajParam, pedal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "taster_confirm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces::msg::TrajParam, taster_confirm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "r_gear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces::msg::TrajParam, r_gear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajParam_message_members = {
  "traj_interfaces::msg",  // message namespace
  "TrajParam",  // message name
  4,  // number of fields
  sizeof(traj_interfaces::msg::TrajParam),
  TrajParam_message_member_array,  // message members
  TrajParam_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajParam_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajParam_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajParam_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace traj_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<traj_interfaces::msg::TrajParam>()
{
  return &::traj_interfaces::msg::rosidl_typesupport_introspection_cpp::TrajParam_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, traj_interfaces, msg, TrajParam)() {
  return &::traj_interfaces::msg::rosidl_typesupport_introspection_cpp::TrajParam_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
