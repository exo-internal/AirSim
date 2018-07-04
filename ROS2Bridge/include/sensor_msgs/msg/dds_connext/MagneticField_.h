

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagneticField_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MagneticField__1820885452_h
#define MagneticField__1820885452_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Double   sensor_msgs__MagneticField__double_array_9 [9];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* sensor_msgs__MagneticField__double_array_9_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(sensor_msgs__MagneticField__double_array_9Seq, sensor_msgs__MagneticField__double_array_9);

            NDDSUSERDllExport
            RTIBool sensor_msgs__MagneticField__double_array_9_initialize(
                sensor_msgs__MagneticField__double_array_9* self);

            NDDSUSERDllExport
            RTIBool sensor_msgs__MagneticField__double_array_9_initialize_ex(
                sensor_msgs__MagneticField__double_array_9* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool sensor_msgs__MagneticField__double_array_9_initialize_w_params(
                sensor_msgs__MagneticField__double_array_9* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void sensor_msgs__MagneticField__double_array_9_finalize(
                sensor_msgs__MagneticField__double_array_9* self);

            NDDSUSERDllExport
            void sensor_msgs__MagneticField__double_array_9_finalize_ex(
                sensor_msgs__MagneticField__double_array_9* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void sensor_msgs__MagneticField__double_array_9_finalize_w_params(
                sensor_msgs__MagneticField__double_array_9* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void sensor_msgs__MagneticField__double_array_9_finalize_optional_members(
                sensor_msgs__MagneticField__double_array_9* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool sensor_msgs__MagneticField__double_array_9_copy(
                sensor_msgs__MagneticField__double_array_9* dst,
                const sensor_msgs__MagneticField__double_array_9* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *MagneticField_TYPENAME;

            struct MagneticField_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MagneticField_TypeSupport;
            class MagneticField_DataWriter;
            class MagneticField_DataReader;
            #endif

            class MagneticField_ 
            {
              public:
                typedef struct MagneticField_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MagneticField_TypeSupport TypeSupport;
                typedef MagneticField_DataWriter DataWriter;
                typedef MagneticField_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Vector3_   magnetic_field_ ;
                sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9   magnetic_field_covariance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MagneticField__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MagneticField_Seq, MagneticField_);

            NDDSUSERDllExport
            RTIBool MagneticField__initialize(
                MagneticField_* self);

            NDDSUSERDllExport
            RTIBool MagneticField__initialize_ex(
                MagneticField_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MagneticField__initialize_w_params(
                MagneticField_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MagneticField__finalize(
                MagneticField_* self);

            NDDSUSERDllExport
            void MagneticField__finalize_ex(
                MagneticField_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MagneticField__finalize_w_params(
                MagneticField_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MagneticField__finalize_optional_members(
                MagneticField_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MagneticField__copy(
                MagneticField_* dst,
                const MagneticField_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* MagneticField_ */

