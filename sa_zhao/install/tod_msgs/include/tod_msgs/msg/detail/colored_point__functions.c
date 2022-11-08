// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/colored_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
tod_msgs__msg__ColoredPoint__init(tod_msgs__msg__ColoredPoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point32__init(&msg->point)) {
    tod_msgs__msg__ColoredPoint__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    tod_msgs__msg__ColoredPoint__fini(msg);
    return false;
  }
  return true;
}

void
tod_msgs__msg__ColoredPoint__fini(tod_msgs__msg__ColoredPoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  geometry_msgs__msg__Point32__fini(&msg->point);
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
}

bool
tod_msgs__msg__ColoredPoint__are_equal(const tod_msgs__msg__ColoredPoint * lhs, const tod_msgs__msg__ColoredPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__ColoredPoint__copy(
  const tod_msgs__msg__ColoredPoint * input,
  tod_msgs__msg__ColoredPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point32__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  return true;
}

tod_msgs__msg__ColoredPoint *
tod_msgs__msg__ColoredPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__ColoredPoint * msg = (tod_msgs__msg__ColoredPoint *)allocator.allocate(sizeof(tod_msgs__msg__ColoredPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__ColoredPoint));
  bool success = tod_msgs__msg__ColoredPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__ColoredPoint__destroy(tod_msgs__msg__ColoredPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__ColoredPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__ColoredPoint__Sequence__init(tod_msgs__msg__ColoredPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__ColoredPoint * data = NULL;

  if (size) {
    data = (tod_msgs__msg__ColoredPoint *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__ColoredPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__ColoredPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__ColoredPoint__fini(&data[i - 1]);
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
tod_msgs__msg__ColoredPoint__Sequence__fini(tod_msgs__msg__ColoredPoint__Sequence * array)
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
      tod_msgs__msg__ColoredPoint__fini(&array->data[i]);
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

tod_msgs__msg__ColoredPoint__Sequence *
tod_msgs__msg__ColoredPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__ColoredPoint__Sequence * array = (tod_msgs__msg__ColoredPoint__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__ColoredPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__ColoredPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__ColoredPoint__Sequence__destroy(tod_msgs__msg__ColoredPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__ColoredPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__ColoredPoint__Sequence__are_equal(const tod_msgs__msg__ColoredPoint__Sequence * lhs, const tod_msgs__msg__ColoredPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__ColoredPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__ColoredPoint__Sequence__copy(
  const tod_msgs__msg__ColoredPoint__Sequence * input,
  tod_msgs__msg__ColoredPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__ColoredPoint);
    tod_msgs__msg__ColoredPoint * data =
      (tod_msgs__msg__ColoredPoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__ColoredPoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__ColoredPoint__fini(&data[i]);
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
    if (!tod_msgs__msg__ColoredPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
