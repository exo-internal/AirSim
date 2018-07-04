

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from State_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef State__1763804942_h
#define State__1763804942_h

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
            static const DDS_Octet State__PRIMARY_STATE_UNKNOWN= 0;
            static const DDS_Octet State__PRIMARY_STATE_UNCONFIGURED= 1;
            static const DDS_Octet State__PRIMARY_STATE_INACTIVE= 2;
            static const DDS_Octet State__PRIMARY_STATE_ACTIVE= 3;
            static const DDS_Octet State__PRIMARY_STATE_FINALIZED= 4;
            static const DDS_Octet State__TRANSITION_STATE_CONFIGURING= 10;
            static const DDS_Octet State__TRANSITION_STATE_CLEANINGUP= 11;
            static const DDS_Octet State__TRANSITION_STATE_SHUTTINGDOWN= 12;
            static const DDS_Octet State__TRANSITION_STATE_ACTIVATING= 13;
            static const DDS_Octet State__TRANSITION_STATE_DEACTIVATING= 14;
            static const DDS_Octet State__TRANSITION_STATE_ERRORPROCESSING= 15;

            extern const char *State_TYPENAME;

            struct State_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class State_TypeSupport;
            class State_DataWriter;
            class State_DataReader;
            #endif

            class State_ 
            {
              public:
                typedef struct State_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef State_TypeSupport TypeSupport;
                typedef State_DataWriter DataWriter;
                typedef State_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* State__get_typecode(void); /* Type code */

            DDS_SEQUENCE(State_Seq, State_);

            NDDSUSERDllExport
            RTIBool State__initialize(
                State_* self);

            NDDSUSERDllExport
            RTIBool State__initialize_ex(
                State_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool State__initialize_w_params(
                State_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void State__finalize(
                State_* self);

            NDDSUSERDllExport
            void State__finalize_ex(
                State_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void State__finalize_w_params(
                State_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void State__finalize_optional_members(
                State_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool State__copy(
                State_* dst,
                const State_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_lifecycle_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace lifecycle_msgs  */

#endif /* State_ */

