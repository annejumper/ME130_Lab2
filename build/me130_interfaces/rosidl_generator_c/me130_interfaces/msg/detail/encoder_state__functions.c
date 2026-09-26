// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from me130_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice
#include "me130_interfaces/msg/detail/encoder_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
me130_interfaces__msg__EncoderState__init(me130_interfaces__msg__EncoderState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    me130_interfaces__msg__EncoderState__fini(msg);
    return false;
  }
  // counts
  // counts_per_sec
  return true;
}

void
me130_interfaces__msg__EncoderState__fini(me130_interfaces__msg__EncoderState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // counts
  // counts_per_sec
}

bool
me130_interfaces__msg__EncoderState__are_equal(const me130_interfaces__msg__EncoderState * lhs, const me130_interfaces__msg__EncoderState * rhs)
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
  // counts
  if (lhs->counts != rhs->counts) {
    return false;
  }
  // counts_per_sec
  if (lhs->counts_per_sec != rhs->counts_per_sec) {
    return false;
  }
  return true;
}

bool
me130_interfaces__msg__EncoderState__copy(
  const me130_interfaces__msg__EncoderState * input,
  me130_interfaces__msg__EncoderState * output)
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
  // counts
  output->counts = input->counts;
  // counts_per_sec
  output->counts_per_sec = input->counts_per_sec;
  return true;
}

me130_interfaces__msg__EncoderState *
me130_interfaces__msg__EncoderState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  me130_interfaces__msg__EncoderState * msg = (me130_interfaces__msg__EncoderState *)allocator.allocate(sizeof(me130_interfaces__msg__EncoderState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me130_interfaces__msg__EncoderState));
  bool success = me130_interfaces__msg__EncoderState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
me130_interfaces__msg__EncoderState__destroy(me130_interfaces__msg__EncoderState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    me130_interfaces__msg__EncoderState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
me130_interfaces__msg__EncoderState__Sequence__init(me130_interfaces__msg__EncoderState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  me130_interfaces__msg__EncoderState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(me130_interfaces__msg__EncoderState)) {
      return false;
    }
    data = (me130_interfaces__msg__EncoderState *)allocator.zero_allocate(size, sizeof(me130_interfaces__msg__EncoderState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me130_interfaces__msg__EncoderState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me130_interfaces__msg__EncoderState__fini(&data[i - 1]);
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
me130_interfaces__msg__EncoderState__Sequence__fini(me130_interfaces__msg__EncoderState__Sequence * array)
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
      me130_interfaces__msg__EncoderState__fini(&array->data[i]);
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

me130_interfaces__msg__EncoderState__Sequence *
me130_interfaces__msg__EncoderState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  me130_interfaces__msg__EncoderState__Sequence * array = (me130_interfaces__msg__EncoderState__Sequence *)allocator.allocate(sizeof(me130_interfaces__msg__EncoderState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = me130_interfaces__msg__EncoderState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
me130_interfaces__msg__EncoderState__Sequence__destroy(me130_interfaces__msg__EncoderState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    me130_interfaces__msg__EncoderState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
me130_interfaces__msg__EncoderState__Sequence__are_equal(const me130_interfaces__msg__EncoderState__Sequence * lhs, const me130_interfaces__msg__EncoderState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me130_interfaces__msg__EncoderState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me130_interfaces__msg__EncoderState__Sequence__copy(
  const me130_interfaces__msg__EncoderState__Sequence * input,
  me130_interfaces__msg__EncoderState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(me130_interfaces__msg__EncoderState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(me130_interfaces__msg__EncoderState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    me130_interfaces__msg__EncoderState * data =
      (me130_interfaces__msg__EncoderState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me130_interfaces__msg__EncoderState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          me130_interfaces__msg__EncoderState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me130_interfaces__msg__EncoderState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
