

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SelfTest_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SelfTest_Request__1799012811_h
#define SelfTest_Request__1799012811_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace diagnostic_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SelfTest_Request_TYPENAME;

            struct SelfTest_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SelfTest_Request_TypeSupport;
            class SelfTest_Request_DataWriter;
            class SelfTest_Request_DataReader;
            #endif

            class SelfTest_Request_ 
            {
              public:
                typedef struct SelfTest_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SelfTest_Request_TypeSupport TypeSupport;
                typedef SelfTest_Request_DataWriter DataWriter;
                typedef SelfTest_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_diagnostic_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SelfTest_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SelfTest_Request_Seq, SelfTest_Request_);

            NDDSUSERDllExport
            RTIBool SelfTest_Request__initialize(
                SelfTest_Request_* self);

            NDDSUSERDllExport
            RTIBool SelfTest_Request__initialize_ex(
                SelfTest_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SelfTest_Request__initialize_w_params(
                SelfTest_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SelfTest_Request__finalize(
                SelfTest_Request_* self);

            NDDSUSERDllExport
            void SelfTest_Request__finalize_ex(
                SelfTest_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SelfTest_Request__finalize_w_params(
                SelfTest_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SelfTest_Request__finalize_optional_members(
                SelfTest_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SelfTest_Request__copy(
                SelfTest_Request_* dst,
                const SelfTest_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_diagnostic_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace diagnostic_msgs  */

#endif /* SelfTest_Request_ */

