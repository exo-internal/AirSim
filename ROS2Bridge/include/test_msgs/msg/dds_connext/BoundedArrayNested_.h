

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundedArrayNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BoundedArrayNested__487618_h
#define BoundedArrayNested__487618_h

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

            extern const char *BoundedArrayNested_TYPENAME;

            struct BoundedArrayNested_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BoundedArrayNested_TypeSupport;
            class BoundedArrayNested_DataWriter;
            class BoundedArrayNested_DataReader;
            #endif

            class BoundedArrayNested_ 
            {
              public:
                typedef struct BoundedArrayNested_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BoundedArrayNested_TypeSupport TypeSupport;
                typedef BoundedArrayNested_DataWriter DataWriter;
                typedef BoundedArrayNested_DataReader DataReader;
                #endif

                test_msgs::msg::dds_::Primitives_Seq  primitive_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BoundedArrayNested__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BoundedArrayNested_Seq, BoundedArrayNested_);

            NDDSUSERDllExport
            RTIBool BoundedArrayNested__initialize(
                BoundedArrayNested_* self);

            NDDSUSERDllExport
            RTIBool BoundedArrayNested__initialize_ex(
                BoundedArrayNested_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BoundedArrayNested__initialize_w_params(
                BoundedArrayNested_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BoundedArrayNested__finalize(
                BoundedArrayNested_* self);

            NDDSUSERDllExport
            void BoundedArrayNested__finalize_ex(
                BoundedArrayNested_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BoundedArrayNested__finalize_w_params(
                BoundedArrayNested_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BoundedArrayNested__finalize_optional_members(
                BoundedArrayNested_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BoundedArrayNested__copy(
                BoundedArrayNested_* dst,
                const BoundedArrayNested_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* BoundedArrayNested_ */

