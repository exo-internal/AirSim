// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DYNAMIC_ARRAY_NESTED__STRUCT_H_
#define TEST_MSGS__MSG__DYNAMIC_ARRAY_NESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// primitive_values
#include "test_msgs/msg/primitives__struct.h"

/// Struct of message test_msgs/DynamicArrayNested
typedef struct test_msgs__msg__DynamicArrayNested
{
  test_msgs__msg__Primitives__Array primitive_values;
} test_msgs__msg__DynamicArrayNested;

/// Struct for an array of messages
typedef struct test_msgs__msg__DynamicArrayNested__Array
{
  test_msgs__msg__DynamicArrayNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__DynamicArrayNested__Array;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__DYNAMIC_ARRAY_NESTED__STRUCT_H_
