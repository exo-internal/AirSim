#ifndef GETPARAMETERS_RESPONSE_SPLTYPES_H
#define GETPARAMETERS_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetParameters_Response_.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterValue_SplDcps.h"

#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetParameters_Response__rcl_interfaces__load (c_base base);

extern c_metaObject __GetParameters_Response__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __GetParameters_Response__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__GetParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__GetParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__GetParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__GetParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__GetParameters_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_srv_dds__GetParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::GetParameters_Response_ *from, struct _rcl_interfaces_srv_dds__GetParameters_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_srv_dds__GetParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__GetParameters_Response_ {
    c_sequence values_;
};

#undef OS_API
#endif
