// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/SetPhysicsProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/set_physics_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `gravity`
#include "geometry_msgs/msg/vector3__functions.h"
// Member `ode_config`
#include "gazebo_msgs/msg/ode_physics__functions.h"

bool
gazebo_msgs__srv__SetPhysicsProperties_Request__init(gazebo_msgs__srv__SetPhysicsProperties_Request * msg)
{
  if (!msg) {
    return false;
  }
  // time_step
  // max_update_rate
  // gravity
  if (!geometry_msgs__msg__Vector3__init(&msg->gravity)) {
    gazebo_msgs__srv__SetPhysicsProperties_Request__fini(msg);
    return false;
  }
  // ode_config
  if (!gazebo_msgs__msg__ODEPhysics__init(&msg->ode_config)) {
    gazebo_msgs__srv__SetPhysicsProperties_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetPhysicsProperties_Request__fini(gazebo_msgs__srv__SetPhysicsProperties_Request * msg)
{
  if (!msg) {
    return;
  }
  // time_step
  // max_update_rate
  // gravity
  geometry_msgs__msg__Vector3__fini(&msg->gravity);
  // ode_config
  gazebo_msgs__msg__ODEPhysics__fini(&msg->ode_config);
}

gazebo_msgs__srv__SetPhysicsProperties_Request *
gazebo_msgs__srv__SetPhysicsProperties_Request__create()
{
  gazebo_msgs__srv__SetPhysicsProperties_Request * msg = (gazebo_msgs__srv__SetPhysicsProperties_Request *)malloc(sizeof(gazebo_msgs__srv__SetPhysicsProperties_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetPhysicsProperties_Request));
  bool success = gazebo_msgs__srv__SetPhysicsProperties_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetPhysicsProperties_Request__destroy(gazebo_msgs__srv__SetPhysicsProperties_Request * msg)
{
  if (msg) {
    gazebo_msgs__srv__SetPhysicsProperties_Request__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence__init(gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SetPhysicsProperties_Request * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SetPhysicsProperties_Request *)calloc(size, sizeof(gazebo_msgs__srv__SetPhysicsProperties_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetPhysicsProperties_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetPhysicsProperties_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence__fini(gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetPhysicsProperties_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence *
gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence * array = (gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence *)malloc(sizeof(gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence__destroy(gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status_message`
#include "rosidl_generator_c/string_functions.h"

bool
gazebo_msgs__srv__SetPhysicsProperties_Response__init(gazebo_msgs__srv__SetPhysicsProperties_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  if (!rosidl_generator_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__SetPhysicsProperties_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__SetPhysicsProperties_Response__fini(gazebo_msgs__srv__SetPhysicsProperties_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_generator_c__String__fini(&msg->status_message);
}

gazebo_msgs__srv__SetPhysicsProperties_Response *
gazebo_msgs__srv__SetPhysicsProperties_Response__create()
{
  gazebo_msgs__srv__SetPhysicsProperties_Response * msg = (gazebo_msgs__srv__SetPhysicsProperties_Response *)malloc(sizeof(gazebo_msgs__srv__SetPhysicsProperties_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__SetPhysicsProperties_Response));
  bool success = gazebo_msgs__srv__SetPhysicsProperties_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__SetPhysicsProperties_Response__destroy(gazebo_msgs__srv__SetPhysicsProperties_Response * msg)
{
  if (msg) {
    gazebo_msgs__srv__SetPhysicsProperties_Response__fini(msg);
  }
  free(msg);
}


bool
gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence__init(gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  gazebo_msgs__srv__SetPhysicsProperties_Response * data = NULL;
  if (size) {
    data = (gazebo_msgs__srv__SetPhysicsProperties_Response *)calloc(size, sizeof(gazebo_msgs__srv__SetPhysicsProperties_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__SetPhysicsProperties_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__SetPhysicsProperties_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence__fini(gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gazebo_msgs__srv__SetPhysicsProperties_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence *
gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence__create(size_t size)
{
  gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence * array = (gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence *)malloc(sizeof(gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence__destroy(gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence * array)
{
  if (array) {
    gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence__fini(array);
  }
  free(array);
}
