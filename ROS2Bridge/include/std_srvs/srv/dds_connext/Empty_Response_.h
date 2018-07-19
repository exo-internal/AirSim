

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Empty_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Empty_Response__2129079041_h
#define Empty_Response__2129079041_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace std_srvs {
    namespace srv {
        namespace dds_ {

            extern const char *Empty_Response_TYPENAME;

            struct Empty_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Empty_Response_TypeSupport;
            class Empty_Response_DataWriter;
            class Empty_Response_DataReader;
            #endif

            class Empty_Response_ 
            {
              public:
                typedef struct Empty_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Empty_Response_TypeSupport TypeSupport;
                typedef Empty_Response_DataWriter DataWriter;
                typedef Empty_Response_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_std_srvs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Empty_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Empty_Response_Seq, Empty_Response_);

            NDDSUSERDllExport
            RTIBool Empty_Response__initialize(
                Empty_Response_* self);

            NDDSUSERDllExport
            RTIBool Empty_Response__initialize_ex(
                Empty_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Empty_Response__initialize_w_params(
                Empty_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Empty_Response__finalize(
                Empty_Response_* self);

            NDDSUSERDllExport
            void Empty_Response__finalize_ex(
                Empty_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Empty_Response__finalize_w_params(
                Empty_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Empty_Response__finalize_optional_members(
                Empty_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Empty_Response__copy(
                Empty_Response_* dst,
                const Empty_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_std_srvs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace std_srvs  */

#endif /* Empty_Response_ */

