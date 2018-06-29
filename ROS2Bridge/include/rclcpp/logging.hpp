// generated from rclcpp/resource/logging.hpp.em

// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCLCPP__LOGGING_HPP_
#define RCLCPP__LOGGING_HPP_

#include <type_traits>

#include "rclcpp/logger.hpp"
#include "rcutils/logging_macros.h"

// These are used for compiling out logging macros lower than a minimum severity.
#define RCLCPP_LOG_MIN_SEVERITY_DEBUG 0
#define RCLCPP_LOG_MIN_SEVERITY_INFO 1
#define RCLCPP_LOG_MIN_SEVERITY_WARN 2
#define RCLCPP_LOG_MIN_SEVERITY_ERROR 3
#define RCLCPP_LOG_MIN_SEVERITY_FATAL 4
#define RCLCPP_LOG_MIN_SEVERITY_NONE 5

/**
 * \def RCLCPP_LOG_MIN_SEVERITY
 * Define RCLCPP_LOG_MIN_SEVERITY=RCLCPP_LOG_MIN_SEVERITY_[DEBUG|INFO|WARN|ERROR|FATAL]
 * in your build options to compile out anything below that severity.
 * Use RCLCPP_LOG_MIN_SEVERITY_NONE to compile out all macros.
 */
#ifndef RCLCPP_LOG_MIN_SEVERITY
#define RCLCPP_LOG_MIN_SEVERITY RCLCPP_LOG_MIN_SEVERITY_DEBUG
#endif

/** @name Logging macros for severity DEBUG.
 */
///@{
#if (RCLCPP_LOG_MIN_SEVERITY > RCLCPP_LOG_MIN_SEVERITY_DEBUG)
// empty logging macros for severity DEBUG when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_DEBUG(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_DEBUG_ONCE(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_DEBUG_EXPRESSION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_DEBUG_FUNCTION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_DEBUG_SKIPFIRST(...)

#else
/**
 * \def RCLCPP_DEBUG
 * Log a message with severity DEBUG.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_DEBUG(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_DEBUG_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_DEBUG_ONCE
 * Log a message with severity DEBUG with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_DEBUG_ONCE(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_DEBUG_ONCE_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_DEBUG_EXPRESSION
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param logger The `rclcpp::Logger` to use
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_DEBUG_EXPRESSION(logger, expression, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_DEBUG_EXPRESSION_NAMED( \
    expression, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_DEBUG_FUNCTION
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param logger The `rclcpp::Logger` to use
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_DEBUG_FUNCTION(logger, function, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_DEBUG_FUNCTION_NAMED( \
    function, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_DEBUG_SKIPFIRST
 * Log a message with severity DEBUG with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_DEBUG_SKIPFIRST(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_DEBUG_SKIPFIRST_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

#endif
///@}

/** @name Logging macros for severity INFO.
 */
///@{
#if (RCLCPP_LOG_MIN_SEVERITY > RCLCPP_LOG_MIN_SEVERITY_INFO)
// empty logging macros for severity INFO when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_INFO(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_INFO_ONCE(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_INFO_EXPRESSION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_INFO_FUNCTION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_INFO_SKIPFIRST(...)

#else
/**
 * \def RCLCPP_INFO
 * Log a message with severity INFO.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_INFO(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_INFO_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_INFO_ONCE
 * Log a message with severity INFO with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_INFO_ONCE(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_INFO_ONCE_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_INFO_EXPRESSION
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param logger The `rclcpp::Logger` to use
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_INFO_EXPRESSION(logger, expression, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_INFO_EXPRESSION_NAMED( \
    expression, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_INFO_FUNCTION
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param logger The `rclcpp::Logger` to use
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_INFO_FUNCTION(logger, function, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_INFO_FUNCTION_NAMED( \
    function, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_INFO_SKIPFIRST
 * Log a message with severity INFO with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_INFO_SKIPFIRST(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_INFO_SKIPFIRST_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

#endif
///@}

/** @name Logging macros for severity WARN.
 */
