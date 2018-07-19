

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatStatus__1134450584_h
#define NavSatStatus__1134450584_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet NavSatStatus__STATUS_NO_FIX= 255;
            static const DDS_Octet NavSatStatus__STATUS_FIX= 0;
            static const DDS_Octet NavSatStatus__STATUS_SBAS_FIX= 1;
            static const DDS_Octet NavSatStatus__STATUS_GBAS_FIX= 2;
            static const DDS_UnsignedShort NavSatStatus__SERVICE_GPS= 1;
            static const DDS_UnsignedShort NavSatStatus__SERVICE_GLONASS= 2;
            static const DDS_UnsignedShort NavSatStatus__SERVICE_COMPASS= 4;
            static const DDS_UnsignedShort NavSatStatus__SERVICE_GALILEO= 8;

            extern const char *NavSatStatus_TYPENAME;

            struct NavSatStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NavSatStatus_TypeSupport;
            class NavSatStatus_DataWriter;
            class NavSatStatus_DataReader;
            #endif

            class NavSatStatus_ 
            {
              public:
                typedef struct NavSatStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NavSatStatus_TypeSupport TypeSupport;
                typedef NavSatStatus_DataWriter DataWriter;
                typedef NavSatStatus_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                DDS_UnsignedShort   service_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NavSatStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NavSatStatus_Seq, NavSatStatus_);

            NDDSUSERDllExport
            RTIBool NavSatStatus__initialize(
                NavSatStatus_* self);

            NDDSUSERDllExport
            RTIBool NavSatStatus__initialize_ex(
                NavSatStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NavSatStatus__initialize_w_params(
                NavSatStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NavSatStatus__finalize(
                NavSatStatus_* self);

            NDDSUSERDllExport
            void NavSatStatus__finalize_ex(
                NavSatStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NavSatStatus__finalize_w_params(
                NavSatStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NavSatStatus__finalize_optional_members(
                NavSatStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NavSatStatus__copy(
                NavSatStatus_* dst,
                const NavSatStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* NavSatStatus_ */

