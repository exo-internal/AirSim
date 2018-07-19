

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Builtins_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Builtins__1905983552_h
#define Builtins__1905983552_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Builtins_TYPENAME;

            struct Builtins_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Builtins_TypeSupport;
            class Builtins_DataWriter;
            class Builtins_DataReader;
            #endif

            class Builtins_ 
            {
              public:
                typedef struct Builtins_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Builtins_TypeSupport TypeSupport;
                typedef Builtins_DataWriter DataWriter;
                typedef Builtins_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Duration_   duration_value_ ;
                builtin_interfaces::msg::dds_::Time_   time_value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Builtins__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Builtins_Seq, Builtins_);

            NDDSUSERDllExport
            RTIBool Builtins__initialize(
                Builtins_* self);

            NDDSUSERDllExport
            RTIBool Builtins__initialize_ex(
                Builtins_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Builtins__initialize_w_params(
                Builtins_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Builtins__finalize(
                Builtins_* self);

            NDDSUSERDllExport
            void Builtins__finalize_ex(
                Builtins_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Builtins__finalize_w_params(
                Builtins_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Builtins__finalize_optional_members(
                Builtins_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Builtins__copy(
                Builtins_* dst,
                const Builtins_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Builtins_ */

