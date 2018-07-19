

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayNested__1227331071_h
#define DynamicArrayNested__1227331071_h

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

            extern const char *DynamicArrayNested_TYPENAME;

            struct DynamicArrayNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DynamicArrayNested_TypeSupport;
            class DynamicArrayNested_DataWriter;
            class DynamicArrayNested_DataReader;
            #endif

            class DynamicArrayNested_ 
            {
              public:
                typedef struct DynamicArrayNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DynamicArrayNested_TypeSupport TypeSupport;
                typedef DynamicArrayNested_DataWriter DataWriter;
                typedef DynamicArrayNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Primitives_Seq  primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DynamicArrayNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DynamicArrayNested_Seq, DynamicArrayNested_);

            NDDSUSERDllExport
            RTIBool DynamicArrayNested__initialize(
                DynamicArrayNested_* self);

            NDDSUSERDllExport
            RTIBool DynamicArrayNested__initialize_ex(
                DynamicArrayNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DynamicArrayNested__initialize_w_params(
                DynamicArrayNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DynamicArrayNested__finalize(
                DynamicArrayNested_* self);

            NDDSUSERDllExport
            void DynamicArrayNested__finalize_ex(
                DynamicArrayNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DynamicArrayNested__finalize_w_params(
                DynamicArrayNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DynamicArrayNested__finalize_optional_members(
                DynamicArrayNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DynamicArrayNested__copy(
                DynamicArrayNested_* dst,
                const DynamicArrayNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* DynamicArrayNested_ */

