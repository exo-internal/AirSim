#ifndef TFMESSAGE_SPLTYPES_H
#define TFMESSAGE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TFMessage_.h"
#include "geometry_msgs/msg/dds_opensplice/TransformStamped_SplDcps.h"

#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __TFMessage__tf2_msgs__load (c_base base);

extern c_metaObject __TFMessage__tf2_msgs_msg__load (c_base base);

extern c_metaObject __TFMessage__tf2_msgs_msg_dds___load (c_base base);

extern const char *tf2_msgs_msg_dds__TFMessage__metaDescriptor[];
extern const int tf2_msgs_msg_dds__TFMessage__metaDescriptorArrLength;
extern const int tf2_msgs_msg_dds__TFMessage__metaDescriptorLength;
extern c_metaObject __tf2_msgs_msg_dds__TFMessage___load (c_base base);
struct _tf2_msgs_msg_dds__TFMessage_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs v_copyin_result __tf2_msgs_msg_dds__TFMessage___copyIn(c_base base, const struct tf2_msgs::msg::dds_::TFMessage_ *from, struct _tf2_msgs_msg_dds__TFMessage_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs void __tf2_msgs_msg_dds__TFMessage___copyOut(const void *_from, void *_to);
struct _tf2_msgs_msg_dds__TFMessage_ {
    c_sequence transforms_;
};

#undef OS_API
#endif
