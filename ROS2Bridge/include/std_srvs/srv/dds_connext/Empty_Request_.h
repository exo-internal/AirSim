

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Empty_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Empty_Request__1454392082_h
#define Empty_Request__1454392082_h

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

            extern const char *Empty_Request_TYPENAME;

            struct Empty_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Empty_Request_TypeSupport;
            class Empty_Request_DataWriter;
            class Empty_Request_DataReader;
            #endif

            class Empty_Request_ 
            {
              public:
                typedef struct Empty_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Empty_Request_TypeSupport TypeSupport;
                typedef Empty_Request_DataWriter DataWriter;
                typedef Empty_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_std_srvs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Empty_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Empty_Request_Seq, Empty_Request_);

            NDDSUSERDllExport
            RTIBool Empty_Request__initialize(
                Empty_Request_* self);

            NDDSUSERDllExport
            RTIBool Empty_Request__initialize_ex(
                Empty_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Empty_Request__initialize_w_params(
                Empty_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Empty_Request__finalize(
                Empty_Request_* self);

            NDDSUSERDllExport
            void Empty_Request__finalize_ex(
                Empty_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Empty_Request__finalize_w_params(
                Empty_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Empty_Request__finalize_optional_members(
                Empty_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Empty_Request__copy(
                Empty_Request_* dst,
                const Empty_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_std_srvs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace std_srvs  */

#endif /* Empty_Request_ */

