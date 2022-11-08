// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/ColoredPolygon.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tod_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "tod_msgs/msg/detail/colored_polygon__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tod_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ColoredPolygon_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ColoredPolygon_type_support_ids_t;

static const _ColoredPolygon_type_support_ids_t _ColoredPolygon_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColoredPolygon_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ColoredPolygon_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColoredPolygon_type_support_symbol_names_t _ColoredPolygon_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tod_msgs, msg, ColoredPolygon)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, ColoredPolygon)),
  }
};

typedef struct _ColoredPolygon_type_support_data_t
{
  void * data[2];
} _ColoredPolygon_type_support_data_t;

static _ColoredPolygon_type_support_data_t _ColoredPolygon_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColoredPolygon_message_typesupport_map = {
  2,
  "tod_msgs",
  &_ColoredPolygon_message_typesupport_ids.typesupport_identifier[0],
  &_ColoredPolygon_message_typesupport_symbol_names.symbol_name[0],
  &_ColoredPolygon_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ColoredPolygon_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColoredPolygon_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace tod_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tod_msgs, msg, ColoredPolygon)() {
  return &::tod_msgs::msg::rosidl_typesupport_c::ColoredPolygon_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif