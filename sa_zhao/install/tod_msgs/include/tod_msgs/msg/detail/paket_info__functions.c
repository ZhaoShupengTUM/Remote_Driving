// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/PaketInfo.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/paket_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
tod_msgs__msg__PaketInfo__init(tod_msgs__msg__PaketInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tod_msgs__msg__PaketInfo__fini(msg);
    return false;
  }
  // latency_usec
  // size_bit
  // seq_num
  return true;
}

void
tod_msgs__msg__PaketInfo__fini(tod_msgs__msg__PaketInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // latency_usec
  // size_bit
  // seq_num
}

bool
tod_msgs__msg__PaketInfo__are_equal(const tod_msgs__msg__PaketInfo * lhs, const tod_msgs__msg__PaketInfo * rhs)
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
  // latency_usec
  if (lhs->latency_usec != rhs->latency_usec) {
    return false;
  }
  // size_bit
  if (lhs->size_bit != rhs->size_bit) {
    return false;
  }
  // seq_num
  if (lhs->seq_num != rhs->seq_num) {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__PaketInfo__copy(
  const tod_msgs__msg__PaketInfo * input,
  tod_msgs__msg__PaketInfo * output)
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
  // latency_usec
  output->latency_usec = input->latency_usec;
  // size_bit
  output->size_bit = input->size_bit;
  // seq_num
  output->seq_num = input->seq_num;
  return true;
}

tod_msgs__msg__PaketInfo *
tod_msgs__msg__PaketInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__PaketInfo * msg = (tod_msgs__msg__PaketInfo *)allocator.allocate(sizeof(tod_msgs__msg__PaketInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__PaketInfo));
  bool success = tod_msgs__msg__PaketInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__PaketInfo__destroy(tod_msgs__msg__PaketInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__PaketInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__PaketInfo__Sequence__init(tod_msgs__msg__PaketInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__PaketInfo * data = NULL;

  if (size) {
    data = (tod_msgs__msg__PaketInfo *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__PaketInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__PaketInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__PaketInfo__fini(&data[i - 1]);
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
tod_msgs__msg__PaketInfo__Sequence__fini(tod_msgs__msg__PaketInfo__Sequence * array)
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
      tod_msgs__msg__PaketInfo__fini(&array->data[i]);
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

tod_msgs__msg__PaketInfo__Sequence *
tod_msgs__msg__PaketInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__PaketInfo__Sequence * array = (tod_msgs__msg__PaketInfo__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__PaketInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__PaketInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__PaketInfo__Sequence__destroy(tod_msgs__msg__PaketInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__PaketInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__PaketInfo__Sequence__are_equal(const tod_msgs__msg__PaketInfo__Sequence * lhs, const tod_msgs__msg__PaketInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__PaketInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__PaketInfo__Sequence__copy(
  const tod_msgs__msg__PaketInfo__Sequence * input,
  tod_msgs__msg__PaketInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__PaketInfo);
    tod_msgs__msg__PaketInfo * data =
      (tod_msgs__msg__PaketInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__PaketInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__PaketInfo__fini(&data[i]);
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
    if (!tod_msgs__msg__PaketInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