///@{
#if (RCLCPP_LOG_MIN_SEVERITY > RCLCPP_LOG_MIN_SEVERITY_WARN)
// empty logging macros for severity WARN when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_WARN(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_WARN_ONCE(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_WARN_EXPRESSION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_WARN_FUNCTION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_WARN_SKIPFIRST(...)

#else
/**
 * \def RCLCPP_WARN
 * Log a message with severity WARN.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_WARN(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_WARN_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_WARN_ONCE
 * Log a message with severity WARN with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_WARN_ONCE(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_WARN_ONCE_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_WARN_EXPRESSION
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param logger The `rclcpp::Logger` to use
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_WARN_EXPRESSION(logger, expression, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_WARN_EXPRESSION_NAMED( \
    expression, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_WARN_FUNCTION
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param logger The `rclcpp::Logger` to use
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_WARN_FUNCTION(logger, function, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_WARN_FUNCTION_NAMED( \
    function, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_WARN_SKIPFIRST
 * Log a message with severity WARN with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_WARN_SKIPFIRST(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_WARN_SKIPFIRST_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

#endif
///@}

/** @name Logging macros for severity ERROR.
 */
///@{
#if (RCLCPP_LOG_MIN_SEVERITY > RCLCPP_LOG_MIN_SEVERITY_ERROR)
// empty logging macros for severity ERROR when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_ERROR(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_ERROR_ONCE(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_ERROR_EXPRESSION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_ERROR_FUNCTION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_ERROR_SKIPFIRST(...)

#else
/**
 * \def RCLCPP_ERROR
 * Log a message with severity ERROR.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_ERROR(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_ERROR_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_ERROR_ONCE
 * Log a message with severity ERROR with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_ERROR_ONCE(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_ERROR_ONCE_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_ERROR_EXPRESSION
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param logger The `rclcpp::Logger` to use
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_ERROR_EXPRESSION(logger, expression, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_ERROR_EXPRESSION_NAMED( \
    expression, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_ERROR_FUNCTION
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param logger The `rclcpp::Logger` to use
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_ERROR_FUNCTION(logger, function, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_ERROR_FUNCTION_NAMED( \
    function, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_ERROR_SKIPFIRST
 * Log a message with severity ERROR with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_ERROR_SKIPFIRST(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_ERROR_SKIPFIRST_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

#endif
///@}

/** @name Logging macros for severity FATAL.
 */
///@{
#if (RCLCPP_LOG_MIN_SEVERITY > RCLCPP_LOG_MIN_SEVERITY_FATAL)
// empty logging macros for severity FATAL when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_FATAL(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_FATAL_ONCE(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_FATAL_EXPRESSION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_FATAL_FUNCTION(...)
/// Empty logging macro due to the preprocessor definition of RCLCPP_LOG_MIN_SEVERITY.
#define RCLCPP_FATAL_SKIPFIRST(...)

#else
/**
 * \def RCLCPP_FATAL
 * Log a message with severity FATAL.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_FATAL(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_FATAL_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_FATAL_ONCE
 * Log a message with severity FATAL with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_FATAL_ONCE(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_FATAL_ONCE_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_FATAL_EXPRESSION
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param logger The `rclcpp::Logger` to use
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_FATAL_EXPRESSION(logger, expression, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_FATAL_EXPRESSION_NAMED( \
    expression, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_FATAL_FUNCTION
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param logger The `rclcpp::Logger` to use
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_FATAL_FUNCTION(logger, function, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_FATAL_FUNCTION_NAMED( \
    function, \
    logger.get_name(), \
    __VA_ARGS__)

/**
 * \def RCLCPP_FATAL_SKIPFIRST
 * Log a message with severity FATAL with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param logger The `rclcpp::Logger` to use
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCLCPP_FATAL_SKIPFIRST(logger, ...) \
  static_assert( \
    ::std::is_same<std::remove_reference<decltype(logger)>::type, ::rclcpp::Logger>::value, \
    "First argument to logging macros must be an rclcpp::Logger"); \
  RCUTILS_LOG_FATAL_SKIPFIRST_NAMED( \
    logger.get_name(), \
    __VA_ARGS__)

#endif
///@}


#endif  // RCLCPP__LOGGING_HPP_
