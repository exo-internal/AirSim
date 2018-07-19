

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StaticArrayNested_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef StaticArrayNested_Plugin_183472668_h
#define StaticArrayNested_Plugin_183472668_h

#include "StaticArrayNested_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "test_msgs/msg/dds_connext/Primitives_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            #define test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4*
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4*
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4*
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_copy_data(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *out,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *in);

            NDDSUSERDllExport extern void 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_destroy_data_w_params(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_destroy_data_ex(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_destroy_data(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample);

            NDDSUSERDllExport extern void 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4PluginSupport_print_data(
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *out,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            #define StaticArrayNested_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define StaticArrayNested_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define StaticArrayNested_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define StaticArrayNested_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define StaticArrayNested_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern StaticArrayNested_*
            StaticArrayNested_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern StaticArrayNested_*
            StaticArrayNested_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern StaticArrayNested_*
            StaticArrayNested_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_PluginSupport_copy_data(
                StaticArrayNested_ *out,
                const StaticArrayNested_ *in);

            NDDSUSERDllExport extern void 
            StaticArrayNested_PluginSupport_destroy_data_w_params(
                StaticArrayNested_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            StaticArrayNested_PluginSupport_destroy_data_ex(
                StaticArrayNested_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            StaticArrayNested_PluginSupport_destroy_data(
                StaticArrayNested_ *sample);

            NDDSUSERDllExport extern void 
            StaticArrayNested_PluginSupport_print_data(
                const StaticArrayNested_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            StaticArrayNested_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            StaticArrayNested_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            StaticArrayNested_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            StaticArrayNested_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            StaticArrayNested_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ *out,
                const StaticArrayNested_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const StaticArrayNested_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StaticArrayNested_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const StaticArrayNested_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StaticArrayNested_Plugin_deserialize_from_cdr_buffer(
                StaticArrayNested_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            StaticArrayNested_Plugin_data_to_string(
                const StaticArrayNested_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            StaticArrayNested_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            StaticArrayNested_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            StaticArrayNested_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StaticArrayNested_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            StaticArrayNested_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const StaticArrayNested_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            StaticArrayNested_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            StaticArrayNested_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            StaticArrayNested_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const StaticArrayNested_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            StaticArrayNested_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            StaticArrayNested_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                StaticArrayNested_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            StaticArrayNested_Plugin_new(void);

            NDDSUSERDllExport extern void
            StaticArrayNested_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* StaticArrayNested_Plugin_183472668_h */

