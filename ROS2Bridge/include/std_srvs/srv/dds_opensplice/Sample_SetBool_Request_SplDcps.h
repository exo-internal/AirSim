#ifndef SAMPLE_SETBOOL_REQUEST_SPLTYPES_H
#define SAMPLE_SETBOOL_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_SetBool_Request_.h"
#include "std_srvs/srv/dds_opensplice/SetBool_Request_SplDcps.h"

#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_SetBool_Request__std_srvs__load (c_base base);

extern c_metaObject __Sample_SetBool_Request__std_srvs_srv__load (c_base base);

extern c_metaObject __Sample_SetBool_Request__std_srvs_srv_dds___load (c_base base);

extern const char *std_srvs_srv_dds__Sample_SetBool_Request__metaDescriptor[];
extern const int std_srvs_srv_dds__Sample_SetBool_Request__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__Sample_SetBool_Request__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__Sample_SetBool_Request___load (c_base base);
struct _std_srvs_srv_dds__Sample_SetBool_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__Sample_SetBool_Request___copyIn(c_base base, const struct std_srvs::srv::dds_::Sample_SetBool_Request_ *from, struct _std_srvs_srv_dds__Sample_SetBool_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__Sample_SetBool_Request___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__Sample_SetBool_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _std_srvs_srv_dds__SetBool_Request_ request_;
};

#undef OS_API
#endif
