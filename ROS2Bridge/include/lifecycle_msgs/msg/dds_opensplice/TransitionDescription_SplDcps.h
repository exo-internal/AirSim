#ifndef TRANSITIONDESCRIPTION_SPLTYPES_H
#define TRANSITIONDESCRIPTION_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TransitionDescription_.h"
#include "lifecycle_msgs/msg/dds_opensplice/Transition_SplDcps.h"
#include "lifecycle_msgs/msg/dds_opensplice/State_SplDcps.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __TransitionDescription__lifecycle_msgs__load (c_base base);

extern c_metaObject __TransitionDescription__lifecycle_msgs_msg__load (c_base base);

extern c_metaObject __TransitionDescription__lifecycle_msgs_msg_dds___load (c_base base);

extern const char *lifecycle_msgs_msg_dds__TransitionDescription__metaDescriptor[];
extern const int lifecycle_msgs_msg_dds__TransitionDescription__metaDescriptorArrLength;
extern const int lifecycle_msgs_msg_dds__TransitionDescription__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_msg_dds__TransitionDescription___load (c_base base);
struct _lifecycle_msgs_msg_dds__TransitionDescription_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_msg_dds__TransitionDescription___copyIn(c_base base, const struct lifecycle_msgs::msg::dds_::TransitionDescription_ *from, struct _lifecycle_msgs_msg_dds__TransitionDescription_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_msg_dds__TransitionDescription___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_msg_dds__TransitionDescription_ {
    struct _lifecycle_msgs_msg_dds__Transition_ transition_;
    struct _lifecycle_msgs_msg_dds__State_ start_state_;
    struct _lifecycle_msgs_msg_dds__State_ goal_state_;
};

#undef OS_API
#endif
