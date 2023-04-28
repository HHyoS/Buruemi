// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__LOCAL_PLAN_EVALUATION__STRUCT_H_
#define DWB_MSGS__MSG__LOCAL_PLAN_EVALUATION__STRUCT_H_

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
// Member 'twists'
#include "dwb_msgs/msg/trajectory_score__struct.h"

// Struct defined in msg/LocalPlanEvaluation in the package dwb_msgs.
typedef struct dwb_msgs__msg__LocalPlanEvaluation
{
  std_msgs__msg__Header header;
  dwb_msgs__msg__TrajectoryScore__Sequence twists;
  uint16_t best_index;
  uint16_t worst_index;
} dwb_msgs__msg__LocalPlanEvaluation;

// Struct for a sequence of dwb_msgs__msg__LocalPlanEvaluation.
typedef struct dwb_msgs__msg__LocalPlanEvaluation__Sequence
{
  dwb_msgs__msg__LocalPlanEvaluation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__msg__LocalPlanEvaluation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__LOCAL_PLAN_EVALUATION__STRUCT_H_
