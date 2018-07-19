#ifndef MARKERARRAY_SPLTYPES_H
#define MARKERARRAY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MarkerArray_.h"
#include "visualization_msgs/msg/dds_opensplice/Marker_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MarkerArray__visualization_msgs__load (c_base base);

extern c_metaObject __MarkerArray__visualization_msgs_msg__load (c_base base);

extern c_metaObject __MarkerArray__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__MarkerArray__metaDescriptor[];
extern const int visualization_msgs_msg_dds__MarkerArray__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__MarkerArray__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__MarkerArray___load (c_base base);
struct _visualization_msgs_msg_dds__MarkerArray_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__MarkerArray___copyIn(c_base base, const struct visualization_msgs::msg::dds_::MarkerArray_ *from, struct _visualization_msgs_msg_dds__MarkerArray_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__MarkerArray___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__MarkerArray_ {
    c_sequence markers_;
};

#undef OS_API
#endif
