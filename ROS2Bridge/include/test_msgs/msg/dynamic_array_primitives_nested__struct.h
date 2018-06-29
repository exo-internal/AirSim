// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__STRUCT_H_
#define TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// dynamic_array_primitive_values
#include "test_msgs/msg/dynamic_array_primitives__struct.h"

/// Struct of message test_msgs/DynamicArrayPrimitivesNested
typedef struct test_msgs__msg__DynamicArrayPrimitivesNested
{
  test_msgs__msg__DynamicArrayPrimitives__Array dynamic_array_primitive_values;
} test_msgs__msg__DynamicArrayPrimitivesNested;

/// Struct for an array of messages
typedef struct test_msgs__msg__DynamicArrayPrimitivesNested__Array
{
  test_msgs__msg__DynamicArrayPrimitivesNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__DynamicArrayPrimitivesNested__Array;

#if __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__STRUCT_H_
