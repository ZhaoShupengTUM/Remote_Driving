// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/VideoInfo.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/video_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
tod_msgs__msg__VideoInfo__init(tod_msgs__msg__VideoInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tod_msgs__msg__VideoInfo__fini(msg);
    return false;
  }
  // kbitrate
  // framerate
  // image_height
  // image_width
  // image_nof_pixel
  return true;
}

void
tod_msgs__msg__VideoInfo__fini(tod_msgs__msg__VideoInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // kbitrate
  // framerate
  // image_height
  // image_width
  // image_nof_pixel
}

bool
tod_msgs__msg__VideoInfo__are_equal(const tod_msgs__msg__VideoInfo * lhs, const tod_msgs__msg__VideoInfo * rhs)
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
  // kbitrate
  if (lhs->kbitrate != rhs->kbitrate) {
    return false;
  }
  // framerate
  if (lhs->framerate != rhs->framerate) {
    return false;
  }
  // image_height
  if (lhs->image_height != rhs->image_height) {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // image_nof_pixel
  if (lhs->image_nof_pixel != rhs->image_nof_pixel) {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__VideoInfo__copy(
  const tod_msgs__msg__VideoInfo * input,
  tod_msgs__msg__VideoInfo * output)
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
  // kbitrate
  output->kbitrate = input->kbitrate;
  // framerate
  output->framerate = input->framerate;
  // image_height
  output->image_height = input->image_height;
  // image_width
  output->image_width = input->image_width;
  // image_nof_pixel
  output->image_nof_pixel = input->image_nof_pixel;
  return true;
}

tod_msgs__msg__VideoInfo *
tod_msgs__msg__VideoInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__VideoInfo * msg = (tod_msgs__msg__VideoInfo *)allocator.allocate(sizeof(tod_msgs__msg__VideoInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__VideoInfo));
  bool success = tod_msgs__msg__VideoInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__VideoInfo__destroy(tod_msgs__msg__VideoInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__VideoInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__VideoInfo__Sequence__init(tod_msgs__msg__VideoInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__VideoInfo * data = NULL;

  if (size) {
    data = (tod_msgs__msg__VideoInfo *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__VideoInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__VideoInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__VideoInfo__fini(&data[i - 1]);
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
tod_msgs__msg__VideoInfo__Sequence__fini(tod_msgs__msg__VideoInfo__Sequence * array)
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
      tod_msgs__msg__VideoInfo__fini(&array->data[i]);
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

tod_msgs__msg__VideoInfo__Sequence *
tod_msgs__msg__VideoInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__VideoInfo__Sequence * array = (tod_msgs__msg__VideoInfo__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__VideoInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__VideoInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__VideoInfo__Sequence__destroy(tod_msgs__msg__VideoInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__VideoInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__VideoInfo__Sequence__are_equal(const tod_msgs__msg__VideoInfo__Sequence * lhs, const tod_msgs__msg__VideoInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__VideoInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__VideoInfo__Sequence__copy(
  const tod_msgs__msg__VideoInfo__Sequence * input,
  tod_msgs__msg__VideoInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__VideoInfo);
    tod_msgs__msg__VideoInfo * data =
      (tod_msgs__msg__VideoInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__VideoInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__VideoInfo__fini(&data[i]);
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
    if (!tod_msgs__msg__VideoInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
