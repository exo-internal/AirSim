

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfTest_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SelfTest_Response__57803512_h
#define SelfTest_Response__57803512_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "diagnostic_msgs/msg/dds_connext/DiagnosticStatus_.h"
namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SelfTest_Response_TYPENAME;

            struct SelfTest_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SelfTest_Response_TypeSupport;
            class SelfTest_Response_DataWriter;
            class SelfTest_Response_DataReader;
            #endif

            class SelfTest_Response_ 
            {
              public:
                typedef struct SelfTest_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SelfTest_Response_TypeSupport TypeSupport;
                typedef SelfTest_Response_DataWriter DataWriter;
                typedef SelfTest_Response_DataReader DataReader;
                #endif

                DDS_Char *   id_ ;
                DDS_Octet   passed_ ;
                diagnostic_msgs::msg::dds_::DiagnosticStatus_Seq  status_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_diagnostic_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SelfTest_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SelfTest_Response_Seq, SelfTest_Response_);

            NDDSUSERDllExport
            RTIBool SelfTest_Response__initialize(
                SelfTest_Response_* self);

            NDDSUSERDllExport
            RTIBool SelfTest_Response__initialize_ex(
                SelfTest_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SelfTest_Response__initialize_w_params(
                SelfTest_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SelfTest_Response__finalize(
                SelfTest_Response_* self);

            NDDSUSERDllExport
            void SelfTest_Response__finalize_ex(
                SelfTest_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SelfTest_Response__finalize_w_params(
                SelfTest_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SelfTest_Response__finalize_optional_members(
                SelfTest_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SelfTest_Response__copy(
                SelfTest_Response_* dst,
                const SelfTest_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_diagnostic_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace diagnostic_msgs  */

#endif /* SelfTest_Response_ */

