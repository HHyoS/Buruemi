// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__PATH__STRUCT_H_
#define NAV2_MSGS__MSG__PATH__STRUCT_H_

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
#include "std_msgs/msg/header__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/pose__struct.h"

// Struct defined in msg/Path in the package nav2_msgs.
typedef struct nav2_msgs__msg__Path
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose__Sequence poses;
} nav2_msgs__msg__Path;

// Struct for a sequence of nav2_msgs__msg__Path.
typedef struct nav2_msgs__msg__Path__Sequence
{
  nav2_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__MSG__PATH__STRUCT_H_
