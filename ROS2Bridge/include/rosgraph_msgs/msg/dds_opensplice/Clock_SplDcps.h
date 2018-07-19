#ifndef CLOCK_SPLTYPES_H
#define CLOCK_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Clock_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "rosgraph_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Clock__rosgraph_msgs__load (c_base base);

extern c_metaObject __Clock__rosgraph_msgs_msg__load (c_base base);

extern c_metaObject __Clock__rosgraph_msgs_msg_dds___load (c_base base);

extern const char *rosgraph_msgs_msg_dds__Clock__metaDescriptor[];
extern const int rosgraph_msgs_msg_dds__Clock__metaDescriptorArrLength;
extern const int rosgraph_msgs_msg_dds__Clock__metaDescriptorLength;
extern c_metaObject __rosgraph_msgs_msg_dds__Clock___load (c_base base);
struct _rosgraph_msgs_msg_dds__Clock_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs v_copyin_result __rosgraph_msgs_msg_dds__Clock___copyIn(c_base base, const struct rosgraph_msgs::msg::dds_::Clock_ *from, struct _rosgraph_msgs_msg_dds__Clock_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs void __rosgraph_msgs_msg_dds__Clock___copyOut(const void *_from, void *_to);
struct _rosgraph_msgs_msg_dds__Clock_ {
    struct _builtin_interfaces_msg_dds__Time_ clock_;
};

#undef OS_API
#endif
