

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatFix_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatFix__1372680578_h
#define NavSatFix__1372680578_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/NavSatStatus_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet NavSatFix__COVARIANCE_TYPE_UNKNOWN= 0;
            static const DDS_Octet NavSatFix__COVARIANCE_TYPE_APPROXIMATED= 1;
            static const DDS_Octet NavSatFix__COVARIANCE_TYPE_DIAGONAL_KNOWN= 2;
            static const DDS_Octet NavSatFix__COVARIANCE_TYPE_KNOWN= 3;
            typedef    DDS_Double   sensor_msgs__NavSatFix__double_array_9 [9];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* sensor_msgs__NavSatFix__double_array_9_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(sensor_msgs__NavSatFix__double_array_9Seq, sensor_msgs__NavSatFix__double_array_9);

            NDDSUSERDllExport
            RTIBool sensor_msgs__NavSatFix__double_array_9_initialize(
                sensor_msgs__NavSatFix__double_array_9* self);

            NDDSUSERDllExport
            RTIBool sensor_msgs__NavSatFix__double_array_9_initialize_ex(
                sensor_msgs__NavSatFix__double_array_9* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool sensor_msgs__NavSatFix__double_array_9_initialize_w_params(
                sensor_msgs__NavSatFix__double_array_9* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void sensor_msgs__NavSatFix__double_array_9_finalize(
                sensor_msgs__NavSatFix__double_array_9* self);

            NDDSUSERDllExport
            void sensor_msgs__NavSatFix__double_array_9_finalize_ex(
                sensor_msgs__NavSatFix__double_array_9* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void sensor_msgs__NavSatFix__double_array_9_finalize_w_params(
                sensor_msgs__NavSatFix__double_array_9* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void sensor_msgs__NavSatFix__double_array_9_finalize_optional_members(
                sensor_msgs__NavSatFix__double_array_9* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool sensor_msgs__NavSatFix__double_array_9_copy(
                sensor_msgs__NavSatFix__double_array_9* dst,
                const sensor_msgs__NavSatFix__double_array_9* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *NavSatFix_TYPENAME;

            struct NavSatFix_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NavSatFix_TypeSupport;
            class NavSatFix_DataWriter;
            class NavSatFix_DataReader;
            #endif

            class NavSatFix_ 
            {
              public:
                typedef struct NavSatFix_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NavSatFix_TypeSupport TypeSupport;
                typedef NavSatFix_DataWriter DataWriter;
                typedef NavSatFix_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                sensor_msgs::msg::dds_::NavSatStatus_   status_ ;
                DDS_Double   latitude_ ;
                DDS_Double   longitude_ ;
                DDS_Double   altitude_ ;
                sensor_msgs::msg::dds_::sensor_msgs__NavSatFix__double_array_9   position_covariance_ ;
                DDS_Octet   position_covariance_type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NavSatFix__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NavSatFix_Seq, NavSatFix_);

            NDDSUSERDllExport
            RTIBool NavSatFix__initialize(
                NavSatFix_* self);

            NDDSUSERDllExport
            RTIBool NavSatFix__initialize_ex(
                NavSatFix_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NavSatFix__initialize_w_params(
                NavSatFix_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NavSatFix__finalize(
                NavSatFix_* self);

            NDDSUSERDllExport
            void NavSatFix__finalize_ex(
                NavSatFix_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NavSatFix__finalize_w_params(
                NavSatFix_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NavSatFix__finalize_optional_members(
                NavSatFix_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NavSatFix__copy(
                NavSatFix_* dst,
                const NavSatFix_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* NavSatFix_ */

