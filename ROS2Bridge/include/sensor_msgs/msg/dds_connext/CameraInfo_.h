

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraInfo__1321034488_h
#define CameraInfo__1321034488_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/RegionOfInterest_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Double   sensor_msgs__CameraInfo__double_array_9 [9];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* sensor_msgs__CameraInfo__double_array_9_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(sensor_msgs__CameraInfo__double_array_9Seq, sensor_msgs__CameraInfo__double_array_9);

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_9_initialize(
                sensor_msgs__CameraInfo__double_array_9* self);

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_9_initialize_ex(
                sensor_msgs__CameraInfo__double_array_9* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_9_initialize_w_params(
                sensor_msgs__CameraInfo__double_array_9* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_9_finalize(
                sensor_msgs__CameraInfo__double_array_9* self);

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_9_finalize_ex(
                sensor_msgs__CameraInfo__double_array_9* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_9_finalize_w_params(
                sensor_msgs__CameraInfo__double_array_9* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_9_finalize_optional_members(
                sensor_msgs__CameraInfo__double_array_9* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_9_copy(
                sensor_msgs__CameraInfo__double_array_9* dst,
                const sensor_msgs__CameraInfo__double_array_9* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Double   sensor_msgs__CameraInfo__double_array_12 [12];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* sensor_msgs__CameraInfo__double_array_12_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(sensor_msgs__CameraInfo__double_array_12Seq, sensor_msgs__CameraInfo__double_array_12);

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_12_initialize(
                sensor_msgs__CameraInfo__double_array_12* self);

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_12_initialize_ex(
                sensor_msgs__CameraInfo__double_array_12* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_12_initialize_w_params(
                sensor_msgs__CameraInfo__double_array_12* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_12_finalize(
                sensor_msgs__CameraInfo__double_array_12* self);

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_12_finalize_ex(
                sensor_msgs__CameraInfo__double_array_12* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_12_finalize_w_params(
                sensor_msgs__CameraInfo__double_array_12* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void sensor_msgs__CameraInfo__double_array_12_finalize_optional_members(
                sensor_msgs__CameraInfo__double_array_12* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool sensor_msgs__CameraInfo__double_array_12_copy(
                sensor_msgs__CameraInfo__double_array_12* dst,
                const sensor_msgs__CameraInfo__double_array_12* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *CameraInfo_TYPENAME;

            struct CameraInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CameraInfo_TypeSupport;
            class CameraInfo_DataWriter;
            class CameraInfo_DataReader;
            #endif

            class CameraInfo_ 
            {
              public:
                typedef struct CameraInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CameraInfo_TypeSupport TypeSupport;
                typedef CameraInfo_DataWriter DataWriter;
                typedef CameraInfo_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   height_ ;
                DDS_UnsignedLong   width_ ;
                DDS_Char *   distortion_model_ ;
                DDS_DoubleSeq  d_ ;
                sensor_msgs::msg::dds_::sensor_msgs__CameraInfo__double_array_9   k_ ;
                sensor_msgs::msg::dds_::sensor_msgs__CameraInfo__double_array_9   r_ ;
                sensor_msgs::msg::dds_::sensor_msgs__CameraInfo__double_array_12   p_ ;
                DDS_UnsignedLong   binning_x_ ;
                DDS_UnsignedLong   binning_y_ ;
                sensor_msgs::msg::dds_::RegionOfInterest_   roi_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CameraInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CameraInfo_Seq, CameraInfo_);

            NDDSUSERDllExport
            RTIBool CameraInfo__initialize(
                CameraInfo_* self);

            NDDSUSERDllExport
            RTIBool CameraInfo__initialize_ex(
                CameraInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CameraInfo__initialize_w_params(
                CameraInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CameraInfo__finalize(
                CameraInfo_* self);

            NDDSUSERDllExport
            void CameraInfo__finalize_ex(
                CameraInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CameraInfo__finalize_w_params(
                CameraInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CameraInfo__finalize_optional_members(
                CameraInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CameraInfo__copy(
                CameraInfo_* dst,
                const CameraInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* CameraInfo_ */

