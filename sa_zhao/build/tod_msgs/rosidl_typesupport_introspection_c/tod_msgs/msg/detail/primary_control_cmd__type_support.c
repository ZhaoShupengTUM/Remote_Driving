// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tod_msgs:msg/PrimaryControlCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tod_msgs/msg/detail/primary_control_cmd__rosidl_typesupport_introspection_c.h"
#include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tod_msgs/msg/detail/primary_control_cmd__functions.h"
#include "tod_msgs/msg/detail/primary_control_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tod_msgs__msg__PrimaryControlCmd__init(message_memory);
}

void PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_fini_function(void * message_memory)
{
  tod_msgs__msg__PrimaryControlCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__PrimaryControlCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__PrimaryControlCmd, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__PrimaryControlCmd, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_wheel_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__PrimaryControlCmd, steering_wheel_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_members = {
  "tod_msgs__msg",  // message namespace
  "PrimaryControlCmd",  // message name
  4,  // number of fields
  sizeof(tod_msgs__msg__PrimaryControlCmd),
  PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_member_array,  // message members
  PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_type_support_handle = {
  0,
  &PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, PrimaryControlCmd)() {
  PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_type_support_handle.typesupport_identifier) {
    PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PrimaryControlCmd__rosidl_typesupport_introspection_c__PrimaryControlCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
