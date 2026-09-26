// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from me130_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/motor_command.h"


#ifndef ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorCommand in the package me130_interfaces.
/**
  * Command into the motor node.
  *
  * u is the PRE-deadband signed duty in [-1, 1]: sign is direction, magnitude is
  * effort. motor_node applies the deadband feed-forward and the motor sign, so
  * every producer speaks the same units and only one node knows the hardware.
  *
  * The remaining fields are test context, carried here so logger_node can write
  * a self-describing CSV without subscribing to each test node individually.
 */
typedef struct me130_interfaces__msg__MotorCommand
{
  std_msgs__msg__Header header;
  double u;
  /// coast | pd | step | sine
  rosidl_runtime_c__String mode;
  /// sine drive only, otherwise 0
  double freq_hz;
  double amplitude;
  /// constant-step drive only, otherwise 0
  double step_duty;
  /// increments once per test segment (one step, or one frequency)
  int32_t segment;
} me130_interfaces__msg__MotorCommand;

// Struct for a sequence of me130_interfaces__msg__MotorCommand.
typedef struct me130_interfaces__msg__MotorCommand__Sequence
{
  me130_interfaces__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} me130_interfaces__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
