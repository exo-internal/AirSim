#ifndef GETPARAMETERTYPES_RESPONSE_SPLTYPES_H
#define GETPARAMETERTYPES_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetParameterTypes_Response_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetParameterTypes_Response__rcl_interfaces__load (c_base base);

extern c_metaObject __GetParameterTypes_Response__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __GetParameterTypes_Response__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__GetParameterTypes_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__GetParameterTypes_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__GetParameterTypes_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__GetParameterTypes_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_srv_dds__GetParameterTypes_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::GetParameterTypes_Response_ *from, struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_srv_dds__GetParameterTypes_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ {
    c_sequence types_;
};

#undef OS_API
#endif
