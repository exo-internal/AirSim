#ifndef SETPARAMETERSATOMICALLY_RESPONSE_SPLTYPES_H
#define SETPARAMETERSATOMICALLY_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetParametersAtomically_Response_.h"
#include "rcl_interfaces/msg/dds_opensplice/SetParametersResult_SplDcps.h"

#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetParametersAtomically_Response__rcl_interfaces__load (c_base base);

extern c_metaObject __SetParametersAtomically_Response__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __SetParametersAtomically_Response__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__SetParametersAtomically_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__SetParametersAtomically_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__SetParametersAtomically_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__SetParametersAtomically_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__SetParametersAtomically_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_srv_dds__SetParametersAtomically_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::SetParametersAtomically_Response_ *from, struct _rcl_interfaces_srv_dds__SetParametersAtomically_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_srv_dds__SetParametersAtomically_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__SetParametersAtomically_Response_ {
    struct _rcl_interfaces_msg_dds__SetParametersResult_ result_;
};

#undef OS_API
#endif
