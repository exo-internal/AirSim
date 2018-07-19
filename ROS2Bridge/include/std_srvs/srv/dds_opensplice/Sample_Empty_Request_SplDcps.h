#ifndef SAMPLE_EMPTY_REQUEST_SPLTYPES_H
#define SAMPLE_EMPTY_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_Empty_Request_.h"
#include "std_srvs/srv/dds_opensplice/Empty_Request_SplDcps.h"

#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_Empty_Request__std_srvs__load (c_base base);

extern c_metaObject __Sample_Empty_Request__std_srvs_srv__load (c_base base);

extern c_metaObject __Sample_Empty_Request__std_srvs_srv_dds___load (c_base base);

extern const char *std_srvs_srv_dds__Sample_Empty_Request__metaDescriptor[];
extern const int std_srvs_srv_dds__Sample_Empty_Request__metaDescriptorArrLength;
extern const int std_srvs_srv_dds__Sample_Empty_Request__metaDescriptorLength;
extern c_metaObject __std_srvs_srv_dds__Sample_Empty_Request___load (c_base base);
struct _std_srvs_srv_dds__Sample_Empty_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs v_copyin_result __std_srvs_srv_dds__Sample_Empty_Request___copyIn(c_base base, const struct std_srvs::srv::dds_::Sample_Empty_Request_ *from, struct _std_srvs_srv_dds__Sample_Empty_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs void __std_srvs_srv_dds__Sample_Empty_Request___copyOut(const void *_from, void *_to);
struct _std_srvs_srv_dds__Sample_Empty_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _std_srvs_srv_dds__Empty_Request_ request_;
};

#undef OS_API
#endif
