

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StaticArrayNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StaticArrayNested__183472668_h
#define StaticArrayNested__183472668_h

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

            typedef    test_msgs::msg::dds_::Primitives_   test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 [4];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Seq, test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_ex(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_w_params(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_ex(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_w_params(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_optional_members(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_copy(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* dst,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *StaticArrayNested_TYPENAME;

            struct StaticArrayNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StaticArrayNested_TypeSupport;
            class StaticArrayNested_DataWriter;
            class StaticArrayNested_DataReader;
            #endif

            class StaticArrayNested_ 
            {
              public:
                typedef struct StaticArrayNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StaticArrayNested_TypeSupport TypeSupport;
                typedef StaticArrayNested_DataWriter DataWriter;
                typedef StaticArrayNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4   primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StaticArrayNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StaticArrayNested_Seq, StaticArrayNested_);

            NDDSUSERDllExport
            RTIBool StaticArrayNested__initialize(
                StaticArrayNested_* self);

            NDDSUSERDllExport
            RTIBool StaticArrayNested__initialize_ex(
                StaticArrayNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StaticArrayNested__initialize_w_params(
                StaticArrayNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StaticArrayNested__finalize(
                StaticArrayNested_* self);

            NDDSUSERDllExport
            void StaticArrayNested__finalize_ex(
                StaticArrayNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StaticArrayNested__finalize_w_params(
                StaticArrayNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StaticArrayNested__finalize_optional_members(
                StaticArrayNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StaticArrayNested__copy(
                StaticArrayNested_* dst,
                const StaticArrayNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* StaticArrayNested_ */

