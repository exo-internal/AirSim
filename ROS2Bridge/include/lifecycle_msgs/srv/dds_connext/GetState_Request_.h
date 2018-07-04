

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetState_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetState_Request__2132155270_h
#define GetState_Request__2132155270_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetState_Request_TYPENAME;

            struct GetState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetState_Request_TypeSupport;
            class GetState_Request_DataWriter;
            class GetState_Request_DataReader;
            #endif

            class GetState_Request_ 
            {
              public:
                typedef struct GetState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetState_Request_TypeSupport TypeSupport;
                typedef GetState_Request_DataWriter DataWriter;
                typedef GetState_Request_DataReader DataReader;
                #endif

                DDS_Char *   node_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetState_Request_Seq, GetState_Request_);

            NDDSUSERDllExport
            RTIBool GetState_Request__initialize(
                GetState_Request_* self);

            NDDSUSERDllExport
            RTIBool GetState_Request__initialize_ex(
                GetState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetState_Request__initialize_w_params(
                GetState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetState_Request__finalize(
                GetState_Request_* self);

            NDDSUSERDllExport
            void GetState_Request__finalize_ex(
                GetState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetState_Request__finalize_w_params(
                GetState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetState_Request__finalize_optional_members(
                GetState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetState_Request__copy(
                GetState_Request_* dst,
                const GetState_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* GetState_Request_ */

