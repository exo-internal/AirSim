

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChangeState_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ChangeState_Response__1224135213_h
#define ChangeState_Response__1224135213_h

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

            extern const char *ChangeState_Response_TYPENAME;

            struct ChangeState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ChangeState_Response_TypeSupport;
            class ChangeState_Response_DataWriter;
            class ChangeState_Response_DataReader;
            #endif

            class ChangeState_Response_ 
            {
              public:
                typedef struct ChangeState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ChangeState_Response_TypeSupport TypeSupport;
                typedef ChangeState_Response_DataWriter DataWriter;
                typedef ChangeState_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ChangeState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ChangeState_Response_Seq, ChangeState_Response_);

            NDDSUSERDllExport
            RTIBool ChangeState_Response__initialize(
                ChangeState_Response_* self);

            NDDSUSERDllExport
            RTIBool ChangeState_Response__initialize_ex(
                ChangeState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ChangeState_Response__initialize_w_params(
                ChangeState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ChangeState_Response__finalize(
                ChangeState_Response_* self);

            NDDSUSERDllExport
            void ChangeState_Response__finalize_ex(
                ChangeState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ChangeState_Response__finalize_w_params(
                ChangeState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ChangeState_Response__finalize_optional_members(
                ChangeState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ChangeState_Response__copy(
                ChangeState_Response_* dst,
                const ChangeState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* ChangeState_Response_ */

