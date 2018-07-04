#ifndef ADDDIAGNOSTICS_REQUEST_SPLTYPES_H
#define ADDDIAGNOSTICS_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AddDiagnostics_Request_.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __AddDiagnostics_Request__diagnostic_msgs__load (c_base base);

extern c_metaObject __AddDiagnostics_Request__diagnostic_msgs_srv__load (c_base base);

extern c_metaObject __AddDiagnostics_Request__diagnostic_msgs_srv_dds___load (c_base base);

extern const char *diagnostic_msgs_srv_dds__AddDiagnostics_Request__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__AddDiagnostics_Request__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__AddDiagnostics_Request__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__AddDiagnostics_Request___load (c_base base);
struct _diagnostic_msgs_srv_dds__AddDiagnostics_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__AddDiagnostics_Request___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::AddDiagnostics_Request_ *from, struct _diagnostic_msgs_srv_dds__AddDiagnostics_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__AddDiagnostics_Request___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__AddDiagnostics_Request_ {
    c_string load_namespace_;
};

#undef OS_API
#endif
