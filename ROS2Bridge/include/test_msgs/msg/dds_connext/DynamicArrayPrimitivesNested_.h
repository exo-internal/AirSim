

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitivesNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayPrimitivesNested__1080078819_h
#define DynamicArrayPrimitivesNested__1080078819_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "test_msgs/msg/dds_connext/DynamicArrayPrimitives_.h"
namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *DynamicArrayPrimitivesNested_TYPENAME;

            struct DynamicArrayPrimitivesNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DynamicArrayPrimitivesNested_TypeSupport;
            class DynamicArrayPrimitivesNested_DataWriter;
            class DynamicArrayPrimitivesNested_DataReader;
            #endif

            class DynamicArrayPrimitivesNested_ 
            {
              public:
                typedef struct DynamicArrayPrimitivesNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DynamicArrayPrimitivesNested_TypeSupport TypeSupport;
                typedef DynamicArrayPrimitivesNested_DataWriter DataWriter;
                typedef DynamicArrayPrimitivesNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::DynamicArrayPrimitives_Seq  dynamic_array_primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DynamicArrayPrimitivesNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DynamicArrayPrimitivesNested_Seq, DynamicArrayPrimitivesNested_);

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitivesNested__initialize(
                DynamicArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitivesNested__initialize_ex(
                DynamicArrayPrimitivesNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitivesNested__initialize_w_params(
                DynamicArrayPrimitivesNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DynamicArrayPrimitivesNested__finalize(
                DynamicArrayPrimitivesNested_* self);

            NDDSUSERDllExport
            void DynamicArrayPrimitivesNested__finalize_ex(
                DynamicArrayPrimitivesNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DynamicArrayPrimitivesNested__finalize_w_params(
                DynamicArrayPrimitivesNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DynamicArrayPrimitivesNested__finalize_optional_members(
                DynamicArrayPrimitivesNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitivesNested__copy(
                DynamicArrayPrimitivesNested_* dst,
                const DynamicArrayPrimitivesNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* DynamicArrayPrimitivesNested_ */

