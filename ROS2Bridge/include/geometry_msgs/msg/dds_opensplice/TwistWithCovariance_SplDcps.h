#ifndef TWISTWITHCOVARIANCE_SPLTYPES_H
#define TWISTWITHCOVARIANCE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TwistWithCovariance_.h"
#include "geometry_msgs/msg/dds_opensplice/Twist_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __TwistWithCovariance__geometry_msgs__load (c_base base);

extern c_metaObject __TwistWithCovariance__geometry_msgs_msg__load (c_base base);

extern c_metaObject __TwistWithCovariance__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__load (c_base base);
typedef c_double _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36[36];

extern const char *geometry_msgs_msg_dds__TwistWithCovariance__metaDescriptor[];
extern const int geometry_msgs_msg_dds__TwistWithCovariance__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__TwistWithCovariance__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__TwistWithCovariance___load (c_base base);
struct _geometry_msgs_msg_dds__TwistWithCovariance_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__TwistWithCovariance___copyIn(c_base base, const struct geometry_msgs::msg::dds_::TwistWithCovariance_ *from, struct _geometry_msgs_msg_dds__TwistWithCovariance_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__TwistWithCovariance___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__TwistWithCovariance_ {
    struct _geometry_msgs_msg_dds__Twist_ twist_;
    _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36 covariance_;
};

#undef OS_API
#endif
