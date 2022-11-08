// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice
#include "tod_msgs/srv/detail/input_device__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input_device_directory`
#include "rosidl_runtime_c/string_functions.h"

bool
tod_msgs__srv__InputDevice_Request__init(tod_msgs__srv__InputDevice_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input_device_directory
  if (!rosidl_runtime_c__String__init(&msg->input_device_directory)) {
    tod_msgs__srv__InputDevice_Request__fini(msg);
    return false;
  }
  return true;
}

void
tod_msgs__srv__InputDevice_Request__fini(tod_msgs__srv__InputDevice_Request * msg)
{
  if (!msg) {
    return;
  }
  // input_device_directory
  rosidl_runtime_c__String__fini(&msg->input_device_directory);
}

bool
tod_msgs__srv__InputDevice_Request__are_equal(const tod_msgs__srv__InputDevice_Request * lhs, const tod_msgs__srv__InputDevice_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_device_directory
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->input_device_directory), &(rhs->input_device_directory)))
  {
    return false;
  }
  return true;
}

bool
tod_msgs__srv__InputDevice_Request__copy(
  const tod_msgs__srv__InputDevice_Request * input,
  tod_msgs__srv__InputDevice_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input_device_directory
  if (!rosidl_runtime_c__String__copy(
      &(input->input_device_directory), &(output->input_device_directory)))
  {
    return false;
  }
  return true;
}

tod_msgs__srv__InputDevice_Request *
tod_msgs__srv__InputDevice_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__srv__InputDevice_Request * msg = (tod_msgs__srv__InputDevice_Request *)allocator.allocate(sizeof(tod_msgs__srv__InputDevice_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__srv__InputDevice_Request));
  bool success = tod_msgs__srv__InputDevice_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__srv__InputDevice_Request__destroy(tod_msgs__srv__InputDevice_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__srv__InputDevice_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__srv__InputDevice_Request__Sequence__init(tod_msgs__srv__InputDevice_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__srv__InputDevice_Request * data = NULL;

  if (size) {
    data = (tod_msgs__srv__InputDevice_Request *)allocator.zero_allocate(size, sizeof(tod_msgs__srv__InputDevice_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__srv__InputDevice_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__srv__InputDevice_Request__fini(&data[i - 1]);
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
tod_msgs__srv__InputDevice_Request__Sequence__fini(tod_msgs__srv__InputDevice_Request__Sequence * array)
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
      tod_msgs__srv__InputDevice_Request__fini(&array->data[i]);
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

tod_msgs__srv__InputDevice_Request__Sequence *
tod_msgs__srv__InputDevice_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__srv__InputDevice_Request__Sequence * array = (tod_msgs__srv__InputDevice_Request__Sequence *)allocator.allocate(sizeof(tod_msgs__srv__InputDevice_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__srv__InputDevice_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__srv__InputDevice_Request__Sequence__destroy(tod_msgs__srv__InputDevice_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__srv__InputDevice_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__srv__InputDevice_Request__Sequence__are_equal(const tod_msgs__srv__InputDevice_Request__Sequence * lhs, const tod_msgs__srv__InputDevice_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__srv__InputDevice_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__srv__InputDevice_Request__Sequence__copy(
  const tod_msgs__srv__InputDevice_Request__Sequence * input,
  tod_msgs__srv__InputDevice_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__srv__InputDevice_Request);
    tod_msgs__srv__InputDevice_Request * data =
      (tod_msgs__srv__InputDevice_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__srv__InputDevice_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__srv__InputDevice_Request__fini(&data[i]);
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
    if (!tod_msgs__srv__InputDevice_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tod_msgs__srv__InputDevice_Response__init(tod_msgs__srv__InputDevice_Response * msg)
{
  if (!msg) {
    return false;
  }
  // successfully_changed
  return true;
}

void
tod_msgs__srv__InputDevice_Response__fini(tod_msgs__srv__InputDevice_Response * msg)
{
  if (!msg) {
    return;
  }
  // successfully_changed
}

bool
tod_msgs__srv__InputDevice_Response__are_equal(const tod_msgs__srv__InputDevice_Response * lhs, const tod_msgs__srv__InputDevice_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // successfully_changed
  if (lhs->successfully_changed != rhs->successfully_changed) {
    return false;
  }
  return true;
}

bool
tod_msgs__srv__InputDevice_Response__copy(
  const tod_msgs__srv__InputDevice_Response * input,
  tod_msgs__srv__InputDevice_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // successfully_changed
  output->successfully_changed = input->successfully_changed;
  return true;
}

tod_msgs__srv__InputDevice_Response *
tod_msgs__srv__InputDevice_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__srv__InputDevice_Response * msg = (tod_msgs__srv__InputDevice_Response *)allocator.allocate(sizeof(tod_msgs__srv__InputDevice_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tod_msgs__srv__InputDevice_Response));
  bool success = tod_msgs__srv__InputDevice_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tod_msgs__srv__InputDevice_Response__destroy(tod_msgs__srv__InputDevice_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tod_msgs__srv__InputDevice_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tod_msgs__srv__InputDevice_Response__Sequence__init(tod_msgs__srv__InputDevice_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__srv__InputDevice_Response * data = NULL;

  if (size) {
    data = (tod_msgs__srv__InputDevice_Response *)allocator.zero_allocate(size, sizeof(tod_msgs__srv__InputDevice_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tod_msgs__srv__InputDevice_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tod_msgs__srv__InputDevice_Response__fini(&data[i - 1]);
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
tod_msgs__srv__InputDevice_Response__Sequence__fini(tod_msgs__srv__InputDevice_Response__Sequence * array)
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
      tod_msgs__srv__InputDevice_Response__fini(&array->data[i]);
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

tod_msgs__srv__InputDevice_Response__Sequence *
tod_msgs__srv__InputDevice_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tod_msgs__srv__InputDevice_Response__Sequence * array = (tod_msgs__srv__InputDevice_Response__Sequence *)allocator.allocate(sizeof(tod_msgs__srv__InputDevice_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tod_msgs__srv__InputDevice_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tod_msgs__srv__InputDevice_Response__Sequence__destroy(tod_msgs__srv__InputDevice_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tod_msgs__srv__InputDevice_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tod_msgs__srv__InputDevice_Response__Sequence__are_equal(const tod_msgs__srv__InputDevice_Response__Sequence * lhs, const tod_msgs__srv__InputDevice_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tod_msgs__srv__InputDevice_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tod_msgs__srv__InputDevice_Response__Sequence__copy(
  const tod_msgs__srv__InputDevice_Response__Sequence * input,
  tod_msgs__srv__InputDevice_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tod_msgs__srv__InputDevice_Response);
    tod_msgs__srv__InputDevice_Response * data =
      (tod_msgs__srv__InputDevice_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tod_msgs__srv__InputDevice_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tod_msgs__srv__InputDevice_Response__fini(&data[i]);
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
    if (!tod_msgs__srv__InputDevice_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
