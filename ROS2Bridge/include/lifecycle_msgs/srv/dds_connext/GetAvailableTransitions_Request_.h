

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetAvailableTransitions_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetAvailableTransitions_Request__1705351663_h
#define GetAvailableTransitions_Request__1705351663_h

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

            extern const char *GetAvailableTransitions_Request_TYPENAME;

            struct GetAvailableTransitions_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetAvailableTransitions_Request_TypeSupport;
            class GetAvailableTransitions_Request_DataWriter;
            class GetAvailableTransitions_Request_DataReader;
            #endif

            class GetAvailableTransitions_Request_ 
            {
              public:
                typedef struct GetAvailableTransitions_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetAvailableTransitions_Request_TypeSupport TypeSupport;
                typedef GetAvailableTransitions_Request_DataWriter DataWriter;
                typedef GetAvailableTransitions_Request_DataReader DataReader;
                #endif

                DDS_Char *   node_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetAvailableTransitions_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetAvailableTransitions_Request_Seq, GetAvailableTransitions_Request_);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__initialize(
                GetAvailableTransitions_Request_* self);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__initialize_ex(
                GetAvailableTransitions_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__initialize_w_params(
                GetAvailableTransitions_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize(
                GetAvailableTransitions_Request_* self);

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize_ex(
                GetAvailableTransitions_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize_w_params(
                GetAvailableTransitions_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize_optional_members(
                GetAvailableTransitions_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__copy(
                GetAvailableTransitions_Request_* dst,
                const GetAvailableTransitions_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* GetAvailableTransitions_Request_ */

