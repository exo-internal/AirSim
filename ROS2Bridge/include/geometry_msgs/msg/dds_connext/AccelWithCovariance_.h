

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelWithCovariance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AccelWithCovariance__561543782_h
#define AccelWithCovariance__561543782_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Accel_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Double   geometry_msgs__AccelWithCovariance__double_array_36 [36];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* geometry_msgs__AccelWithCovariance__double_array_36_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(geometry_msgs__AccelWithCovariance__double_array_36Seq, geometry_msgs__AccelWithCovariance__double_array_36);

            NDDSUSERDllExport
            RTIBool geometry_msgs__AccelWithCovariance__double_array_36_initialize(
                geometry_msgs__AccelWithCovariance__double_array_36* self);

            NDDSUSERDllExport
            RTIBool geometry_msgs__AccelWithCovariance__double_array_36_initialize_ex(
                geometry_msgs__AccelWithCovariance__double_array_36* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool geometry_msgs__AccelWithCovariance__double_array_36_initialize_w_params(
                geometry_msgs__AccelWithCovariance__double_array_36* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void geometry_msgs__AccelWithCovariance__double_array_36_finalize(
                geometry_msgs__AccelWithCovariance__double_array_36* self);

            NDDSUSERDllExport
            void geometry_msgs__AccelWithCovariance__double_array_36_finalize_ex(
                geometry_msgs__AccelWithCovariance__double_array_36* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void geometry_msgs__AccelWithCovariance__double_array_36_finalize_w_params(
                geometry_msgs__AccelWithCovariance__double_array_36* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void geometry_msgs__AccelWithCovariance__double_array_36_finalize_optional_members(
                geometry_msgs__AccelWithCovariance__double_array_36* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool geometry_msgs__AccelWithCovariance__double_array_36_copy(
                geometry_msgs__AccelWithCovariance__double_array_36* dst,
                const geometry_msgs__AccelWithCovariance__double_array_36* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *AccelWithCovariance_TYPENAME;

            struct AccelWithCovariance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AccelWithCovariance_TypeSupport;
            class AccelWithCovariance_DataWriter;
            class AccelWithCovariance_DataReader;
            #endif

            class AccelWithCovariance_ 
            {
              public:
                typedef struct AccelWithCovariance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AccelWithCovariance_TypeSupport TypeSupport;
                typedef AccelWithCovariance_DataWriter DataWriter;
                typedef AccelWithCovariance_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Accel_   accel_ ;
                geometry_msgs::msg::dds_::geometry_msgs__AccelWithCovariance__double_array_36   covariance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AccelWithCovariance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AccelWithCovariance_Seq, AccelWithCovariance_);

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__initialize(
                AccelWithCovariance_* self);

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__initialize_ex(
                AccelWithCovariance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__initialize_w_params(
                AccelWithCovariance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AccelWithCovariance__finalize(
                AccelWithCovariance_* self);

            NDDSUSERDllExport
            void AccelWithCovariance__finalize_ex(
                AccelWithCovariance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AccelWithCovariance__finalize_w_params(
                AccelWithCovariance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AccelWithCovariance__finalize_optional_members(
                AccelWithCovariance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__copy(
                AccelWithCovariance_* dst,
                const AccelWithCovariance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* AccelWithCovariance_ */

