

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GoalStatus__1480109375_h
#define GoalStatus__1480109375_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "actionlib_msgs/msg/dds_connext/GoalID_.h"
namespace actionlib_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet GoalStatus__PENDING= 0;
            static const DDS_Octet GoalStatus__ACTIVE= 1;
            static const DDS_Octet GoalStatus__PREEMPTED= 2;
            static const DDS_Octet GoalStatus__SUCCEEDED= 3;
            static const DDS_Octet GoalStatus__ABORTED= 4;
            static const DDS_Octet GoalStatus__REJECTED= 5;
            static const DDS_Octet GoalStatus__PREEMPTING= 6;
            static const DDS_Octet GoalStatus__RECALLING= 7;
            static const DDS_Octet GoalStatus__RECALLED= 8;
            static const DDS_Octet GoalStatus__LOST= 9;

            extern const char *GoalStatus_TYPENAME;

            struct GoalStatus_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GoalStatus_TypeSupport;
            class GoalStatus_DataWriter;
            class GoalStatus_DataReader;
            #endif

            class GoalStatus_ 
            {
              public:
                typedef struct GoalStatus_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GoalStatus_TypeSupport TypeSupport;
                typedef GoalStatus_DataWriter DataWriter;
                typedef GoalStatus_DataReader DataReader;
                #endif

                actionlib_msgs::msg::dds_::GoalID_   goal_id_ ;
                DDS_Octet   status_ ;
                DDS_Char *   text_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_actionlib_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GoalStatus__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GoalStatus_Seq, GoalStatus_);

            NDDSUSERDllExport
            RTIBool GoalStatus__initialize(
                GoalStatus_* self);

            NDDSUSERDllExport
            RTIBool GoalStatus__initialize_ex(
                GoalStatus_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GoalStatus__initialize_w_params(
                GoalStatus_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GoalStatus__finalize(
                GoalStatus_* self);

            NDDSUSERDllExport
            void GoalStatus__finalize_ex(
                GoalStatus_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GoalStatus__finalize_w_params(
                GoalStatus_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GoalStatus__finalize_optional_members(
                GoalStatus_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GoalStatus__copy(
                GoalStatus_* dst,
                const GoalStatus_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_actionlib_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace actionlib_msgs  */

#endif /* GoalStatus_ */

