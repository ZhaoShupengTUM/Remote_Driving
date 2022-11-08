// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/PrimaryControlCmd.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/primary_control_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
tod_msgs__msg__PrimaryControlCmd__init(tod_msgs__msg__PrimaryControlCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tod_msgs__msg__PrimaryControlCmd__fini(msg);
    return false;
  }
  // velocity
  // acceleration
  // steering_wheel_angle
  return true;
}

void
tod_msgs__msg__PrimaryControlCmd__fini(tod_msgs__msg__PrimaryControlCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // velocity
  // acceleration
  // steering_wheel_angle
}

bool
tod_msgs__msg__PrimaryControlCmd__are_equal(const tod_msgs__msg__PrimaryControlCmd * lhs, const tod_msgs__msg__PrimaryControlCmd * rhs)
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
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__PrimaryControlCmd__copy(
  const tod_msgs__msg__PrimaryControlCmd * input,
  tod_msgs__msg__PrimaryControlCmd * output)
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
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  return true;
}

tod_msgs__msg__PrimaryControlCmd *
tod_msgs__msg__PrimaryControlCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__PrimaryControlCmd * msg = (tod_msgs__msg__PrimaryControlCmd *)allocator.allocate(sizeof(tod_msgs__msg__PrimaryControlCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__PrimaryControlCmd));
  bool success = tod_msgs__msg__PrimaryControlCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__PrimaryControlCmd__destroy(tod_msgs__msg__PrimaryControlCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__PrimaryControlCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__PrimaryControlCmd__Sequence__init(tod_msgs__msg__PrimaryControlCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__PrimaryControlCmd * data = NULL;

  if (size) {
    data = (tod_msgs__msg__PrimaryControlCmd *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__PrimaryControlCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__PrimaryControlCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__PrimaryControlCmd__fini(&data[i - 1]);
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
tod_msgs__msg__PrimaryControlCmd__Sequence__fini(tod_msgs__msg__PrimaryControlCmd__Sequence * array)
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
      tod_msgs__msg__PrimaryControlCmd__fini(&array->data[i]);
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

tod_msgs__msg__PrimaryControlCmd__Sequence *
tod_msgs__msg__PrimaryControlCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__PrimaryControlCmd__Sequence * array = (tod_msgs__msg__PrimaryControlCmd__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__PrimaryControlCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__PrimaryControlCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__PrimaryControlCmd__Sequence__destroy(tod_msgs__msg__PrimaryControlCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__PrimaryControlCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__PrimaryControlCmd__Sequence__are_equal(const tod_msgs__msg__PrimaryControlCmd__Sequence * lhs, const tod_msgs__msg__PrimaryControlCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__PrimaryControlCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__PrimaryControlCmd__Sequence__copy(
  const tod_msgs__msg__PrimaryControlCmd__Sequence * input,
  tod_msgs__msg__PrimaryControlCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__PrimaryControlCmd);
    tod_msgs__msg__PrimaryControlCmd * data =
      (tod_msgs__msg__PrimaryControlCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__PrimaryControlCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__PrimaryControlCmd__fini(&data[i]);
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
    if (!tod_msgs__msg__PrimaryControlCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
