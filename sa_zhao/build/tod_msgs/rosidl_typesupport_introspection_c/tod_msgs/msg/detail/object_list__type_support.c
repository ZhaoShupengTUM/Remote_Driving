// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tod_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tod_msgs/msg/detail/object_list__rosidl_typesupport_introspection_c.h"
#include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tod_msgs/msg/detail/object_list__functions.h"
#include "tod_msgs/msg/detail/object_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `object_list`
#include "tod_msgs/msg/object_data.h"
// Member `object_list`
#include "tod_msgs/msg/detail/object_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectList__rosidl_typesupport_introspection_c__ObjectList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tod_msgs__msg__ObjectList__init(message_memory);
}

void ObjectList__rosidl_typesupport_introspection_c__ObjectList_fini_function(void * message_memory)
{
  tod_msgs__msg__ObjectList__fini(message_memory);
}

size_t ObjectList__rosidl_typesupport_introspection_c__size_function__ObjectData__object_list(
  const void * untyped_member)
{
  const tod_msgs__msg__ObjectData__Sequence * member =
    (const tod_msgs__msg__ObjectData__Sequence *)(untyped_member);
  return member->size;
}

const void * ObjectList__rosidl_typesupport_introspection_c__get_const_function__ObjectData__object_list(
  const void * untyped_member, size_t index)
{
  const tod_msgs__msg__ObjectData__Sequence * member =
    (const tod_msgs__msg__ObjectData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ObjectList__rosidl_typesupport_introspection_c__get_function__ObjectData__object_list(
  void * untyped_member, size_t index)
{
  tod_msgs__msg__ObjectData__Sequence * member =
    (tod_msgs__msg__ObjectData__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ObjectList__rosidl_typesupport_introspection_c__resize_function__ObjectData__object_list(
  void * untyped_member, size_t size)
{
  tod_msgs__msg__ObjectData__Sequence * member =
    (tod_msgs__msg__ObjectData__Sequence *)(untyped_member);
  tod_msgs__msg__ObjectData__Sequence__fini(member);
  return tod_msgs__msg__ObjectData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__ObjectList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__ObjectList, object_list),  // bytes offset in struct
    NULL,  // default value
    ObjectList__rosidl_typesupport_introspection_c__size_function__ObjectData__object_list,  // size() function pointer
    ObjectList__rosidl_typesupport_introspection_c__get_const_function__ObjectData__object_list,  // get_const(index) function pointer
    ObjectList__rosidl_typesupport_introspection_c__get_function__ObjectData__object_list,  // get(index) function pointer
    ObjectList__rosidl_typesupport_introspection_c__resize_function__ObjectData__object_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_members = {
  "tod_msgs__msg",  // message namespace
  "ObjectList",  // message name
  2,  // number of fields
  sizeof(tod_msgs__msg__ObjectList),
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array,  // message members
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle = {
  0,
  &ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, ObjectList)() {
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, ObjectData)();
  if (!ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle.typesupport_identifier) {
    ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectList__rosidl_typesupport_introspection_c__ObjectList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
