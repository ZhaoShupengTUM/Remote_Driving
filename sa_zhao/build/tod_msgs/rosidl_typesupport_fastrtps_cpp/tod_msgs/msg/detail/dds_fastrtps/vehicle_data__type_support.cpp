// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/vehicle_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tod_msgs/msg/detail/vehicle_data__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace tod_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_serialize(
  const tod_msgs::msg::VehicleData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: indicator
  cdr << ros_message.indicator;
  // Member: gear_position
  cdr << ros_message.gear_position;
  // Member: honk
  cdr << ros_message.honk;
  // Member: wiper
  cdr << ros_message.wiper;
  // Member: head_light
  cdr << ros_message.head_light;
  // Member: flash_light
  cdr << ros_message.flash_light;
  // Member: steering_wheel_angle
  cdr << ros_message.steering_wheel_angle;
  // Member: curvature
  cdr << ros_message.curvature;
  // Member: engine_speed
  cdr << ros_message.engine_speed;
  // Member: longitudinal_speed
  cdr << ros_message.longitudinal_speed;
  // Member: linear_acceleration
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.linear_acceleration,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tod_msgs::msg::VehicleData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: indicator
  cdr >> ros_message.indicator;

  // Member: gear_position
  cdr >> ros_message.gear_position;

  // Member: honk
  cdr >> ros_message.honk;

  // Member: wiper
  cdr >> ros_message.wiper;

  // Member: head_light
  cdr >> ros_message.head_light;

  // Member: flash_light
  cdr >> ros_message.flash_light;

  // Member: steering_wheel_angle
  cdr >> ros_message.steering_wheel_angle;

  // Member: curvature
  cdr >> ros_message.curvature;

  // Member: engine_speed
  cdr >> ros_message.engine_speed;

  // Member: longitudinal_speed
  cdr >> ros_message.longitudinal_speed;

  // Member: linear_acceleration
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.linear_acceleration);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
get_serialized_size(
  const tod_msgs::msg::VehicleData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: indicator
  {
    size_t item_size = sizeof(ros_message.indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_position
  {
    size_t item_size = sizeof(ros_message.gear_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: honk
  {
    size_t item_size = sizeof(ros_message.honk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wiper
  {
    size_t item_size = sizeof(ros_message.wiper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: head_light
  {
    size_t item_size = sizeof(ros_message.head_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flash_light
  {
    size_t item_size = sizeof(ros_message.flash_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_wheel_angle
  {
    size_t item_size = sizeof(ros_message.steering_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature
  {
    size_t item_size = sizeof(ros_message.curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_speed
  {
    size_t item_size = sizeof(ros_message.engine_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitudinal_speed
  {
    size_t item_size = sizeof(ros_message.longitudinal_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_acceleration

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.linear_acceleration, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
max_serialized_size_VehicleData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: indicator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: honk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wiper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: head_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flash_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_wheel_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curvature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: longitudinal_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: linear_acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::VehicleData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tod_msgs::msg::VehicleData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::VehicleData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleData(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleData__callbacks = {
  "tod_msgs::msg",
  "VehicleData",
  _VehicleData__cdr_serialize,
  _VehicleData__cdr_deserialize,
  _VehicleData__get_serialized_size,
  _VehicleData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleData__callbacks,
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
get_message_type_support_handle<tod_msgs::msg::VehicleData>()
{
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_VehicleData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, msg, VehicleData)() {
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_VehicleData__handle;
}

#ifdef __cplusplus
}
#endif
