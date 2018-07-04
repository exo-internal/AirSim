#ifndef MAPMETADATA_SPLTYPES_H
#define MAPMETADATA_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MapMetaData_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MapMetaData__nav_msgs__load (c_base base);

extern c_metaObject __MapMetaData__nav_msgs_msg__load (c_base base);

extern c_metaObject __MapMetaData__nav_msgs_msg_dds___load (c_base base);

extern const char *nav_msgs_msg_dds__MapMetaData__metaDescriptor[];
extern const int nav_msgs_msg_dds__MapMetaData__metaDescriptorArrLength;
extern const int nav_msgs_msg_dds__MapMetaData__metaDescriptorLength;
extern c_metaObject __nav_msgs_msg_dds__MapMetaData___load (c_base base);
struct _nav_msgs_msg_dds__MapMetaData_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_msg_dds__MapMetaData___copyIn(c_base base, const struct nav_msgs::msg::dds_::MapMetaData_ *from, struct _nav_msgs_msg_dds__MapMetaData_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_msg_dds__MapMetaData___copyOut(const void *_from, void *_to);
struct _nav_msgs_msg_dds__MapMetaData_ {
    struct _builtin_interfaces_msg_dds__Time_ map_load_time_;
    c_float resolution_;
    c_ulong width_;
    c_ulong height_;
    struct _geometry_msgs_msg_dds__Pose_ origin_;
};

#undef OS_API
#endif
