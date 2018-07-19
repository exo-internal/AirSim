

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChangeState_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ChangeState_Request__1069129423_h
#define ChangeState_Request__1069129423_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "lifecycle_msgs/msg/dds_connext/Transition_.h"
namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ChangeState_Request_TYPENAME;

            struct ChangeState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ChangeState_Request_TypeSupport;
            class ChangeState_Request_DataWriter;
            class ChangeState_Request_DataReader;
            #endif

            class ChangeState_Request_ 
            {
              public:
                typedef struct ChangeState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ChangeState_Request_TypeSupport TypeSupport;
                typedef ChangeState_Request_DataWriter DataWriter;
                typedef ChangeState_Request_DataReader DataReader;
                #endif

                DDS_Char *   node_name_ ;
                lifecycle_msgs::msg::dds_::Transition_   transition_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ChangeState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ChangeState_Request_Seq, ChangeState_Request_);

            NDDSUSERDllExport
            RTIBool ChangeState_Request__initialize(
                ChangeState_Request_* self);

            NDDSUSERDllExport
            RTIBool ChangeState_Request__initialize_ex(
                ChangeState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ChangeState_Request__initialize_w_params(
                ChangeState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ChangeState_Request__finalize(
                ChangeState_Request_* self);

            NDDSUSERDllExport
            void ChangeState_Request__finalize_ex(
                ChangeState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ChangeState_Request__finalize_w_params(
                ChangeState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ChangeState_Request__finalize_optional_members(
                ChangeState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ChangeState_Request__copy(
                ChangeState_Request_* dst,
                const ChangeState_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* ChangeState_Request_ */

