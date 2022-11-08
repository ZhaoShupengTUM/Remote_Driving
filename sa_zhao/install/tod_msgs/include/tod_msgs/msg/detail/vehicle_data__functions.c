// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/vehicle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
tod_msgs__msg__VehicleData__init(tod_msgs__msg__VehicleData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tod_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  // indicator
  // gear_position
  // honk
  // wiper
  // head_light
  // flash_light
  // steering_wheel_angle
  // curvature
  // engine_speed
  // longitudinal_speed
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    tod_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  return true;
}

void
tod_msgs__msg__VehicleData__fini(tod_msgs__msg__VehicleData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // indicator
  // gear_position
  // honk
  // wiper
  // head_light
  // flash_light
  // steering_wheel_angle
  // curvature
  // engine_speed
  // longitudinal_speed
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
}

bool
tod_msgs__msg__VehicleData__are_equal(const tod_msgs__msg__VehicleData * lhs, const tod_msgs__msg__VehicleData * rhs)
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
  // indicator
  if (lhs->indicator != rhs->indicator) {
    return false;
  }
  // gear_position
  if (lhs->gear_position != rhs->gear_position) {
    return false;
  }
  // honk
  if (lhs->honk != rhs->honk) {
    return false;
  }
  // wiper
  if (lhs->wiper != rhs->wiper) {
    return false;
  }
  // head_light
  if (lhs->head_light != rhs->head_light) {
    return false;
  }
  // flash_light
  if (lhs->flash_light != rhs->flash_light) {
    return false;
  }
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  // curvature
  if (lhs->curvature != rhs->curvature) {
    return false;
  }
  // engine_speed
  if (lhs->engine_speed != rhs->engine_speed) {
    return false;
  }
  // longitudinal_speed
  if (lhs->longitudinal_speed != rhs->longitudinal_speed) {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__VehicleData__copy(
  const tod_msgs__msg__VehicleData * input,
  tod_msgs__msg__VehicleData * output)
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
  // indicator
  output->indicator = input->indicator;
  // gear_position
  output->gear_position = input->gear_position;
  // honk
  output->honk = input->honk;
  // wiper
  output->wiper = input->wiper;
  // head_light
  output->head_light = input->head_light;
  // flash_light
  output->flash_light = input->flash_light;
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  // curvature
  output->curvature = input->curvature;
  // engine_speed
  output->engine_speed = input->engine_speed;
  // longitudinal_speed
  output->longitudinal_speed = input->longitudinal_speed;
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  return true;
}

tod_msgs__msg__VehicleData *
tod_msgs__msg__VehicleData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__VehicleData * msg = (tod_msgs__msg__VehicleData *)allocator.allocate(sizeof(tod_msgs__msg__VehicleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__VehicleData));
  bool success = tod_msgs__msg__VehicleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__VehicleData__destroy(tod_msgs__msg__VehicleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__VehicleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__VehicleData__Sequence__init(tod_msgs__msg__VehicleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__VehicleData * data = NULL;

  if (size) {
    data = (tod_msgs__msg__VehicleData *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__VehicleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__VehicleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__VehicleData__fini(&data[i - 1]);
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
tod_msgs__msg__VehicleData__Sequence__fini(tod_msgs__msg__VehicleData__Sequence * array)
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
      tod_msgs__msg__VehicleData__fini(&array->data[i]);
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

tod_msgs__msg__VehicleData__Sequence *
tod_msgs__msg__VehicleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__VehicleData__Sequence * array = (tod_msgs__msg__VehicleData__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__VehicleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__VehicleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__VehicleData__Sequence__destroy(tod_msgs__msg__VehicleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__VehicleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__VehicleData__Sequence__are_equal(const tod_msgs__msg__VehicleData__Sequence * lhs, const tod_msgs__msg__VehicleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__VehicleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__VehicleData__Sequence__copy(
  const tod_msgs__msg__VehicleData__Sequence * input,
  tod_msgs__msg__VehicleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__VehicleData);
    tod_msgs__msg__VehicleData * data =
      (tod_msgs__msg__VehicleData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__VehicleData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__VehicleData__fini(&data[i]);
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
    if (!tod_msgs__msg__VehicleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
