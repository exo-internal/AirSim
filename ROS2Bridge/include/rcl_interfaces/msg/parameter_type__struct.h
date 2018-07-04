// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__PARAMETER_TYPE__STRUCT_H_
#define RCL_INTERFACES__MSG__PARAMETER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// constants defined in the message
// PARAMETER_NOT_SET
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_NOT_SET = 0u
};
// PARAMETER_BOOL
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_BOOL = 1u
};
// PARAMETER_INTEGER
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_INTEGER = 2u
};
// PARAMETER_DOUBLE
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_DOUBLE = 3u
};
// PARAMETER_STRING
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_STRING = 4u
};
// PARAMETER_BYTE_ARRAY
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_BYTE_ARRAY = 5u
};
// PARAMETER_BOOL_ARRAY
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_BOOL_ARRAY = 6u
};
// PARAMETER_INTEGER_ARRAY
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_INTEGER_ARRAY = 7u
};
// PARAMETER_DOUBLE_ARRAY
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_DOUBLE_ARRAY = 8u
};
// PARAMETER_STRING_ARRAY
enum
{
  rcl_interfaces__msg__ParameterType__PARAMETER_STRING_ARRAY = 9u
};

/// Struct of message rcl_interfaces/ParameterType
typedef struct rcl_interfaces__msg__ParameterType
{
  bool _dummy;
} rcl_interfaces__msg__ParameterType;

/// Struct for an array of messages
typedef struct rcl_interfaces__msg__ParameterType__Array
{
  rcl_interfaces__msg__ParameterType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__msg__ParameterType__Array;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__PARAMETER_TYPE__STRUCT_H_
