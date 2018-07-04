#ifndef GOALSTATUSARRAY_SPLTYPES_H
#define GOALSTATUSARRAY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GoalStatusArray_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "actionlib_msgs/msg/dds_opensplice/GoalStatus_SplDcps.h"

#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GoalStatusArray__actionlib_msgs__load (c_base base);

extern c_metaObject __GoalStatusArray__actionlib_msgs_msg__load (c_base base);

extern c_metaObject __GoalStatusArray__actionlib_msgs_msg_dds___load (c_base base);

extern const char *actionlib_msgs_msg_dds__GoalStatusArray__metaDescriptor[];
extern const int actionlib_msgs_msg_dds__GoalStatusArray__metaDescriptorArrLength;
extern const int actionlib_msgs_msg_dds__GoalStatusArray__metaDescriptorLength;
extern c_metaObject __actionlib_msgs_msg_dds__GoalStatusArray___load (c_base base);
struct _actionlib_msgs_msg_dds__GoalStatusArray_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs v_copyin_result __actionlib_msgs_msg_dds__GoalStatusArray___copyIn(c_base base, const struct actionlib_msgs::msg::dds_::GoalStatusArray_ *from, struct _actionlib_msgs_msg_dds__GoalStatusArray_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs void __actionlib_msgs_msg_dds__GoalStatusArray___copyOut(const void *_from, void *_to);
struct _actionlib_msgs_msg_dds__GoalStatusArray_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence status_list_;
};

#undef OS_API
#endif
