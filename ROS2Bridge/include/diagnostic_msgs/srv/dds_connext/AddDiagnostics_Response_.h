

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddDiagnostics_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AddDiagnostics_Response__1503733797_h
#define AddDiagnostics_Response__1503733797_h

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

            extern const char *AddDiagnostics_Response_TYPENAME;

            struct AddDiagnostics_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AddDiagnostics_Response_TypeSupport;
            class AddDiagnostics_Response_DataWriter;
            class AddDiagnostics_Response_DataReader;
            #endif

            class AddDiagnostics_Response_ 
            {
              public:
                typedef struct AddDiagnostics_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AddDiagnostics_Response_TypeSupport TypeSupport;
                typedef AddDiagnostics_Response_DataWriter DataWriter;
                typedef AddDiagnostics_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_diagnostic_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AddDiagnostics_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AddDiagnostics_Response_Seq, AddDiagnostics_Response_);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__initialize(
                AddDiagnostics_Response_* self);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__initialize_ex(
                AddDiagnostics_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__initialize_w_params(
                AddDiagnostics_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize(
                AddDiagnostics_Response_* self);

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize_ex(
                AddDiagnostics_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize_w_params(
                AddDiagnostics_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AddDiagnostics_Response__finalize_optional_members(
                AddDiagnostics_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AddDiagnostics_Response__copy(
                AddDiagnostics_Response_* dst,
                const AddDiagnostics_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_diagnostic_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace diagnostic_msgs  */

#endif /* AddDiagnostics_Response_ */

