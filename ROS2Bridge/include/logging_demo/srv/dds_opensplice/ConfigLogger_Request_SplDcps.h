#ifndef CONFIGLOGGER_REQUEST_SPLTYPES_H
#define CONFIGLOGGER_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ConfigLogger_Request_.h"
#include "logging_demo/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ConfigLogger_Request__logging_demo__load (c_base base);

extern c_metaObject __ConfigLogger_Request__logging_demo_srv__load (c_base base);

extern c_metaObject __ConfigLogger_Request__logging_demo_srv_dds___load (c_base base);

extern const char *logging_demo_srv_dds__ConfigLogger_Request__metaDescriptor[];
extern const int logging_demo_srv_dds__ConfigLogger_Request__metaDescriptorArrLength;
extern const int logging_demo_srv_dds__ConfigLogger_Request__metaDescriptorLength;
extern c_metaObject __logging_demo_srv_dds__ConfigLogger_Request___load (c_base base);
struct _logging_demo_srv_dds__ConfigLogger_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo v_copyin_result __logging_demo_srv_dds__ConfigLogger_Request___copyIn(c_base base, const struct logging_demo::srv::dds_::ConfigLogger_Request_ *from, struct _logging_demo_srv_dds__ConfigLogger_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo void __logging_demo_srv_dds__ConfigLogger_Request___copyOut(const void *_from, void *_to);
struct _logging_demo_srv_dds__ConfigLogger_Request_ {
    c_string logger_name_;
    c_string level_;
};

#undef OS_API
#endif
