#ifndef INTERACTIVEMARKERINIT_SPLTYPES_H
#define INTERACTIVEMARKERINIT_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_InteractiveMarkerInit_.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarker_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __InteractiveMarkerInit__visualization_msgs__load (c_base base);

extern c_metaObject __InteractiveMarkerInit__visualization_msgs_msg__load (c_base base);

extern c_metaObject __InteractiveMarkerInit__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__InteractiveMarkerInit__metaDescriptor[];
extern const int visualization_msgs_msg_dds__InteractiveMarkerInit__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__InteractiveMarkerInit__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__InteractiveMarkerInit___load (c_base base);
struct _visualization_msgs_msg_dds__InteractiveMarkerInit_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__InteractiveMarkerInit___copyIn(c_base base, const struct visualization_msgs::msg::dds_::InteractiveMarkerInit_ *from, struct _visualization_msgs_msg_dds__InteractiveMarkerInit_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__InteractiveMarkerInit___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__InteractiveMarkerInit_ {
    c_string server_id_;
    c_ulonglong seq_num_;
    c_sequence markers_;
};

#undef OS_API
#endif
