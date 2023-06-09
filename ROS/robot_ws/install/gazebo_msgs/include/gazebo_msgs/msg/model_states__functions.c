// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/model_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/twist__functions.h"

bool
gazebo_msgs__msg__ModelStates__init(gazebo_msgs__msg__ModelStates * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__Sequence__init(&msg->name, 0)) {
    gazebo_msgs__msg__ModelStates__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->pose, 0)) {
    gazebo_msgs__msg__ModelStates__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->twist, 0)) {
    gazebo_msgs__msg__ModelStates__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ModelStates__fini(gazebo_msgs__msg__ModelStates * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__Sequence__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__Sequence__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__Sequence__fini(&msg->twist);
}

gazebo_msgs__msg__ModelStates *
gazebo_msgs__msg__ModelStates__create()
{
  gazebo_msgs__msg__ModelStates * msg = (gazebo_msgs__msg__ModelStates *)malloc(sizeof(gazebo_msgs__msg__ModelStates));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ModelStates));
  bool success = gazebo_msgs__msg__ModelStates__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ModelStates__destroy(gazebo_msgs__msg__ModelStates * msg)
{
  if (msg) {
    gazebo_msgs__msg__ModelStates__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__msg__ModelStates__Sequence__init(gazebo_msgs__msg__ModelStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__msg__ModelStates * data = NULL;
  if (size) {
    data = (gazebo_msgs__msg__ModelStates *)calloc(size, sizeof(gazebo_msgs__msg__ModelStates));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ModelStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ModelStates__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gazebo_msgs__msg__ModelStates__Sequence__fini(gazebo_msgs__msg__ModelStates__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__msg__ModelStates__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gazebo_msgs__msg__ModelStates__Sequence *
gazebo_msgs__msg__ModelStates__Sequence__create(size_t size)
{
  gazebo_msgs__msg__ModelStates__Sequence * array = (gazebo_msgs__msg__ModelStates__Sequence *)malloc(sizeof(gazebo_msgs__msg__ModelStates__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ModelStates__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ModelStates__Sequence__destroy(gazebo_msgs__msg__ModelStates__Sequence * array)
{
  if (array) {
    gazebo_msgs__msg__ModelStates__Sequence__fini(array);
  }
  free(array);
}
