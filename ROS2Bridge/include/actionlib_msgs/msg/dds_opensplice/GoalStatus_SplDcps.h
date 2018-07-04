#ifndef GOALSTATUS_SPLTYPES_H
#define GOALSTATUS_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GoalStatus_.h"
#include "actionlib_msgs/msg/dds_opensplice/GoalID_SplDcps.h"

#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GoalStatus__actionlib_msgs__load (c_base base);

extern c_metaObject __GoalStatus__actionlib_msgs_msg__load (c_base base);

extern c_metaObject __GoalStatus__actionlib_msgs_msg_dds___load (c_base base);

extern const char *actionlib_msgs_msg_dds__GoalStatus__metaDescriptor[];
extern const int actionlib_msgs_msg_dds__GoalStatus__metaDescriptorArrLength;
extern const int actionlib_msgs_msg_dds__GoalStatus__metaDescriptorLength;
extern c_metaObject __actionlib_msgs_msg_dds__GoalStatus___load (c_base base);
struct _actionlib_msgs_msg_dds__GoalStatus_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs v_copyin_result __actionlib_msgs_msg_dds__GoalStatus___copyIn(c_base base, const struct actionlib_msgs::msg::dds_::GoalStatus_ *from, struct _actionlib_msgs_msg_dds__GoalStatus_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs void __actionlib_msgs_msg_dds__GoalStatus___copyOut(const void *_from, void *_to);
struct _actionlib_msgs_msg_dds__GoalStatus_ {
    struct _actionlib_msgs_msg_dds__GoalID_ goal_id_;
    c_octet status_;
    c_string text_;
};

#undef OS_API
#endif
