

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InteractiveMarkerControl_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InteractiveMarkerControl__1238251909_h
#define InteractiveMarkerControl__1238251909_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "visualization_msgs/msg/dds_connext/Marker_.h"
namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet InteractiveMarkerControl__INHERIT= 0;
            static const DDS_Octet InteractiveMarkerControl__FIXED= 1;
            static const DDS_Octet InteractiveMarkerControl__VIEW_FACING= 2;
            static const DDS_Octet InteractiveMarkerControl__NONE= 0;
            static const DDS_Octet InteractiveMarkerControl__MENU= 1;
            static const DDS_Octet InteractiveMarkerControl__BUTTON= 2;
            static const DDS_Octet InteractiveMarkerControl__MOVE_AXIS= 3;
            static const DDS_Octet InteractiveMarkerControl__MOVE_PLANE= 4;
            static const DDS_Octet InteractiveMarkerControl__ROTATE_AXIS= 5;
            static const DDS_Octet InteractiveMarkerControl__MOVE_ROTATE= 6;
            static const DDS_Octet InteractiveMarkerControl__MOVE_3D= 7;
            static const DDS_Octet InteractiveMarkerControl__ROTATE_3D= 8;
            static const DDS_Octet InteractiveMarkerControl__MOVE_ROTATE_3D= 9;

            extern const char *InteractiveMarkerControl_TYPENAME;

            struct InteractiveMarkerControl_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InteractiveMarkerControl_TypeSupport;
            class InteractiveMarkerControl_DataWriter;
            class InteractiveMarkerControl_DataReader;
            #endif

            class InteractiveMarkerControl_ 
            {
              public:
                typedef struct InteractiveMarkerControl_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InteractiveMarkerControl_TypeSupport TypeSupport;
                typedef InteractiveMarkerControl_DataWriter DataWriter;
                typedef InteractiveMarkerControl_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                DDS_Octet   orientation_mode_ ;
                DDS_Octet   interaction_mode_ ;
                DDS_Boolean   always_visible_ ;
                visualization_msgs::msg::dds_::Marker_Seq  markers_ ;
                DDS_Boolean   independent_marker_orientation_ ;
                DDS_Char *   description_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_visualization_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InteractiveMarkerControl__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InteractiveMarkerControl_Seq, InteractiveMarkerControl_);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerControl__initialize(
                InteractiveMarkerControl_* self);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerControl__initialize_ex(
                InteractiveMarkerControl_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InteractiveMarkerControl__initialize_w_params(
                InteractiveMarkerControl_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InteractiveMarkerControl__finalize(
                InteractiveMarkerControl_* self);

            NDDSUSERDllExport
            void InteractiveMarkerControl__finalize_ex(
                InteractiveMarkerControl_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InteractiveMarkerControl__finalize_w_params(
                InteractiveMarkerControl_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InteractiveMarkerControl__finalize_optional_members(
                InteractiveMarkerControl_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InteractiveMarkerControl__copy(
                InteractiveMarkerControl_* dst,
                const InteractiveMarkerControl_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_visualization_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* InteractiveMarkerControl_ */

