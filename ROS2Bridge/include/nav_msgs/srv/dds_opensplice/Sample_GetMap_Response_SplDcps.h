#ifndef SAMPLE_GETMAP_RESPONSE_SPLTYPES_H
#define SAMPLE_GETMAP_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_GetMap_Response_.h"
#include "nav_msgs/srv/dds_opensplice/GetMap_Response_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_GetMap_Response__nav_msgs__load (c_base base);

extern c_metaObject __Sample_GetMap_Response__nav_msgs_srv__load (c_base base);

extern c_metaObject __Sample_GetMap_Response__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__Sample_GetMap_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__Sample_GetMap_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__Sample_GetMap_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__Sample_GetMap_Response___load (c_base base);
struct _nav_msgs_srv_dds__Sample_GetMap_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__Sample_GetMap_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::Sample_GetMap_Response_ *from, struct _nav_msgs_srv_dds__Sample_GetMap_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__Sample_GetMap_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetMap_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetMap_Response_ response_;
};

#undef OS_API
#endif
