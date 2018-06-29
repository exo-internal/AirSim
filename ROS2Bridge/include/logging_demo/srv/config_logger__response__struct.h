// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__STRUCT_H_
#define LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message logging_demo/ConfigLogger_Response
typedef struct logging_demo__srv__ConfigLogger_Response
{
  bool success;
} logging_demo__srv__ConfigLogger_Response;

/// Struct for an array of messages
typedef struct logging_demo__srv__ConfigLogger_Response__Array
{
  logging_demo__srv__ConfigLogger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} logging_demo__srv__ConfigLogger_Response__Array;

#if __cplusplus
}
#endif

#endif  // LOGGING_DEMO__SRV__CONFIG_LOGGER__RESPONSE__STRUCT_H_
