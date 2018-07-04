

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Transition_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Transition__1322293758_h
#define Transition__1322293758_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace lifecycle_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet Transition__TRANSITION_CREATE= 0;
            static const DDS_Octet Transition__TRANSITION_CONFIGURE= 1;
            static const DDS_Octet Transition__TRANSITION_CLEANUP= 2;
            static const DDS_Octet Transition__TRANSITION_ACTIVATE= 3;
            static const DDS_Octet Transition__TRANSITION_DEACTIVATE= 4;
            static const DDS_Octet Transition__TRANSITION_SHUTDOWN= 5;
            static const DDS_Octet Transition__TRANSITION_DESTROY= 6;
            static const DDS_Octet Transition__TRANSITION_ON_CONFIGURE_SUCCESS= 10;
            static const DDS_Octet Transition__TRANSITION_ON_CONFIGURE_FAILURE= 11;
            static const DDS_Octet Transition__TRANSITION_ON_CONFIGURE_ERROR= 12;
            static const DDS_Octet Transition__TRANSITION_ON_CLEANUP_SUCCESS= 20;
            static const DDS_Octet Transition__TRANSITION_ON_CLEANUP_FAILURE= 21;
            static const DDS_Octet Transition__TRANSITION_ON_CLEANUP_ERROR= 22;
            static const DDS_Octet Transition__TRANSITION_ON_ACTIVATE_SUCCESS= 30;
            static const DDS_Octet Transition__TRANSITION_ON_ACTIVATE_FAILURE= 31;
            static const DDS_Octet Transition__TRANSITION_ON_ACTIVATE_ERROR= 32;
            static const DDS_Octet Transition__TRANSITION_ON_DEACTIVATE_SUCCESS= 40;
            static const DDS_Octet Transition__TRANSITION_ON_DEACTIVATE_FAILURE= 41;
            static const DDS_Octet Transition__TRANSITION_ON_DEACTIVATE_ERROR= 42;
            static const DDS_Octet Transition__TRANSITION_UNCONFIGURED_SHUTDOWN= 50;
            static const DDS_Octet Transition__TRANSITION_INACTIVE_SHUTDOWN= 51;
            static const DDS_Octet Transition__TRANSITION_ACTIVE_SHUTDOWN= 52;
            static const DDS_Octet Transition__TRANSITION_ON_SHUTDOWN_SUCCESS= 53;
            static const DDS_Octet Transition__TRANSITION_ON_SHUTDOWN_FAILURE= 54;
            static const DDS_Octet Transition__TRANSITION_ON_SHUTDOWN_ERROR= 55;
            static const DDS_Octet Transition__TRANSITION_ON_ERROR_SUCCESS= 60;
            static const DDS_Octet Transition__TRANSITION_ON_ERROR_FAILURE= 61;
            static const DDS_Octet Transition__TRANSITION_ON_ERROR_ERROR= 62;
            static const DDS_Octet Transition__TRANSITION_CALLBACK_SUCCESS= 97;
            static const DDS_Octet Transition__TRANSITION_CALLBACK_FAILURE= 98;
            static const DDS_Octet Transition__TRANSITION_CALLBACK_ERROR= 99;

            extern const char *Transition_TYPENAME;

            struct Transition_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Transition_TypeSupport;
            class Transition_DataWriter;
            class Transition_DataReader;
            #endif

            class Transition_ 
            {
              public:
                typedef struct Transition_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Transition_TypeSupport TypeSupport;
                typedef Transition_DataWriter DataWriter;
                typedef Transition_DataReader DataReader;
                #endif

                DDS_Octet   id_ ;
                DDS_Char *   label_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Transition__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Transition_Seq, Transition_);

            NDDSUSERDllExport
            RTIBool Transition__initialize(
                Transition_* self);

            NDDSUSERDllExport
            RTIBool Transition__initialize_ex(
                Transition_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Transition__initialize_w_params(
                Transition_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Transition__finalize(
                Transition_* self);

            NDDSUSERDllExport
            void Transition__finalize_ex(
                Transition_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Transition__finalize_w_params(
                Transition_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Transition__finalize_optional_members(
                Transition_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Transition__copy(
                Transition_* dst,
                const Transition_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace lifecycle_msgs  */

#endif /* Transition_ */

