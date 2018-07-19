#ifndef PROJECTEDMAP_SPLTYPES_H
#define PROJECTEDMAP_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ProjectedMap_.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ProjectedMap__map_msgs__load (c_base base);

extern c_metaObject __ProjectedMap__map_msgs_msg__load (c_base base);

extern c_metaObject __ProjectedMap__map_msgs_msg_dds___load (c_base base);

extern const char *map_msgs_msg_dds__ProjectedMap__metaDescriptor[];
extern const int map_msgs_msg_dds__ProjectedMap__metaDescriptorArrLength;
extern const int map_msgs_msg_dds__ProjectedMap__metaDescriptorLength;
extern c_metaObject __map_msgs_msg_dds__ProjectedMap___load (c_base base);
struct _map_msgs_msg_dds__ProjectedMap_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_msg_dds__ProjectedMap___copyIn(c_base base, const struct map_msgs::msg::dds_::ProjectedMap_ *from, struct _map_msgs_msg_dds__ProjectedMap_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_msg_dds__ProjectedMap___copyOut(const void *_from, void *_to);
struct _map_msgs_msg_dds__ProjectedMap_ {
    struct _nav_msgs_msg_dds__OccupancyGrid_ map_;
    c_double min_z_;
    c_double max_z_;
};

#undef OS_API
#endif
