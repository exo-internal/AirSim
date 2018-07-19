

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetParameters_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetParameters_Request__2026068864_h
#define SetParameters_Request__2026068864_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/Parameter_.h"
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *SetParameters_Request_TYPENAME;

            struct SetParameters_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetParameters_Request_TypeSupport;
            class SetParameters_Request_DataWriter;
            class SetParameters_Request_DataReader;
            #endif

            class SetParameters_Request_ 
            {
              public:
                typedef struct SetParameters_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetParameters_Request_TypeSupport TypeSupport;
                typedef SetParameters_Request_DataWriter DataWriter;
                typedef SetParameters_Request_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::Parameter_Seq  parameters_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_rcl_interfaces)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetParameters_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetParameters_Request_Seq, SetParameters_Request_);

            NDDSUSERDllExport
            RTIBool SetParameters_Request__initialize(
                SetParameters_Request_* self);

            NDDSUSERDllExport
            RTIBool SetParameters_Request__initialize_ex(
                SetParameters_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetParameters_Request__initialize_w_params(
                SetParameters_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetParameters_Request__finalize(
                SetParameters_Request_* self);

            NDDSUSERDllExport
            void SetParameters_Request__finalize_ex(
                SetParameters_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetParameters_Request__finalize_w_params(
                SetParameters_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetParameters_Request__finalize_optional_members(
                SetParameters_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetParameters_Request__copy(
                SetParameters_Request_* dst,
                const SetParameters_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_rcl_interfaces)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* SetParameters_Request_ */

