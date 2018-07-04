#ifndef GOALID_SPLTYPES_H
#define GOALID_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GoalID_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GoalID__actionlib_msgs__load (c_base base);

extern c_metaObject __GoalID__actionlib_msgs_msg__load (c_base base);

extern c_metaObject __GoalID__actionlib_msgs_msg_dds___load (c_base base);

extern const char *actionlib_msgs_msg_dds__GoalID__metaDescriptor[];
extern const int actionlib_msgs_msg_dds__GoalID__metaDescriptorArrLength;
extern const int actionlib_msgs_msg_dds__GoalID__metaDescriptorLength;
extern c_metaObject __actionlib_msgs_msg_dds__GoalID___load (c_base base);
struct _actionlib_msgs_msg_dds__GoalID_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs v_copyin_result __actionlib_msgs_msg_dds__GoalID___copyIn(c_base base, const struct actionlib_msgs::msg::dds_::GoalID_ *from, struct _actionlib_msgs_msg_dds__GoalID_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs void __actionlib_msgs_msg_dds__GoalID___copyOut(const void *_from, void *_to);
struct _actionlib_msgs_msg_dds__GoalID_ {
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
    c_string id_;
};

#undef OS_API
#endif
