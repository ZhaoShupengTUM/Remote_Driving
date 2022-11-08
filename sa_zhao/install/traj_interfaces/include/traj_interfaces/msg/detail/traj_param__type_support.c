// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "traj_interfaces/msg/detail/traj_param__rosidl_typesupport_introspection_c.h"
#include "traj_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "traj_interfaces/msg/detail/traj_param__functions.h"
#include "traj_interfaces/msg/detail/traj_param__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TrajParam__rosidl_typesupport_introspection_c__TrajParam_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  traj_interfaces__msg__TrajParam__init(message_memory);
}

void TrajParam__rosidl_typesupport_introspection_c__TrajParam_fini_function(void * message_memory)
{
  traj_interfaces__msg__TrajParam__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_member_array[4] = {
  {
    "lenkrad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces__msg__TrajParam, lenkrad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pedal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces__msg__TrajParam, pedal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "taster_confirm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces__msg__TrajParam, taster_confirm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces__msg__TrajParam, r_gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_members = {
  "traj_interfaces__msg",  // message namespace
  "TrajParam",  // message name
  4,  // number of fields
  sizeof(traj_interfaces__msg__TrajParam),
  TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_member_array,  // message members
  TrajParam__rosidl_typesupport_introspection_c__TrajParam_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajParam__rosidl_typesupport_introspection_c__TrajParam_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_type_support_handle = {
  0,
  &TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_traj_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traj_interfaces, msg, TrajParam)() {
  if (!TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_type_support_handle.typesupport_identifier) {
    TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajParam__rosidl_typesupport_introspection_c__TrajParam_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
