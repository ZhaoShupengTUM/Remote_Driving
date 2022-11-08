// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:msg/ObjectData.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/object_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tod_msgs__msg__ObjectData__init(tod_msgs__msg__ObjectData * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // yaw_angle
  // dim_x
  // dim_y
  // dim_z
  // dist_center_x
  // dist_center_y
  // speed_x
  // speed_y
  // acceleration_x
  // acceleration_y
  // classification
  return true;
}

void
tod_msgs__msg__ObjectData__fini(tod_msgs__msg__ObjectData * msg)
{
  if (!msg) {
    return;
  }
  // id
  // yaw_angle
  // dim_x
  // dim_y
  // dim_z
  // dist_center_x
  // dist_center_y
  // speed_x
  // speed_y
  // acceleration_x
  // acceleration_y
  // classification
}

bool
tod_msgs__msg__ObjectData__are_equal(const tod_msgs__msg__ObjectData * lhs, const tod_msgs__msg__ObjectData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // yaw_angle
  if (lhs->yaw_angle != rhs->yaw_angle) {
    return false;
  }
  // dim_x
  if (lhs->dim_x != rhs->dim_x) {
    return false;
  }
  // dim_y
  if (lhs->dim_y != rhs->dim_y) {
    return false;
  }
  // dim_z
  if (lhs->dim_z != rhs->dim_z) {
    return false;
  }
  // dist_center_x
  if (lhs->dist_center_x != rhs->dist_center_x) {
    return false;
  }
  // dist_center_y
  if (lhs->dist_center_y != rhs->dist_center_y) {
    return false;
  }
  // speed_x
  if (lhs->speed_x != rhs->speed_x) {
    return false;
  }
  // speed_y
  if (lhs->speed_y != rhs->speed_y) {
    return false;
  }
  // acceleration_x
  if (lhs->acceleration_x != rhs->acceleration_x) {
    return false;
  }
  // acceleration_y
  if (lhs->acceleration_y != rhs->acceleration_y) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  return true;
}

bool
tod_msgs__msg__ObjectData__copy(
  const tod_msgs__msg__ObjectData * input,
  tod_msgs__msg__ObjectData * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // yaw_angle
  output->yaw_angle = input->yaw_angle;
  // dim_x
  output->dim_x = input->dim_x;
  // dim_y
  output->dim_y = input->dim_y;
  // dim_z
  output->dim_z = input->dim_z;
  // dist_center_x
  output->dist_center_x = input->dist_center_x;
  // dist_center_y
  output->dist_center_y = input->dist_center_y;
  // speed_x
  output->speed_x = input->speed_x;
  // speed_y
  output->speed_y = input->speed_y;
  // acceleration_x
  output->acceleration_x = input->acceleration_x;
  // acceleration_y
  output->acceleration_y = input->acceleration_y;
  // classification
  output->classification = input->classification;
  return true;
}

tod_msgs__msg__ObjectData *
tod_msgs__msg__ObjectData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__ObjectData * msg = (tod_msgs__msg__ObjectData *)allocator.allocate(sizeof(tod_msgs__msg__ObjectData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__msg__ObjectData));
  bool success = tod_msgs__msg__ObjectData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__msg__ObjectData__destroy(tod_msgs__msg__ObjectData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__msg__ObjectData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__msg__ObjectData__Sequence__init(tod_msgs__msg__ObjectData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__ObjectData * data = NULL;

  if (size) {
    data = (tod_msgs__msg__ObjectData *)allocator.zero_allocate(size, sizeof(tod_msgs__msg__ObjectData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__msg__ObjectData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__msg__ObjectData__fini(&data[i - 1]);
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
tod_msgs__msg__ObjectData__Sequence__fini(tod_msgs__msg__ObjectData__Sequence * array)
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
      tod_msgs__msg__ObjectData__fini(&array->data[i]);
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

tod_msgs__msg__ObjectData__Sequence *
tod_msgs__msg__ObjectData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__msg__ObjectData__Sequence * array = (tod_msgs__msg__ObjectData__Sequence *)allocator.allocate(sizeof(tod_msgs__msg__ObjectData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__msg__ObjectData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__msg__ObjectData__Sequence__destroy(tod_msgs__msg__ObjectData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__msg__ObjectData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__msg__ObjectData__Sequence__are_equal(const tod_msgs__msg__ObjectData__Sequence * lhs, const tod_msgs__msg__ObjectData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__msg__ObjectData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__msg__ObjectData__Sequence__copy(
  const tod_msgs__msg__ObjectData__Sequence * input,
  tod_msgs__msg__ObjectData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__msg__ObjectData);
    tod_msgs__msg__ObjectData * data =
      (tod_msgs__msg__ObjectData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__msg__ObjectData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__msg__ObjectData__fini(&data[i]);
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
    if (!tod_msgs__msg__ObjectData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
