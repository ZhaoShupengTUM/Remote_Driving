// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tod_msgs:msg/ColoredPolygon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tod_msgs/msg/detail/colored_polygon__rosidl_typesupport_introspection_c.h"
#include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tod_msgs/msg/detail/colored_polygon__functions.h"
#include "tod_msgs/msg/detail/colored_polygon__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "tod_msgs/msg/colored_point.h"
// Member `points`
#include "tod_msgs/msg/detail/colored_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tod_msgs__msg__ColoredPolygon__init(message_memory);
}

void ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_fini_function(void * message_memory)
{
  tod_msgs__msg__ColoredPolygon__fini(message_memory);
}

size_t ColoredPolygon__rosidl_typesupport_introspection_c__size_function__ColoredPoint__points(
  const void * untyped_member)
{
  const tod_msgs__msg__ColoredPoint__Sequence * member =
    (const tod_msgs__msg__ColoredPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * ColoredPolygon__rosidl_typesupport_introspection_c__get_const_function__ColoredPoint__points(
  const void * untyped_member, size_t index)
{
  const tod_msgs__msg__ColoredPoint__Sequence * member =
    (const tod_msgs__msg__ColoredPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ColoredPolygon__rosidl_typesupport_introspection_c__get_function__ColoredPoint__points(
  void * untyped_member, size_t index)
{
  tod_msgs__msg__ColoredPoint__Sequence * member =
    (tod_msgs__msg__ColoredPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ColoredPolygon__rosidl_typesupport_introspection_c__resize_function__ColoredPoint__points(
  void * untyped_member, size_t size)
{
  tod_msgs__msg__ColoredPoint__Sequence * member =
    (tod_msgs__msg__ColoredPoint__Sequence *)(untyped_member);
  tod_msgs__msg__ColoredPoint__Sequence__fini(member);
  return tod_msgs__msg__ColoredPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__ColoredPolygon, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__ColoredPolygon, points),  // bytes offset in struct
    NULL,  // default value
    ColoredPolygon__rosidl_typesupport_introspection_c__size_function__ColoredPoint__points,  // size() function pointer
    ColoredPolygon__rosidl_typesupport_introspection_c__get_const_function__ColoredPoint__points,  // get_const(index) function pointer
    ColoredPolygon__rosidl_typesupport_introspection_c__get_function__ColoredPoint__points,  // get(index) function pointer
    ColoredPolygon__rosidl_typesupport_introspection_c__resize_function__ColoredPoint__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_members = {
  "tod_msgs__msg",  // message namespace
  "ColoredPolygon",  // message name
  2,  // number of fields
  sizeof(tod_msgs__msg__ColoredPolygon),
  ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_member_array,  // message members
  ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_init_function,  // function to initialize message memory (memory has to be allocated)
  ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_type_support_handle = {
  0,
  &ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, ColoredPolygon)() {
  ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, ColoredPoint)();
  if (!ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_type_support_handle.typesupport_identifier) {
    ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ColoredPolygon__rosidl_typesupport_introspection_c__ColoredPolygon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
