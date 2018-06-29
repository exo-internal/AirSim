// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MENU_ENTRY__FUNCTIONS_H_
#define VISUALIZATION_MSGS__MSG__MENU_ENTRY__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "visualization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "visualization_msgs/msg/menu_entry__struct.h"

/// Initialize visualization_msgs/MenuEntry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(visualization_msgs__msg__MenuEntry)) before
 * or use visualization_msgs__msg__MenuEntry__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__msg__MenuEntry__init(visualization_msgs__msg__MenuEntry * msg);

/// Finalize visualization_msgs/MenuEntry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__MenuEntry__fini(visualization_msgs__msg__MenuEntry * msg);

/// Create visualization_msgs/MenuEntry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls visualization_msgs__msg__MenuEntry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__msg__MenuEntry *
visualization_msgs__msg__MenuEntry__create();

/// Destroy visualization_msgs/MenuEntry message.
/**
 * It calls visualization_msgs__msg__MenuEntry__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__MenuEntry__destroy(visualization_msgs__msg__MenuEntry * msg);


/// Initialize array of visualization_msgs/MenuEntry messages.
/**
 * It allocates the memory for the number of elements and
 * calls visualization_msgs__msg__MenuEntry__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
bool
visualization_msgs__msg__MenuEntry__Array__init(visualization_msgs__msg__MenuEntry__Array * array, size_t size);

/// Finalize array of visualization_msgs/MenuEntry messages.
/**
 * It calls visualization_msgs__msg__MenuEntry__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__MenuEntry__Array__fini(visualization_msgs__msg__MenuEntry__Array * array);

/// Create array of visualization_msgs/MenuEntry messages.
/**
 * It allocates the memory for the array and
 * calls visualization_msgs__msg__MenuEntry__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
visualization_msgs__msg__MenuEntry__Array *
visualization_msgs__msg__MenuEntry__Array__create(size_t size);

/// Destroy array of visualization_msgs/MenuEntry messages.
/**
 * It calls visualization_msgs__msg__MenuEntry__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_visualization_msgs
void
visualization_msgs__msg__MenuEntry__Array__destroy(visualization_msgs__msg__MenuEntry__Array * array);

#if __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__MENU_ENTRY__FUNCTIONS_H_
