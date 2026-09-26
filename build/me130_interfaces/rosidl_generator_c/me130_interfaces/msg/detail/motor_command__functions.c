// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from me130_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#include "me130_interfaces/msg/detail/motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
me130_interfaces__msg__MotorCommand__init(me130_interfaces__msg__MotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    me130_interfaces__msg__MotorCommand__fini(msg);
    return false;
  }
  // u
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    me130_interfaces__msg__MotorCommand__fini(msg);
    return false;
  }
  // freq_hz
  // amplitude
  // step_duty
  // segment
  return true;
}

void
me130_interfaces__msg__MotorCommand__fini(me130_interfaces__msg__MotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // u
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // freq_hz
  // amplitude
  // step_duty
  // segment
}

bool
me130_interfaces__msg__MotorCommand__are_equal(const me130_interfaces__msg__MotorCommand * lhs, const me130_interfaces__msg__MotorCommand * rhs)
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
  // u
  if (lhs->u != rhs->u) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // freq_hz
  if (lhs->freq_hz != rhs->freq_hz) {
    return false;
  }
  // amplitude
  if (lhs->amplitude != rhs->amplitude) {
    return false;
  }
  // step_duty
  if (lhs->step_duty != rhs->step_duty) {
    return false;
  }
  // segment
  if (lhs->segment != rhs->segment) {
    return false;
  }
  return true;
}

bool
me130_interfaces__msg__MotorCommand__copy(
  const me130_interfaces__msg__MotorCommand * input,
  me130_interfaces__msg__MotorCommand * output)
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
  // u
  output->u = input->u;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // freq_hz
  output->freq_hz = input->freq_hz;
  // amplitude
  output->amplitude = input->amplitude;
  // step_duty
  output->step_duty = input->step_duty;
  // segment
  output->segment = input->segment;
  return true;
}

me130_interfaces__msg__MotorCommand *
me130_interfaces__msg__MotorCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  me130_interfaces__msg__MotorCommand * msg = (me130_interfaces__msg__MotorCommand *)allocator.allocate(sizeof(me130_interfaces__msg__MotorCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(me130_interfaces__msg__MotorCommand));
  bool success = me130_interfaces__msg__MotorCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
me130_interfaces__msg__MotorCommand__destroy(me130_interfaces__msg__MotorCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    me130_interfaces__msg__MotorCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
me130_interfaces__msg__MotorCommand__Sequence__init(me130_interfaces__msg__MotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  me130_interfaces__msg__MotorCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(me130_interfaces__msg__MotorCommand)) {
      return false;
    }
    data = (me130_interfaces__msg__MotorCommand *)allocator.zero_allocate(size, sizeof(me130_interfaces__msg__MotorCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = me130_interfaces__msg__MotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        me130_interfaces__msg__MotorCommand__fini(&data[i - 1]);
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
me130_interfaces__msg__MotorCommand__Sequence__fini(me130_interfaces__msg__MotorCommand__Sequence * array)
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
      me130_interfaces__msg__MotorCommand__fini(&array->data[i]);
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

me130_interfaces__msg__MotorCommand__Sequence *
me130_interfaces__msg__MotorCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  me130_interfaces__msg__MotorCommand__Sequence * array = (me130_interfaces__msg__MotorCommand__Sequence *)allocator.allocate(sizeof(me130_interfaces__msg__MotorCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = me130_interfaces__msg__MotorCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
me130_interfaces__msg__MotorCommand__Sequence__destroy(me130_interfaces__msg__MotorCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    me130_interfaces__msg__MotorCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
me130_interfaces__msg__MotorCommand__Sequence__are_equal(const me130_interfaces__msg__MotorCommand__Sequence * lhs, const me130_interfaces__msg__MotorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!me130_interfaces__msg__MotorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
me130_interfaces__msg__MotorCommand__Sequence__copy(
  const me130_interfaces__msg__MotorCommand__Sequence * input,
  me130_interfaces__msg__MotorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(me130_interfaces__msg__MotorCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(me130_interfaces__msg__MotorCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    me130_interfaces__msg__MotorCommand * data =
      (me130_interfaces__msg__MotorCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!me130_interfaces__msg__MotorCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          me130_interfaces__msg__MotorCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!me130_interfaces__msg__MotorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
