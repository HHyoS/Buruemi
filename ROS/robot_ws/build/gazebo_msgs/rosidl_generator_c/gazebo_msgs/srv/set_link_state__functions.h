// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetLinkState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__SET_LINK_STATE__FUNCTIONS_H_
#define GAZEBO_MSGS__SRV__SET_LINK_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "gazebo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gazebo_msgs/srv/set_link_state__struct.h"

/// Initialize srv/SetLinkState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__srv__SetLinkState_Request
 * )) before or use
 * gazebo_msgs__srv__SetLinkState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__SetLinkState_Request__init(gazebo_msgs__srv__SetLinkState_Request * msg);

/// Finalize srv/SetLinkState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Request__fini(gazebo_msgs__srv__SetLinkState_Request * msg);

/// Create srv/SetLinkState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__srv__SetLinkState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__SetLinkState_Request *
gazebo_msgs__srv__SetLinkState_Request__create();

/// Destroy srv/SetLinkState message.
/**
 * It calls
 * gazebo_msgs__srv__SetLinkState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Request__destroy(gazebo_msgs__srv__SetLinkState_Request * msg);


/// Initialize array of srv/SetLinkState messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__srv__SetLinkState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__SetLinkState_Request__Sequence__init(gazebo_msgs__srv__SetLinkState_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLinkState messages.
/**
 * It calls
 * gazebo_msgs__srv__SetLinkState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Request__Sequence__fini(gazebo_msgs__srv__SetLinkState_Request__Sequence * array);

/// Create array of srv/SetLinkState messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__srv__SetLinkState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__SetLinkState_Request__Sequence *
gazebo_msgs__srv__SetLinkState_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLinkState messages.
/**
 * It calls
 * gazebo_msgs__srv__SetLinkState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Request__Sequence__destroy(gazebo_msgs__srv__SetLinkState_Request__Sequence * array);

/// Initialize srv/SetLinkState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__srv__SetLinkState_Response
 * )) before or use
 * gazebo_msgs__srv__SetLinkState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__SetLinkState_Response__init(gazebo_msgs__srv__SetLinkState_Response * msg);

/// Finalize srv/SetLinkState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Response__fini(gazebo_msgs__srv__SetLinkState_Response * msg);

/// Create srv/SetLinkState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__srv__SetLinkState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__SetLinkState_Response *
gazebo_msgs__srv__SetLinkState_Response__create();

/// Destroy srv/SetLinkState message.
/**
 * It calls
 * gazebo_msgs__srv__SetLinkState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Response__destroy(gazebo_msgs__srv__SetLinkState_Response * msg);


/// Initialize array of srv/SetLinkState messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__srv__SetLinkState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__SetLinkState_Response__Sequence__init(gazebo_msgs__srv__SetLinkState_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLinkState messages.
/**
 * It calls
 * gazebo_msgs__srv__SetLinkState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Response__Sequence__fini(gazebo_msgs__srv__SetLinkState_Response__Sequence * array);

/// Create array of srv/SetLinkState messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__srv__SetLinkState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__SetLinkState_Response__Sequence *
gazebo_msgs__srv__SetLinkState_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLinkState messages.
/**
 * It calls
 * gazebo_msgs__srv__SetLinkState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__SetLinkState_Response__Sequence__destroy(gazebo_msgs__srv__SetLinkState_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__SET_LINK_STATE__FUNCTIONS_H_
