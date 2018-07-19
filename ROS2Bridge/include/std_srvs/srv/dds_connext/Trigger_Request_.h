

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trigger_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Trigger_Request__1327902865_h
#define Trigger_Request__1327902865_h

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

            extern const char *Trigger_Request_TYPENAME;

            struct Trigger_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Trigger_Request_TypeSupport;
            class Trigger_Request_DataWriter;
            class Trigger_Request_DataReader;
            #endif

            class Trigger_Request_ 
            {
              public:
                typedef struct Trigger_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Trigger_Request_TypeSupport TypeSupport;
                typedef Trigger_Request_DataWriter DataWriter;
                typedef Trigger_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_std_srvs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Trigger_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Trigger_Request_Seq, Trigger_Request_);

            NDDSUSERDllExport
            RTIBool Trigger_Request__initialize(
                Trigger_Request_* self);

            NDDSUSERDllExport
            RTIBool Trigger_Request__initialize_ex(
                Trigger_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Trigger_Request__initialize_w_params(
                Trigger_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Trigger_Request__finalize(
                Trigger_Request_* self);

            NDDSUSERDllExport
            void Trigger_Request__finalize_ex(
                Trigger_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Trigger_Request__finalize_w_params(
                Trigger_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Trigger_Request__finalize_optional_members(
                Trigger_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Trigger_Request__copy(
                Trigger_Request_* dst,
                const Trigger_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_std_srvs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace std_srvs  */

#endif /* Trigger_Request_ */

