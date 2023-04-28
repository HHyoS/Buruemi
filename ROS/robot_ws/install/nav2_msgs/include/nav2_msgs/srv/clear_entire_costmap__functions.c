// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:srv/ClearEntireCostmap.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/clear_entire_costmap__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `request`
#include "std_msgs/msg/empty__functions.h"

bool
nav2_msgs__srv__ClearEntireCostmap_Request__init(nav2_msgs__srv__ClearEntireCostmap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!std_msgs__msg__Empty__init(&msg->request)) {
    nav2_msgs__srv__ClearEntireCostmap_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__srv__ClearEntireCostmap_Request__fini(nav2_msgs__srv__ClearEntireCostmap_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  std_msgs__msg__Empty__fini(&msg->request);
}

nav2_msgs__srv__ClearEntireCostmap_Request *
nav2_msgs__srv__ClearEntireCostmap_Request__create()
{
  nav2_msgs__srv__ClearEntireCostmap_Request * msg = (nav2_msgs__srv__ClearEntireCostmap_Request *)malloc(sizeof(nav2_msgs__srv__ClearEntireCostmap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__ClearEntireCostmap_Request));
  bool success = nav2_msgs__srv__ClearEntireCostmap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__ClearEntireCostmap_Request__destroy(nav2_msgs__srv__ClearEntireCostmap_Request * msg)
{
  if (msg) {
    nav2_msgs__srv__ClearEntireCostmap_Request__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__srv__ClearEntireCostmap_Request__Sequence__init(nav2_msgs__srv__ClearEntireCostmap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__srv__ClearEntireCostmap_Request * data = NULL;
  if (size) {
    data = (nav2_msgs__srv__ClearEntireCostmap_Request *)calloc(size, sizeof(nav2_msgs__srv__ClearEntireCostmap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__ClearEntireCostmap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__ClearEntireCostmap_Request__fini(&data[i - 1]);
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
nav2_msgs__srv__ClearEntireCostmap_Request__Sequence__fini(nav2_msgs__srv__ClearEntireCostmap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__srv__ClearEntireCostmap_Request__fini(&array->data[i]);
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

nav2_msgs__srv__ClearEntireCostmap_Request__Sequence *
nav2_msgs__srv__ClearEntireCostmap_Request__Sequence__create(size_t size)
{
  nav2_msgs__srv__ClearEntireCostmap_Request__Sequence * array = (nav2_msgs__srv__ClearEntireCostmap_Request__Sequence *)malloc(sizeof(nav2_msgs__srv__ClearEntireCostmap_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__ClearEntireCostmap_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__ClearEntireCostmap_Request__Sequence__destroy(nav2_msgs__srv__ClearEntireCostmap_Request__Sequence * array)
{
  if (array) {
    nav2_msgs__srv__ClearEntireCostmap_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `response`
// already included above
// #include "std_msgs/msg/empty__functions.h"

bool
nav2_msgs__srv__ClearEntireCostmap_Response__init(nav2_msgs__srv__ClearEntireCostmap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__init(&msg->response)) {
    nav2_msgs__srv__ClearEntireCostmap_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__srv__ClearEntireCostmap_Response__fini(nav2_msgs__srv__ClearEntireCostmap_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  std_msgs__msg__Empty__fini(&msg->response);
}

nav2_msgs__srv__ClearEntireCostmap_Response *
nav2_msgs__srv__ClearEntireCostmap_Response__create()
{
  nav2_msgs__srv__ClearEntireCostmap_Response * msg = (nav2_msgs__srv__ClearEntireCostmap_Response *)malloc(sizeof(nav2_msgs__srv__ClearEntireCostmap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__ClearEntireCostmap_Response));
  bool success = nav2_msgs__srv__ClearEntireCostmap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__ClearEntireCostmap_Response__destroy(nav2_msgs__srv__ClearEntireCostmap_Response * msg)
{
  if (msg) {
    nav2_msgs__srv__ClearEntireCostmap_Response__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__srv__ClearEntireCostmap_Response__Sequence__init(nav2_msgs__srv__ClearEntireCostmap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__srv__ClearEntireCostmap_Response * data = NULL;
  if (size) {
    data = (nav2_msgs__srv__ClearEntireCostmap_Response *)calloc(size, sizeof(nav2_msgs__srv__ClearEntireCostmap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__ClearEntireCostmap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__ClearEntireCostmap_Response__fini(&data[i - 1]);
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
nav2_msgs__srv__ClearEntireCostmap_Response__Sequence__fini(nav2_msgs__srv__ClearEntireCostmap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__srv__ClearEntireCostmap_Response__fini(&array->data[i]);
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

nav2_msgs__srv__ClearEntireCostmap_Response__Sequence *
nav2_msgs__srv__ClearEntireCostmap_Response__Sequence__create(size_t size)
{
  nav2_msgs__srv__ClearEntireCostmap_Response__Sequence * array = (nav2_msgs__srv__ClearEntireCostmap_Response__Sequence *)malloc(sizeof(nav2_msgs__srv__ClearEntireCostmap_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__ClearEntireCostmap_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__ClearEntireCostmap_Response__Sequence__destroy(nav2_msgs__srv__ClearEntireCostmap_Response__Sequence * array)
{
  if (array) {
    nav2_msgs__srv__ClearEntireCostmap_Response__Sequence__fini(array);
  }
  free(array);
}
