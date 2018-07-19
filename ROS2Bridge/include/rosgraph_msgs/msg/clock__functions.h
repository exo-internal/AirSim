// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef ROSGRAPH_MSGS__MSG__CLOCK__FUNCTIONS_H_
#define ROSGRAPH_MSGS__MSG__CLOCK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rosgraph_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosgraph_msgs/msg/clock__struct.h"

/// Initialize rosgraph_msgs/Clock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(rosgraph_msgs__msg__Clock)) before
 * or use rosgraph_msgs__msg__Clock__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
bool
rosgraph_msgs__msg__Clock__init(rosgraph_msgs__msg__Clock * msg);

/// Finalize rosgraph_msgs/Clock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
void
rosgraph_msgs__msg__Clock__fini(rosgraph_msgs__msg__Clock * msg);

/// Create rosgraph_msgs/Clock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls rosgraph_msgs__msg__Clock__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
rosgraph_msgs__msg__Clock *
rosgraph_msgs__msg__Clock__create();

/// Destroy rosgraph_msgs/Clock message.
/**
 * It calls rosgraph_msgs__msg__Clock__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
void
rosgraph_msgs__msg__Clock__destroy(rosgraph_msgs__msg__Clock * msg);


/// Initialize array of rosgraph_msgs/Clock messages.
/**
 * It allocates the memory for the number of elements and
 * calls rosgraph_msgs__msg__Clock__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
bool
rosgraph_msgs__msg__Clock__Array__init(rosgraph_msgs__msg__Clock__Array * array, size_t size);

/// Finalize array of rosgraph_msgs/Clock messages.
/**
 * It calls rosgraph_msgs__msg__Clock__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
void
rosgraph_msgs__msg__Clock__Array__fini(rosgraph_msgs__msg__Clock__Array * array);

/// Create array of rosgraph_msgs/Clock messages.
/**
 * It allocates the memory for the array and
 * calls rosgraph_msgs__msg__Clock__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
rosgraph_msgs__msg__Clock__Array *
rosgraph_msgs__msg__Clock__Array__create(size_t size);

/// Destroy array of rosgraph_msgs/Clock messages.
/**
 * It calls rosgraph_msgs__msg__Clock__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosgraph_msgs
void
rosgraph_msgs__msg__Clock__Array__destroy(rosgraph_msgs__msg__Clock__Array * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSGRAPH_MSGS__MSG__CLOCK__FUNCTIONS_H_
