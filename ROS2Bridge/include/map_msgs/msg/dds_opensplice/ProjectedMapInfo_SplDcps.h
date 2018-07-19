#ifndef PROJECTEDMAPINFO_SPLTYPES_H
#define PROJECTEDMAPINFO_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ProjectedMapInfo_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ProjectedMapInfo__map_msgs__load (c_base base);

extern c_metaObject __ProjectedMapInfo__map_msgs_msg__load (c_base base);

extern c_metaObject __ProjectedMapInfo__map_msgs_msg_dds___load (c_base base);

extern const char *map_msgs_msg_dds__ProjectedMapInfo__metaDescriptor[];
extern const int map_msgs_msg_dds__ProjectedMapInfo__metaDescriptorArrLength;
extern const int map_msgs_msg_dds__ProjectedMapInfo__metaDescriptorLength;
extern c_metaObject __map_msgs_msg_dds__ProjectedMapInfo___load (c_base base);
struct _map_msgs_msg_dds__ProjectedMapInfo_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_msg_dds__ProjectedMapInfo___copyIn(c_base base, const struct map_msgs::msg::dds_::ProjectedMapInfo_ *from, struct _map_msgs_msg_dds__ProjectedMapInfo_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_msg_dds__ProjectedMapInfo___copyOut(const void *_from, void *_to);
struct _map_msgs_msg_dds__ProjectedMapInfo_ {
    c_string frame_id_;
    c_double x_;
    c_double y_;
    c_double width_;
    c_double height_;
    c_double min_z_;
    c_double max_z_;
};

#undef OS_API
#endif
