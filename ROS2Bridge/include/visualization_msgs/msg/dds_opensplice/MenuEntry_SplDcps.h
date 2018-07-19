#ifndef MENUENTRY_SPLTYPES_H
#define MENUENTRY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MenuEntry_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MenuEntry__visualization_msgs__load (c_base base);

extern c_metaObject __MenuEntry__visualization_msgs_msg__load (c_base base);

extern c_metaObject __MenuEntry__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__MenuEntry__metaDescriptor[];
extern const int visualization_msgs_msg_dds__MenuEntry__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__MenuEntry__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__MenuEntry___load (c_base base);
struct _visualization_msgs_msg_dds__MenuEntry_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__MenuEntry___copyIn(c_base base, const struct visualization_msgs::msg::dds_::MenuEntry_ *from, struct _visualization_msgs_msg_dds__MenuEntry_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__MenuEntry___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__MenuEntry_ {
    c_ulong id_;
    c_ulong parent_id_;
    c_string title_;
    c_string command_;
    c_octet command_type_;
};

#undef OS_API
#endif
