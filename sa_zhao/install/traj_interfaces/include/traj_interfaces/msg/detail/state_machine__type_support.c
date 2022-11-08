// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from traj_interfaces:msg/StateMachine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "traj_interfaces/msg/detail/state_machine__rosidl_typesupport_introspection_c.h"
#include "traj_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "traj_interfaces/msg/detail/state_machine__functions.h"
#include "traj_interfaces/msg/detail/state_machine__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StateMachine__rosidl_typesupport_introspection_c__StateMachine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  traj_interfaces__msg__StateMachine__init(message_memory);
}

void StateMachine__rosidl_typesupport_introspection_c__StateMachine_fini_function(void * message_memory)
{
  traj_interfaces__msg__StateMachine__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_member_array[1] = {
  {
    "vehicle_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traj_interfaces__msg__StateMachine, vehicle_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_members = {
  "traj_interfaces__msg",  // message namespace
  "StateMachine",  // message name
  1,  // number of fields
  sizeof(traj_interfaces__msg__StateMachine),
  StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_member_array,  // message members
  StateMachine__rosidl_typesupport_introspection_c__StateMachine_init_function,  // function to initialize message memory (memory has to be allocated)
  StateMachine__rosidl_typesupport_introspection_c__StateMachine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_type_support_handle = {
  0,
  &StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_traj_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traj_interfaces, msg, StateMachine)() {
  if (!StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_type_support_handle.typesupport_identifier) {
    StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StateMachine__rosidl_typesupport_introspection_c__StateMachine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
