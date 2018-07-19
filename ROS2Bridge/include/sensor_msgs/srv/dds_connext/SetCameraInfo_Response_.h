

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetCameraInfo_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetCameraInfo_Response__1952619663_h
#define SetCameraInfo_Response__1952619663_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace sensor_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetCameraInfo_Response_TYPENAME;

            struct SetCameraInfo_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetCameraInfo_Response_TypeSupport;
            class SetCameraInfo_Response_DataWriter;
            class SetCameraInfo_Response_DataReader;
            #endif

            class SetCameraInfo_Response_ 
            {
              public:
                typedef struct SetCameraInfo_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetCameraInfo_Response_TypeSupport TypeSupport;
                typedef SetCameraInfo_Response_DataWriter DataWriter;
                typedef SetCameraInfo_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetCameraInfo_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetCameraInfo_Response_Seq, SetCameraInfo_Response_);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__initialize(
                SetCameraInfo_Response_* self);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__initialize_ex(
                SetCameraInfo_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__initialize_w_params(
                SetCameraInfo_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize(
                SetCameraInfo_Response_* self);

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize_ex(
                SetCameraInfo_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize_w_params(
                SetCameraInfo_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize_optional_members(
                SetCameraInfo_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__copy(
                SetCameraInfo_Response_* dst,
                const SetCameraInfo_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace sensor_msgs  */

#endif /* SetCameraInfo_Response_ */

