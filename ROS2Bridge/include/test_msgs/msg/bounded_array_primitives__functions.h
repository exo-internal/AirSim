// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES__FUNCTIONS_H_
#define TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "test_msgs/msg/bounded_array_primitives__struct.h"

/// Initialize test_msgs/BoundedArrayPrimitives message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(test_msgs__msg__BoundedArrayPrimitives)) before
 * or use test_msgs__msg__BoundedArrayPrimitives__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__BoundedArrayPrimitives__init(test_msgs__msg__BoundedArrayPrimitives * msg);

/// Finalize test_msgs/BoundedArrayPrimitives message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__BoundedArrayPrimitives__fini(test_msgs__msg__BoundedArrayPrimitives * msg);

/// Create test_msgs/BoundedArrayPrimitives message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls test_msgs__msg__BoundedArrayPrimitives__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__msg__BoundedArrayPrimitives *
test_msgs__msg__BoundedArrayPrimitives__create();

/// Destroy test_msgs/BoundedArrayPrimitives message.
/**
 * It calls test_msgs__msg__BoundedArrayPrimitives__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__BoundedArrayPrimitives__destroy(test_msgs__msg__BoundedArrayPrimitives * msg);


/// Initialize array of test_msgs/BoundedArrayPrimitives messages.
/**
 * It allocates the memory for the number of elements and
 * calls test_msgs__msg__BoundedArrayPrimitives__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__BoundedArrayPrimitives__Array__init(test_msgs__msg__BoundedArrayPrimitives__Array * array, size_t size);

/// Finalize array of test_msgs/BoundedArrayPrimitives messages.
/**
 * It calls test_msgs__msg__BoundedArrayPrimitives__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__BoundedArrayPrimitives__Array__fini(test_msgs__msg__BoundedArrayPrimitives__Array * array);

/// Create array of test_msgs/BoundedArrayPrimitives messages.
/**
 * It allocates the memory for the array and
 * calls test_msgs__msg__BoundedArrayPrimitives__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__msg__BoundedArrayPrimitives__Array *
test_msgs__msg__BoundedArrayPrimitives__Array__create(size_t size);

/// Destroy array of test_msgs/BoundedArrayPrimitives messages.
/**
 * It calls test_msgs__msg__BoundedArrayPrimitives__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__BoundedArrayPrimitives__Array__destroy(test_msgs__msg__BoundedArrayPrimitives__Array * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__BOUNDED_ARRAY_PRIMITIVES__FUNCTIONS_H_
