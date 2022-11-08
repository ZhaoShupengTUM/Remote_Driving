// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/colored_point__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tod_msgs/msg/detail/colored_point__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point32 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point32 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point32 &,
  size_t current_alignment);
size_t
max_serialized_size_Point32(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::ColorRGBA &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::ColorRGBA &);
size_t get_serialized_size(
  const std_msgs::msg::ColorRGBA &,
  size_t current_alignment);
size_t
max_serialized_size_ColorRGBA(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace tod_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_serialize(
  const tod_msgs::msg::ColoredPoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.point,
    cdr);
  // Member: color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.color,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tod_msgs::msg::ColoredPoint & ros_message)
{
  // Member: point
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.point);

  // Member: color
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.color);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
get_serialized_size(
  const tod_msgs::msg::ColoredPoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: point

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.point, current_alignment);
  // Member: color

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.color, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
max_serialized_size_ColoredPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point32(
        full_bounded, current_alignment);
    }
  }

  // Member: color
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ColorRGBA(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ColoredPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::ColoredPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ColoredPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tod_msgs::msg::ColoredPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ColoredPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::ColoredPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ColoredPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ColoredPoint(full_bounded, 0);
}

static message_type_support_callbacks_t _ColoredPoint__callbacks = {
  "tod_msgs::msg",
  "ColoredPoint",
  _ColoredPoint__cdr_serialize,
  _ColoredPoint__cdr_deserialize,
  _ColoredPoint__get_serialized_size,
  _ColoredPoint__max_serialized_size
};

static rosidl_message_type_support_t _ColoredPoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ColoredPoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tod_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tod_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tod_msgs::msg::ColoredPoint>()
{
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_ColoredPoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, msg, ColoredPoint)() {
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_ColoredPoint__handle;
}

#ifdef __cplusplus
}
#endif
