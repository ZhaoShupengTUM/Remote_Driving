// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tod_msgs/srv/detail/input_device__rosidl_typesupport_introspection_c.h"
#include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tod_msgs/srv/detail/input_device__functions.h"
#include "tod_msgs/srv/detail/input_device__struct.h"


// Include directives for member types
// Member `input_device_directory`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tod_msgs__srv__InputDevice_Request__init(message_memory);
}

void InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_fini_function(void * message_memory)
{
  tod_msgs__srv__InputDevice_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_member_array[1] = {
  {
    "input_device_directory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__srv__InputDevice_Request, input_device_directory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_members = {
  "tod_msgs__srv",  // message namespace
  "InputDevice_Request",  // message name
  1,  // number of fields
  sizeof(tod_msgs__srv__InputDevice_Request),
  InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_member_array,  // message members
  InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_type_support_handle = {
  0,
  &InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice_Request)() {
  if (!InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_type_support_handle.typesupport_identifier) {
    InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InputDevice_Request__rosidl_typesupport_introspection_c__InputDevice_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tod_msgs/srv/detail/input_device__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tod_msgs/srv/detail/input_device__functions.h"
// already included above
// #include "tod_msgs/srv/detail/input_device__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tod_msgs__srv__InputDevice_Response__init(message_memory);
}

void InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_fini_function(void * message_memory)
{
  tod_msgs__srv__InputDevice_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_member_array[1] = {
  {
    "successfully_changed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__srv__InputDevice_Response, successfully_changed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_members = {
  "tod_msgs__srv",  // message namespace
  "InputDevice_Response",  // message name
  1,  // number of fields
  sizeof(tod_msgs__srv__InputDevice_Response),
  InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_member_array,  // message members
  InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_type_support_handle = {
  0,
  &InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice_Response)() {
  if (!InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_type_support_handle.typesupport_identifier) {
    InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InputDevice_Response__rosidl_typesupport_introspection_c__InputDevice_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tod_msgs/srv/detail/input_device__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_members = {
  "tod_msgs__srv",  // service namespace
  "InputDevice",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_Request_message_type_support_handle,
  NULL  // response message
  // tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_Response_message_type_support_handle
};

static rosidl_service_type_support_t tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_type_support_handle = {
  0,
  &tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice)() {
  if (!tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_type_support_handle.typesupport_identifier) {
    tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, srv, InputDevice_Response)()->data;
  }

  return &tod_msgs__srv__detail__input_device__rosidl_typesupport_introspection_c__InputDevice_service_type_support_handle;
}
