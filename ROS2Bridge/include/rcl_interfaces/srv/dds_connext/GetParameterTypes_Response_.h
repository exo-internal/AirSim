

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetParameterTypes_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetParameterTypes_Response__1069036172_h
#define GetParameterTypes_Response__1069036172_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *GetParameterTypes_Response_TYPENAME;

            struct GetParameterTypes_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetParameterTypes_Response_TypeSupport;
            class GetParameterTypes_Response_DataWriter;
            class GetParameterTypes_Response_DataReader;
            #endif

            class GetParameterTypes_Response_ 
            {
              public:
                typedef struct GetParameterTypes_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetParameterTypes_Response_TypeSupport TypeSupport;
                typedef GetParameterTypes_Response_DataWriter DataWriter;
                typedef GetParameterTypes_Response_DataReader DataReader;
                #endif

                DDS_OctetSeq  types_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_rcl_interfaces)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetParameterTypes_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetParameterTypes_Response_Seq, GetParameterTypes_Response_);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__initialize(
                GetParameterTypes_Response_* self);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__initialize_ex(
                GetParameterTypes_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__initialize_w_params(
                GetParameterTypes_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize(
                GetParameterTypes_Response_* self);

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize_ex(
                GetParameterTypes_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize_w_params(
                GetParameterTypes_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize_optional_members(
                GetParameterTypes_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__copy(
                GetParameterTypes_Response_* dst,
                const GetParameterTypes_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_rcl_interfaces)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* GetParameterTypes_Response_ */

