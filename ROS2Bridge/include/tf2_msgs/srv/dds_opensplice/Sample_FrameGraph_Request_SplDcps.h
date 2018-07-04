#ifndef SAMPLE_FRAMEGRAPH_REQUEST_SPLTYPES_H
#define SAMPLE_FRAMEGRAPH_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_FrameGraph_Request_.h"
#include "tf2_msgs/srv/dds_opensplice/FrameGraph_Request_SplDcps.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_FrameGraph_Request__tf2_msgs__load (c_base base);

extern c_metaObject __Sample_FrameGraph_Request__tf2_msgs_srv__load (c_base base);

extern c_metaObject __Sample_FrameGraph_Request__tf2_msgs_srv_dds___load (c_base base);

extern const char *tf2_msgs_srv_dds__Sample_FrameGraph_Request__metaDescriptor[];
extern const int tf2_msgs_srv_dds__Sample_FrameGraph_Request__metaDescriptorArrLength;
extern const int tf2_msgs_srv_dds__Sample_FrameGraph_Request__metaDescriptorLength;
extern c_metaObject __tf2_msgs_srv_dds__Sample_FrameGraph_Request___load (c_base base);
struct _tf2_msgs_srv_dds__Sample_FrameGraph_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_srv_dds__Sample_FrameGraph_Request___copyIn(c_base base, const struct tf2_msgs::srv::dds_::Sample_FrameGraph_Request_ *from, struct _tf2_msgs_srv_dds__Sample_FrameGraph_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_srv_dds__Sample_FrameGraph_Request___copyOut(const void *_from, void *_to);
struct _tf2_msgs_srv_dds__Sample_FrameGraph_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _tf2_msgs_srv_dds__FrameGraph_Request_ request_;
};

#undef OS_API
#endif
