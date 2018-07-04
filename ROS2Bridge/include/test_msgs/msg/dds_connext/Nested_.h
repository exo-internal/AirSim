

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Nested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Nested__96894975_h
#define Nested__96894975_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/Primitives_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Nested_TYPENAME;

            struct Nested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Nested_TypeSupport;
            class Nested_DataWriter;
            class Nested_DataReader;
            #endif

            class Nested_ 
            {
              public:
                typedef struct Nested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Nested_TypeSupport TypeSupport;
                typedef Nested_DataWriter DataWriter;
                typedef Nested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Primitives_   primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Nested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Nested_Seq, Nested_);

            NDDSUSERDllExport
            RTIBool Nested__initialize(
                Nested_* self);

            NDDSUSERDllExport
            RTIBool Nested__initialize_ex(
                Nested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Nested__initialize_w_params(
                Nested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Nested__finalize(
                Nested_* self);

            NDDSUSERDllExport
            void Nested__finalize_ex(
                Nested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Nested__finalize_w_params(
                Nested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Nested__finalize_optional_members(
                Nested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Nested__copy(
                Nested_* dst,
                const Nested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Nested_ */

