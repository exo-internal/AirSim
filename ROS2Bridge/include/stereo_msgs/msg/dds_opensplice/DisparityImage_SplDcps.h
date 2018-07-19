#ifndef DISPARITYIMAGE_SPLTYPES_H
#define DISPARITYIMAGE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_DisparityImage_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/Image_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/RegionOfInterest_SplDcps.h"

#include "stereo_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __DisparityImage__stereo_msgs__load (c_base base);

extern c_metaObject __DisparityImage__stereo_msgs_msg__load (c_base base);

extern c_metaObject __DisparityImage__stereo_msgs_msg_dds___load (c_base base);

extern const char *stereo_msgs_msg_dds__DisparityImage__metaDescriptor[];
extern const int stereo_msgs_msg_dds__DisparityImage__metaDescriptorArrLength;
extern const int stereo_msgs_msg_dds__DisparityImage__metaDescriptorLength;
extern c_metaObject __stereo_msgs_msg_dds__DisparityImage___load (c_base base);
struct _stereo_msgs_msg_dds__DisparityImage_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs v_copyin_result __stereo_msgs_msg_dds__DisparityImage___copyIn(c_base base, const struct stereo_msgs::msg::dds_::DisparityImage_ *from, struct _stereo_msgs_msg_dds__DisparityImage_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_stereo_msgs void __stereo_msgs_msg_dds__DisparityImage___copyOut(const void *_from, void *_to);
struct _stereo_msgs_msg_dds__DisparityImage_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _sensor_msgs_msg_dds__Image_ image_;
    c_float f_;
    c_float t_;
    struct _sensor_msgs_msg_dds__RegionOfInterest_ valid_window_;
    c_float min_disparity_;
    c_float max_disparity_;
    c_float delta_d_;
};

#undef OS_API
#endif
