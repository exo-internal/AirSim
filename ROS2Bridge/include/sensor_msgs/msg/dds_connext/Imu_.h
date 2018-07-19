

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imu_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Imu__231392336_h
#define Imu__231392336_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Double   sensor_msgs__Imu__double_array_9 [9];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* sensor_msgs__Imu__double_array_9_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(sensor_msgs__Imu__double_array_9Seq, sensor_msgs__Imu__double_array_9);

            NDDSUSERDllExport
            RTIBool sensor_msgs__Imu__double_array_9_initialize(
                sensor_msgs__Imu__double_array_9* self);

            NDDSUSERDllExport
            RTIBool sensor_msgs__Imu__double_array_9_initialize_ex(
                sensor_msgs__Imu__double_array_9* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool sensor_msgs__Imu__double_array_9_initialize_w_params(
                sensor_msgs__Imu__double_array_9* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void sensor_msgs__Imu__double_array_9_finalize(
                sensor_msgs__Imu__double_array_9* self);

            NDDSUSERDllExport
            void sensor_msgs__Imu__double_array_9_finalize_ex(
                sensor_msgs__Imu__double_array_9* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void sensor_msgs__Imu__double_array_9_finalize_w_params(
                sensor_msgs__Imu__double_array_9* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void sensor_msgs__Imu__double_array_9_finalize_optional_members(
                sensor_msgs__Imu__double_array_9* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool sensor_msgs__Imu__double_array_9_copy(
                sensor_msgs__Imu__double_array_9* dst,
                const sensor_msgs__Imu__double_array_9* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *Imu_TYPENAME;

            struct Imu_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Imu_TypeSupport;
            class Imu_DataWriter;
            class Imu_DataReader;
            #endif

            class Imu_ 
            {
              public:
                typedef struct Imu_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Imu_TypeSupport TypeSupport;
                typedef Imu_DataWriter DataWriter;
                typedef Imu_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9   orientation_covariance_ ;
                geometry_msgs::msg::dds_::Vector3_   angular_velocity_ ;
                sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9   angular_velocity_covariance_ ;
                geometry_msgs::msg::dds_::Vector3_   linear_acceleration_ ;
                sensor_msgs::msg::dds_::sensor_msgs__Imu__double_array_9   linear_acceleration_covariance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Imu__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Imu_Seq, Imu_);

            NDDSUSERDllExport
            RTIBool Imu__initialize(
                Imu_* self);

            NDDSUSERDllExport
            RTIBool Imu__initialize_ex(
                Imu_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Imu__initialize_w_params(
                Imu_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Imu__finalize(
                Imu_* self);

            NDDSUSERDllExport
            void Imu__finalize_ex(
                Imu_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Imu__finalize_w_params(
                Imu_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Imu__finalize_optional_members(
                Imu_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Imu__copy(
                Imu_* dst,
                const Imu_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Imu_ */

