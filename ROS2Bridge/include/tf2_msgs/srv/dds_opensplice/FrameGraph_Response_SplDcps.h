#ifndef FRAMEGRAPH_RESPONSE_SPLTYPES_H
#define FRAMEGRAPH_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_FrameGraph_Response_.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __FrameGraph_Response__tf2_msgs__load (c_base base);

extern c_metaObject __FrameGraph_Response__tf2_msgs_srv__load (c_base base);

extern c_metaObject __FrameGraph_Response__tf2_msgs_srv_dds___load (c_base base);

extern const char *tf2_msgs_srv_dds__FrameGraph_Response__metaDescriptor[];
extern const int tf2_msgs_srv_dds__FrameGraph_Response__metaDescriptorArrLength;
extern const int tf2_msgs_srv_dds__FrameGraph_Response__metaDescriptorLength;
extern c_metaObject __tf2_msgs_srv_dds__FrameGraph_Response___load (c_base base);
struct _tf2_msgs_srv_dds__FrameGraph_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_srv_dds__FrameGraph_Response___copyIn(c_base base, const struct tf2_msgs::srv::dds_::FrameGraph_Response_ *from, struct _tf2_msgs_srv_dds__FrameGraph_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_srv_dds__FrameGraph_Response___copyOut(const void *_from, void *_to);
struct _tf2_msgs_srv_dds__FrameGraph_Response_ {
    c_string frame_yaml_;
};

#undef OS_API
#endif
