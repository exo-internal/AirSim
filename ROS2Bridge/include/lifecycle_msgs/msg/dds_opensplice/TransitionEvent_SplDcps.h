#ifndef TRANSITIONEVENT_SPLTYPES_H
#define TRANSITIONEVENT_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TransitionEvent_.h"
#include "lifecycle_msgs/msg/dds_opensplice/Transition_SplDcps.h"
#include "lifecycle_msgs/msg/dds_opensplice/State_SplDcps.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __TransitionEvent__lifecycle_msgs__load (c_base base);

extern c_metaObject __TransitionEvent__lifecycle_msgs_msg__load (c_base base);

extern c_metaObject __TransitionEvent__lifecycle_msgs_msg_dds___load (c_base base);

extern const char *lifecycle_msgs_msg_dds__TransitionEvent__metaDescriptor[];
extern const int lifecycle_msgs_msg_dds__TransitionEvent__metaDescriptorArrLength;
extern const int lifecycle_msgs_msg_dds__TransitionEvent__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_msg_dds__TransitionEvent___load (c_base base);
struct _lifecycle_msgs_msg_dds__TransitionEvent_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_msg_dds__TransitionEvent___copyIn(c_base base, const struct lifecycle_msgs::msg::dds_::TransitionEvent_ *from, struct _lifecycle_msgs_msg_dds__TransitionEvent_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_msg_dds__TransitionEvent___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_msg_dds__TransitionEvent_ {
    c_ulonglong timestamp_;
    struct _lifecycle_msgs_msg_dds__Transition_ transition_;
    struct _lifecycle_msgs_msg_dds__State_ start_state_;
    struct _lifecycle_msgs_msg_dds__State_ goal_state_;
};

#undef OS_API
#endif
