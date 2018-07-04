#ifndef ACCELWITHCOVARIANCE_SPLTYPES_H
#define ACCELWITHCOVARIANCE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AccelWithCovariance_.h"
#include "geometry_msgs/msg/dds_opensplice/Accel_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __AccelWithCovariance__geometry_msgs__load (c_base base);

extern c_metaObject __AccelWithCovariance__geometry_msgs_msg__load (c_base base);

extern c_metaObject __AccelWithCovariance__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__geometry_msgs__AccelWithCovariance__double_array_36__load (c_base base);
typedef c_double _geometry_msgs_msg_dds__geometry_msgs__AccelWithCovariance__double_array_36[36];

extern const char *geometry_msgs_msg_dds__AccelWithCovariance__metaDescriptor[];
extern const int geometry_msgs_msg_dds__AccelWithCovariance__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__AccelWithCovariance__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__AccelWithCovariance___load (c_base base);
struct _geometry_msgs_msg_dds__AccelWithCovariance_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__AccelWithCovariance___copyIn(c_base base, const struct geometry_msgs::msg::dds_::AccelWithCovariance_ *from, struct _geometry_msgs_msg_dds__AccelWithCovariance_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__AccelWithCovariance___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__AccelWithCovariance_ {
    struct _geometry_msgs_msg_dds__Accel_ accel_;
    _geometry_msgs_msg_dds__geometry_msgs__AccelWithCovariance__double_array_36 covariance_;
};

#undef OS_API
#endif
