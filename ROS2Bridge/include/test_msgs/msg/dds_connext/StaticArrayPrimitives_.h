

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StaticArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StaticArrayPrimitives__1531885840_h
#define StaticArrayPrimitives__1531885840_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace test_msgs {
    namespace msg {
        namespace dds_ {
            typedef    DDS_Boolean   test_msgs__StaticArrayPrimitives__boolean_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__boolean_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__boolean_array_3Seq, test_msgs__StaticArrayPrimitives__boolean_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_initialize(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__boolean_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_copy(
                test_msgs__StaticArrayPrimitives__boolean_array_3* dst,
                const test_msgs__StaticArrayPrimitives__boolean_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Octet   test_msgs__StaticArrayPrimitives__octet_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__octet_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__octet_array_3Seq, test_msgs__StaticArrayPrimitives__octet_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_initialize(
                test_msgs__StaticArrayPrimitives__octet_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__octet_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__octet_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize(
                test_msgs__StaticArrayPrimitives__octet_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__octet_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__octet_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__octet_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_copy(
                test_msgs__StaticArrayPrimitives__octet_array_3* dst,
                const test_msgs__StaticArrayPrimitives__octet_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Char   test_msgs__StaticArrayPrimitives__char_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__char_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__char_array_3Seq, test_msgs__StaticArrayPrimitives__char_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_initialize(
                test_msgs__StaticArrayPrimitives__char_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__char_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__char_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__char_array_3_finalize(
                test_msgs__StaticArrayPrimitives__char_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__char_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__char_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__char_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__char_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__char_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__char_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_copy(
                test_msgs__StaticArrayPrimitives__char_array_3* dst,
                const test_msgs__StaticArrayPrimitives__char_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Float   test_msgs__StaticArrayPrimitives__float_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__float_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__float_array_3Seq, test_msgs__StaticArrayPrimitives__float_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_initialize(
                test_msgs__StaticArrayPrimitives__float_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__float_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__float_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__float_array_3_finalize(
                test_msgs__StaticArrayPrimitives__float_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__float_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__float_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__float_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__float_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__float_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__float_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_copy(
                test_msgs__StaticArrayPrimitives__float_array_3* dst,
                const test_msgs__StaticArrayPrimitives__float_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Double   test_msgs__StaticArrayPrimitives__double_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__double_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__double_array_3Seq, test_msgs__StaticArrayPrimitives__double_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_initialize(
                test_msgs__StaticArrayPrimitives__double_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__double_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__double_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__double_array_3_finalize(
                test_msgs__StaticArrayPrimitives__double_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__double_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__double_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__double_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__double_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__double_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__double_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_copy(
                test_msgs__StaticArrayPrimitives__double_array_3* dst,
                const test_msgs__StaticArrayPrimitives__double_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Short   test_msgs__StaticArrayPrimitives__short_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__short_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__short_array_3Seq, test_msgs__StaticArrayPrimitives__short_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_initialize(
                test_msgs__StaticArrayPrimitives__short_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__short_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__short_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__short_array_3_finalize(
                test_msgs__StaticArrayPrimitives__short_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__short_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__short_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__short_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__short_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__short_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__short_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_copy(
                test_msgs__StaticArrayPrimitives__short_array_3* dst,
                const test_msgs__StaticArrayPrimitives__short_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_UnsignedShort   test_msgs__StaticArrayPrimitives__unsigned_short_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__unsigned_short_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__unsigned_short_array_3Seq, test_msgs__StaticArrayPrimitives__unsigned_short_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_copy(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* dst,
                const test_msgs__StaticArrayPrimitives__unsigned_short_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Long   test_msgs__StaticArrayPrimitives__long_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__long_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__long_array_3Seq, test_msgs__StaticArrayPrimitives__long_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__long_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__long_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__long_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__long_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__long_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__long_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__long_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_copy(
                test_msgs__StaticArrayPrimitives__long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__long_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_UnsignedLong   test_msgs__StaticArrayPrimitives__unsigned_long_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__unsigned_long_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__unsigned_long_array_3Seq, test_msgs__StaticArrayPrimitives__unsigned_long_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_copy(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__unsigned_long_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_LongLong   test_msgs__StaticArrayPrimitives__long_long_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__long_long_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__long_long_array_3Seq, test_msgs__StaticArrayPrimitives__long_long_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__long_long_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_copy(
                test_msgs__StaticArrayPrimitives__long_long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__long_long_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_UnsignedLongLong   test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3Seq, test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_copy(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
            typedef    DDS_Char *   test_msgs__StaticArrayPrimitives__string_array_3 [3];
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* test_msgs__StaticArrayPrimitives__string_array_3_get_typecode(void); /* Type code */

            DDS_SEQUENCE_NO_GET(test_msgs__StaticArrayPrimitives__string_array_3Seq, test_msgs__StaticArrayPrimitives__string_array_3);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_initialize(
                test_msgs__StaticArrayPrimitives__string_array_3* self);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__string_array_3* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__string_array_3* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__string_array_3_finalize(
                test_msgs__StaticArrayPrimitives__string_array_3* self);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__string_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__string_array_3* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__string_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__string_array_3* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void test_msgs__StaticArrayPrimitives__string_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__string_array_3* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_copy(
                test_msgs__StaticArrayPrimitives__string_array_3* dst,
                const test_msgs__StaticArrayPrimitives__string_array_3* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif

            extern const char *StaticArrayPrimitives_TYPENAME;

            struct StaticArrayPrimitives_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class StaticArrayPrimitives_TypeSupport;
            class StaticArrayPrimitives_DataWriter;
            class StaticArrayPrimitives_DataReader;
            #endif

            class StaticArrayPrimitives_ 
            {
              public:
                typedef struct StaticArrayPrimitives_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef StaticArrayPrimitives_TypeSupport TypeSupport;
                typedef StaticArrayPrimitives_DataWriter DataWriter;
                typedef StaticArrayPrimitives_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3   bool_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3   byte_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3   char_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3   float32_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3   float64_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3   int8_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3   uint8_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3   int16_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3   uint16_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3   int32_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3   uint32_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3   int64_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3   uint64_values_ ;
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3   string_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* StaticArrayPrimitives__get_typecode(void); /* Type code */

            DDS_SEQUENCE(StaticArrayPrimitives_Seq, StaticArrayPrimitives_);

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitives__initialize(
                StaticArrayPrimitives_* self);

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitives__initialize_ex(
                StaticArrayPrimitives_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitives__initialize_w_params(
                StaticArrayPrimitives_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void StaticArrayPrimitives__finalize(
                StaticArrayPrimitives_* self);

            NDDSUSERDllExport
            void StaticArrayPrimitives__finalize_ex(
                StaticArrayPrimitives_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void StaticArrayPrimitives__finalize_w_params(
                StaticArrayPrimitives_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void StaticArrayPrimitives__finalize_optional_members(
                StaticArrayPrimitives_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool StaticArrayPrimitives__copy(
                StaticArrayPrimitives_* dst,
                const StaticArrayPrimitives_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* StaticArrayPrimitives_ */

