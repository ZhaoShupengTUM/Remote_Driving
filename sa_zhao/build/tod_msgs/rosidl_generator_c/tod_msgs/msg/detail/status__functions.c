// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `operator_ip_address`
// Member `vehicle_ip_address`
// Member `vehicle_nav_status`
// Member `vehicle_gps_pos_type`
#include "rosidl_runtime_c/string_functions.h"

bool
tod_msgs__msg__Status__init(tod_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tod_msgs__msg__Status__fini(msg);
    return false;
  }
  // operator_ip_address
  if (!rosidl_runtime_c__String__init(&msg->operator_ip_address)) {
    tod_msgs__msg__Status__fini(msg);
    return false;
  }
  // operator_control_mode
  // operator_video_rate_mode
  // tod_status
  // vehicle_ip_address
  if (!rosidl_runtime_c__String__init(&msg->vehicle_ip_address)) {
    tod_msgs__msg__Status__fini(msg);
    return false;
  }
  // vehicle_emergency_stop_released
  // vehicle_long_approved
  // vehicle_lat_approved
  // vehicle_control_mode
  // vehicle_nav_status
  if (!rosidl_runtime_c__String__init(&msg->vehicle_nav_status)) {
    tod_msgs__msg__Status__fini(msg);
    return false;
  }
  // vehicle_gps_pos_type
  if (!rosidl_runtime_c__String__init(&msg->vehicle_gps_pos_type)) {
    tod_msgs__msg__Status__fini(msg);
    return false;
  }
  return true;
}

void
tod_msgs__msg__Status__fini(tod_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // operator_ip_address
  rosidl_runtime_c__String__fini(&msg->operator_ip_address);
  // operator_control_mode
  // operator_video_rate_mode
  // tod_status
  // vehicle_ip_address
  rosidl_runtime_c__String__fini(&msg->vehicle_ip_address);
  // vehicle_emergency_stop_released
  // vehicle_long_approved
  // vehicle_lat_approved
  // vehicle_control_mode
  // vehicle_nav_status
  rosidl_runtime_c__String__fini(&msg->vehicle_nav_status);
  // vehicle_gps_pos_type
  rosidl_runtime_c__String__fini(&msg->vehicle_gps_pos_type);
}

bool
tod_msgs__msg__Status__are_equal(const tod_msgs__msg__Status * lhs, const tod_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // operator_ip_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operator_ip_address), &(rhs->operator_ip_address)))
  {
    return false;
  }
  // operator_control_mode
  if (lhs->operator_control_mode != rhs->operator_control_mode) {
    return false;
  }
  // operator_video_rate_mode
  if (lhs->operator_video_rate_mode != rhs->operator_video_rate_mode) {
    return false;
  }
  // tod_status
  if (lhs->tod_status != rhs->tod_status) {
    return false;
  }
  // vehicle_ip_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicle_ip_address), &(rhs->vehicle_ip_address)))
  {
    return false;
  }
  // vehicle_emergency_stop_released
  if (lhs->vehicle_emergency_stop_released != rhs->vehicle_emergency_stop_released) {
    return false;
  }
  // vehicle_long_approved
  if (lhs->vehicle_long_approved != rhs->vehicle_long_approved) {
    return false;
  }
  // vehicle_lat_approved
  if (lhs->vehicle_lat_approved != rhs->vehicle_lat_approved) {
    return false;
  }
  // vehicle_control_mode
  if (lhs->vehicle_control_mode != rhs->vehicle_control_mode) {
    return false;
  }
  // vehicle_nav_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicle_nav_status), &(rhs->vehicle_nav_status)))
  {
    return false;
  }
  // vehicle_gps_pos_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vehicle_gps_pos_type), &(rhs->vehicle_gps_pos_type)))
  {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__Status__copy(
  const tod_msgs__msg__Status * input,
  tod_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // operator_ip_address
  if (!rosidl_runtime_c__String__copy(
      &(input->operator_ip_address), &(output->operator_ip_address)))
  {
    return false;
  }
  // operator_control_mode
  output->operator_control_mode = input->operator_control_mode;
  // operator_video_rate_mode
  output->operator_video_rate_mode = input->operator_video_rate_mode;
  // tod_status
  output->tod_status = input->tod_status;
  // vehicle_ip_address
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicle_ip_address), &(output->vehicle_ip_address)))
  {
    return false;
  }
  // vehicle_emergency_stop_released
  output->vehicle_emergency_stop_released = input->vehicle_emergency_stop_released;
  // vehicle_long_approved
  output->vehicle_long_approved = input->vehicle_long_approved;
  // vehicle_lat_approved
  output->vehicle_lat_approved = input->vehicle_lat_approved;
  // vehicle_control_mode
  output->vehicle_control_mode = input->vehicle_control_mode;
  // vehicle_nav_status
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicle_nav_status), &(output->vehicle_nav_status)))
  {
    return false;
  }
  // vehicle_gps_pos_type
  if (!rosidl_runtime_c__String__copy(
      &(input->vehicle_gps_pos_type), &(output->vehicle_gps_pos_type)))
  {
    return false;
  }
  return true;
}

tod_msgs__msg__Status *
tod_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__Status * msg = (tod_msgs__msg__Status *)allocator.allocate(sizeof(tod_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__Status));
  bool success = tod_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__Status__destroy(tod_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__Status__Sequence__init(tod_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__Status * data = NULL;

  if (size) {
    data = (tod_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tod_msgs__msg__Status__Sequence__fini(tod_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tod_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tod_msgs__msg__Status__Sequence *
tod_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__Status__Sequence * array = (tod_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__Status__Sequence__destroy(tod_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__Status__Sequence__are_equal(const tod_msgs__msg__Status__Sequence * lhs, const tod_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__Status__Sequence__copy(
  const tod_msgs__msg__Status__Sequence * input,
  tod_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__Status);
    tod_msgs__msg__Status * data =
      (tod_msgs__msg__Status *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__Status__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__Status__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tod_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
