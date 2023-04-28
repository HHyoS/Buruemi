// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__POSE2_D_STAMPED__FUNCTIONS_H_
#define NAV_2D_MSGS__MSG__POSE2_D_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nav_2d_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nav_2d_msgs/msg/pose2_d_stamped__struct.h"

/// Initialize msg/Pose2DStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_2d_msgs__msg__Pose2DStamped
 * )) before or use
 * nav_2d_msgs__msg__Pose2DStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Pose2DStamped__init(nav_2d_msgs__msg__Pose2DStamped * msg);

/// Finalize msg/Pose2DStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Pose2DStamped__fini(nav_2d_msgs__msg__Pose2DStamped * msg);

/// Create msg/Pose2DStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_2d_msgs__msg__Pose2DStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
nav_2d_msgs__msg__Pose2DStamped *
nav_2d_msgs__msg__Pose2DStamped__create();

/// Destroy msg/Pose2DStamped message.
/**
 * It calls
 * nav_2d_msgs__msg__Pose2DStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Pose2DStamped__destroy(nav_2d_msgs__msg__Pose2DStamped * msg);


/// Initialize array of msg/Pose2DStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_2d_msgs__msg__Pose2DStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
bool
nav_2d_msgs__msg__Pose2DStamped__Sequence__init(nav_2d_msgs__msg__Pose2DStamped__Sequence * array, size_t size);

/// Finalize array of msg/Pose2DStamped messages.
/**
 * It calls
 * nav_2d_msgs__msg__Pose2DStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Pose2DStamped__Sequence__fini(nav_2d_msgs__msg__Pose2DStamped__Sequence * array);

/// Create array of msg/Pose2DStamped messages.
/**
 * It allocates the memory for the array and calls
 * nav_2d_msgs__msg__Pose2DStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
nav_2d_msgs__msg__Pose2DStamped__Sequence *
nav_2d_msgs__msg__Pose2DStamped__Sequence__create(size_t size);

/// Destroy array of msg/Pose2DStamped messages.
/**
 * It calls
 * nav_2d_msgs__msg__Pose2DStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_2d_msgs
void
nav_2d_msgs__msg__Pose2DStamped__Sequence__destroy(nav_2d_msgs__msg__Pose2DStamped__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NAV_2D_MSGS__MSG__POSE2_D_STAMPED__FUNCTIONS_H_
