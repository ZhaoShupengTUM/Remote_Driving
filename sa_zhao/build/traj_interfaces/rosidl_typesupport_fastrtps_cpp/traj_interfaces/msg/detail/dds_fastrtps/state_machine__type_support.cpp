// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from traj_interfaces:msg/StateMachine.idl
// generated code does not contain a copyright notice
#include "traj_interfaces/msg/detail/state_machine__rosidl_typesupport_fastrtps_cpp.hpp"
#include "traj_interfaces/msg/detail/state_machine__struct.hpp"

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

namespace traj_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
cdr_serialize(
  const traj_interfaces::msg::StateMachine & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_state
  cdr << ros_message.vehicle_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  traj_interfaces::msg::StateMachine & ros_message)
{
  // Member: vehicle_state
  cdr >> ros_message.vehicle_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
get_serialized_size(
  const traj_interfaces::msg::StateMachine & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vehicle_state
  {
    size_t item_size = sizeof(ros_message.vehicle_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
max_serialized_size_StateMachine(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: vehicle_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _StateMachine__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const traj_interfaces::msg::StateMachine *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateMachine__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<traj_interfaces::msg::StateMachine *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateMachine__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const traj_interfaces::msg::StateMachine *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StateMachine__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StateMachine(full_bounded, 0);
}

static message_type_support_callbacks_t _StateMachine__callbacks = {
  "traj_interfaces::msg",
  "StateMachine",
  _StateMachine__cdr_serialize,
  _StateMachine__cdr_deserialize,
  _StateMachine__get_serialized_size,
  _StateMachine__max_serialized_size
};

static rosidl_message_type_support_t _StateMachine__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StateMachine__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace traj_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_traj_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<traj_interfaces::msg::StateMachine>()
{
  return &traj_interfaces::msg::typesupport_fastrtps_cpp::_StateMachine__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, traj_interfaces, msg, StateMachine)() {
  return &traj_interfaces::msg::typesupport_fastrtps_cpp::_StateMachine__handle;
}

#ifdef __cplusplus
}
#endif
