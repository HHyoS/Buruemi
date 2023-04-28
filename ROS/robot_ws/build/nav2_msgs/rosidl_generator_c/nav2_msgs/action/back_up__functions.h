// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/BackUp.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__BACK_UP__FUNCTIONS_H_
#define NAV2_MSGS__ACTION__BACK_UP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nav2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nav2_msgs/action/back_up__struct.h"

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_Goal
 * )) before or use
 * nav2_msgs__action__BackUp_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_Goal__init(nav2_msgs__action__BackUp_Goal * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Goal__fini(nav2_msgs__action__BackUp_Goal * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_Goal *
nav2_msgs__action__BackUp_Goal__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Goal__destroy(nav2_msgs__action__BackUp_Goal * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_Goal__Sequence__init(nav2_msgs__action__BackUp_Goal__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Goal__Sequence__fini(nav2_msgs__action__BackUp_Goal__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_Goal__Sequence *
nav2_msgs__action__BackUp_Goal__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Goal__Sequence__destroy(nav2_msgs__action__BackUp_Goal__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_Result
 * )) before or use
 * nav2_msgs__action__BackUp_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_Result__init(nav2_msgs__action__BackUp_Result * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Result__fini(nav2_msgs__action__BackUp_Result * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_Result *
nav2_msgs__action__BackUp_Result__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Result__destroy(nav2_msgs__action__BackUp_Result * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_Result__Sequence__init(nav2_msgs__action__BackUp_Result__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Result__Sequence__fini(nav2_msgs__action__BackUp_Result__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_Result__Sequence *
nav2_msgs__action__BackUp_Result__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Result__Sequence__destroy(nav2_msgs__action__BackUp_Result__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_Feedback
 * )) before or use
 * nav2_msgs__action__BackUp_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_Feedback__init(nav2_msgs__action__BackUp_Feedback * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Feedback__fini(nav2_msgs__action__BackUp_Feedback * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_Feedback *
nav2_msgs__action__BackUp_Feedback__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Feedback__destroy(nav2_msgs__action__BackUp_Feedback * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_Feedback__Sequence__init(nav2_msgs__action__BackUp_Feedback__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Feedback__Sequence__fini(nav2_msgs__action__BackUp_Feedback__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_Feedback__Sequence *
nav2_msgs__action__BackUp_Feedback__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_Feedback__Sequence__destroy(nav2_msgs__action__BackUp_Feedback__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_SendGoal_Request
 * )) before or use
 * nav2_msgs__action__BackUp_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_SendGoal_Request__init(nav2_msgs__action__BackUp_SendGoal_Request * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Request__fini(nav2_msgs__action__BackUp_SendGoal_Request * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_SendGoal_Request *
nav2_msgs__action__BackUp_SendGoal_Request__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Request__destroy(nav2_msgs__action__BackUp_SendGoal_Request * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_SendGoal_Request__Sequence__init(nav2_msgs__action__BackUp_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Request__Sequence__fini(nav2_msgs__action__BackUp_SendGoal_Request__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_SendGoal_Request__Sequence *
nav2_msgs__action__BackUp_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Request__Sequence__destroy(nav2_msgs__action__BackUp_SendGoal_Request__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_SendGoal_Response
 * )) before or use
 * nav2_msgs__action__BackUp_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_SendGoal_Response__init(nav2_msgs__action__BackUp_SendGoal_Response * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Response__fini(nav2_msgs__action__BackUp_SendGoal_Response * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_SendGoal_Response *
nav2_msgs__action__BackUp_SendGoal_Response__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Response__destroy(nav2_msgs__action__BackUp_SendGoal_Response * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_SendGoal_Response__Sequence__init(nav2_msgs__action__BackUp_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Response__Sequence__fini(nav2_msgs__action__BackUp_SendGoal_Response__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_SendGoal_Response__Sequence *
nav2_msgs__action__BackUp_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_SendGoal_Response__Sequence__destroy(nav2_msgs__action__BackUp_SendGoal_Response__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_GetResult_Request
 * )) before or use
 * nav2_msgs__action__BackUp_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_GetResult_Request__init(nav2_msgs__action__BackUp_GetResult_Request * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Request__fini(nav2_msgs__action__BackUp_GetResult_Request * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_GetResult_Request *
nav2_msgs__action__BackUp_GetResult_Request__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Request__destroy(nav2_msgs__action__BackUp_GetResult_Request * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_GetResult_Request__Sequence__init(nav2_msgs__action__BackUp_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Request__Sequence__fini(nav2_msgs__action__BackUp_GetResult_Request__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_GetResult_Request__Sequence *
nav2_msgs__action__BackUp_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Request__Sequence__destroy(nav2_msgs__action__BackUp_GetResult_Request__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_GetResult_Response
 * )) before or use
 * nav2_msgs__action__BackUp_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_GetResult_Response__init(nav2_msgs__action__BackUp_GetResult_Response * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Response__fini(nav2_msgs__action__BackUp_GetResult_Response * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_GetResult_Response *
nav2_msgs__action__BackUp_GetResult_Response__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Response__destroy(nav2_msgs__action__BackUp_GetResult_Response * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_GetResult_Response__Sequence__init(nav2_msgs__action__BackUp_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Response__Sequence__fini(nav2_msgs__action__BackUp_GetResult_Response__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_GetResult_Response__Sequence *
nav2_msgs__action__BackUp_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_GetResult_Response__Sequence__destroy(nav2_msgs__action__BackUp_GetResult_Response__Sequence * array);

/// Initialize action/BackUp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav2_msgs__action__BackUp_FeedbackMessage
 * )) before or use
 * nav2_msgs__action__BackUp_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_FeedbackMessage__init(nav2_msgs__action__BackUp_FeedbackMessage * msg);

/// Finalize action/BackUp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_FeedbackMessage__fini(nav2_msgs__action__BackUp_FeedbackMessage * msg);

/// Create action/BackUp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav2_msgs__action__BackUp_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_FeedbackMessage *
nav2_msgs__action__BackUp_FeedbackMessage__create();

/// Destroy action/BackUp message.
/**
 * It calls
 * nav2_msgs__action__BackUp_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_FeedbackMessage__destroy(nav2_msgs__action__BackUp_FeedbackMessage * msg);


/// Initialize array of action/BackUp messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav2_msgs__action__BackUp_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
bool
nav2_msgs__action__BackUp_FeedbackMessage__Sequence__init(nav2_msgs__action__BackUp_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_FeedbackMessage__Sequence__fini(nav2_msgs__action__BackUp_FeedbackMessage__Sequence * array);

/// Create array of action/BackUp messages.
/**
 * It allocates the memory for the array and calls
 * nav2_msgs__action__BackUp_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
nav2_msgs__action__BackUp_FeedbackMessage__Sequence *
nav2_msgs__action__BackUp_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/BackUp messages.
/**
 * It calls
 * nav2_msgs__action__BackUp_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav2_msgs
void
nav2_msgs__action__BackUp_FeedbackMessage__Sequence__destroy(nav2_msgs__action__BackUp_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__BACK_UP__FUNCTIONS_H_