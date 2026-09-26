// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from me130_interfaces:msg/PendulumAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/pendulum_angle.h"


#ifndef ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__STRUCT_H_
#define ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__STRUCT_H_

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

/// Struct defined in msg/PendulumAngle in the package me130_interfaces.
/**
  * Pendulum angle from the IMU node.
  * theta is measured from the zero set by the imu_node "zero" service:
  * hanging straight down for the characterization tests, upright for balancing.
 */
typedef struct me130_interfaces__msg__PendulumAngle
{
  std_msgs__msg__Header header;
  double theta_rad;
  double theta_dot_rad_s;
} me130_interfaces__msg__PendulumAngle;

// Struct for a sequence of me130_interfaces__msg__PendulumAngle.
typedef struct me130_interfaces__msg__PendulumAngle__Sequence
{
  me130_interfaces__msg__PendulumAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} me130_interfaces__msg__PendulumAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__STRUCT_H_
