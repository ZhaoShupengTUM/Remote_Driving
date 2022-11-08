// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from traj_interfaces:msg/StateMachine.idl
// generated code does not contain a copyright notice
#include "traj_interfaces/msg/detail/state_machine__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
traj_interfaces__msg__StateMachine__init(traj_interfaces__msg__StateMachine * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_state
  return true;
}

void
traj_interfaces__msg__StateMachine__fini(traj_interfaces__msg__StateMachine * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_state
}

bool
traj_interfaces__msg__StateMachine__are_equal(const traj_interfaces__msg__StateMachine * lhs, const traj_interfaces__msg__StateMachine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_state
  if (lhs->vehicle_state != rhs->vehicle_state) {
    return false;
  }
  return true;
}

bool
traj_interfaces__msg__StateMachine__copy(
  const traj_interfaces__msg__StateMachine * input,
  traj_interfaces__msg__StateMachine * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_state
  output->vehicle_state = input->vehicle_state;
  return true;
}

traj_interfaces__msg__StateMachine *
traj_interfaces__msg__StateMachine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traj_interfaces__msg__StateMachine * msg = (traj_interfaces__msg__StateMachine *)allocator.allocate(sizeof(traj_interfaces__msg__StateMachine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(traj_interfaces__msg__StateMachine));
  bool success = traj_interfaces__msg__StateMachine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
traj_interfaces__msg__StateMachine__destroy(traj_interfaces__msg__StateMachine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    traj_interfaces__msg__StateMachine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
traj_interfaces__msg__StateMachine__Sequence__init(traj_interfaces__msg__StateMachine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traj_interfaces__msg__StateMachine * data = NULL;

  if (size) {
    data = (traj_interfaces__msg__StateMachine *)allocator.zero_allocate(size, sizeof(traj_interfaces__msg__StateMachine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = traj_interfaces__msg__StateMachine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        traj_interfaces__msg__StateMachine__fini(&data[i - 1]);
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
traj_interfaces__msg__StateMachine__Sequence__fini(traj_interfaces__msg__StateMachine__Sequence * array)
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
      traj_interfaces__msg__StateMachine__fini(&array->data[i]);
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

traj_interfaces__msg__StateMachine__Sequence *
traj_interfaces__msg__StateMachine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traj_interfaces__msg__StateMachine__Sequence * array = (traj_interfaces__msg__StateMachine__Sequence *)allocator.allocate(sizeof(traj_interfaces__msg__StateMachine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = traj_interfaces__msg__StateMachine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
traj_interfaces__msg__StateMachine__Sequence__destroy(traj_interfaces__msg__StateMachine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    traj_interfaces__msg__StateMachine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
traj_interfaces__msg__StateMachine__Sequence__are_equal(const traj_interfaces__msg__StateMachine__Sequence * lhs, const traj_interfaces__msg__StateMachine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!traj_interfaces__msg__StateMachine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
traj_interfaces__msg__StateMachine__Sequence__copy(
  const traj_interfaces__msg__StateMachine__Sequence * input,
  traj_interfaces__msg__StateMachine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(traj_interfaces__msg__StateMachine);
    traj_interfaces__msg__StateMachine * data =
      (traj_interfaces__msg__StateMachine *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!traj_interfaces__msg__StateMachine__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          traj_interfaces__msg__StateMachine__fini(&data[i]);
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
    if (!traj_interfaces__msg__StateMachine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
