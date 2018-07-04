

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistWithCovariance__1930665589_h
#define TwistWithCovariance__1930665589_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Twist_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Double   geometry_msgs__TwistWithCovariance__double_array_36 [36];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* geometry_msgs__TwistWithCovariance__double_array_36_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(geometry_msgs__TwistWithCovariance__double_array_36Seq, geometry_msgs__TwistWithCovariance__double_array_36);

            NDDSUSERDllExport
            RTIBool geometry_msgs__TwistWithCovariance__double_array_36_initialize(
                geometry_msgs__TwistWithCovariance__double_array_36* self);

            NDDSUSERDllExport
            RTIBool geometry_msgs__TwistWithCovariance__double_array_36_initialize_ex(
                geometry_msgs__TwistWithCovariance__double_array_36* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool geometry_msgs__TwistWithCovariance__double_array_36_initialize_w_params(
                geometry_msgs__TwistWithCovariance__double_array_36* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void geometry_msgs__TwistWithCovariance__double_array_36_finalize(
                geometry_msgs__TwistWithCovariance__double_array_36* self);

            NDDSUSERDllExport
            void geometry_msgs__TwistWithCovariance__double_array_36_finalize_ex(
                geometry_msgs__TwistWithCovariance__double_array_36* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void geometry_msgs__TwistWithCovariance__double_array_36_finalize_w_params(
                geometry_msgs__TwistWithCovariance__double_array_36* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void geometry_msgs__TwistWithCovariance__double_array_36_finalize_optional_members(
                geometry_msgs__TwistWithCovariance__double_array_36* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool geometry_msgs__TwistWithCovariance__double_array_36_copy(
                geometry_msgs__TwistWithCovariance__double_array_36* dst,
                const geometry_msgs__TwistWithCovariance__double_array_36* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *TwistWithCovariance_TYPENAME;

            struct TwistWithCovariance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TwistWithCovariance_TypeSupport;
            class TwistWithCovariance_DataWriter;
            class TwistWithCovariance_DataReader;
            #endif

            class TwistWithCovariance_ 
            {
              public:
                typedef struct TwistWithCovariance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TwistWithCovariance_TypeSupport TypeSupport;
                typedef TwistWithCovariance_DataWriter DataWriter;
                typedef TwistWithCovariance_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Twist_   twist_ ;
                geometry_msgs::msg::dds_::geometry_msgs__TwistWithCovariance__double_array_36   covariance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TwistWithCovariance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TwistWithCovariance_Seq, TwistWithCovariance_);

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__initialize(
                TwistWithCovariance_* self);

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__initialize_ex(
                TwistWithCovariance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__initialize_w_params(
                TwistWithCovariance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TwistWithCovariance__finalize(
                TwistWithCovariance_* self);

            NDDSUSERDllExport
            void TwistWithCovariance__finalize_ex(
                TwistWithCovariance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TwistWithCovariance__finalize_w_params(
                TwistWithCovariance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TwistWithCovariance__finalize_optional_members(
                TwistWithCovariance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__copy(
                TwistWithCovariance_* dst,
                const TwistWithCovariance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_geometry_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* TwistWithCovariance_ */

