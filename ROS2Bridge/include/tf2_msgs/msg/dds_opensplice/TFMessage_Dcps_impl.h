#ifndef TFMESSAGE_DCPS_IMPL_H_
#define TFMESSAGE_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_TFMessage_.h"
#include "TypeSupportMetaHolder.h"
#include "TypeSupport.h"
#include "FooDataWriter_impl.h"
#include "FooDataReader_impl.h"
#include "FooDataReaderView_impl.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace tf2_msgs {

    namespace msg {

        namespace dds_ {

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_TypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
            {
            public:
                TFMessage_TypeSupportMetaHolder ();
                virtual ~TFMessage_TypeSupportMetaHolder ();
            
            private:
                ::DDS::OpenSplice::DataWriter * create_datawriter ();
            
                ::DDS::OpenSplice::DataReader * create_datareader ();
            
                ::DDS::OpenSplice::DataReaderView * create_view ();
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_TypeSupport : public virtual TFMessage_TypeSupportInterface,
                                                               public ::DDS::OpenSplice::TypeSupport
            {
            public:
                TFMessage_TypeSupport ();
            
                virtual ~TFMessage_TypeSupport ();
            
            private:
                TFMessage_TypeSupport (const TFMessage_TypeSupport &);
            
                void operator= (const TFMessage_TypeSupport &);
            };
            
            typedef TFMessage_TypeSupportInterface_var TFMessage_TypeSupport_var;
            typedef TFMessage_TypeSupportInterface_ptr TFMessage_TypeSupport_ptr;
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_DataWriter_impl : public virtual TFMessage_DataWriter,
                                                                   public ::DDS::OpenSplice::FooDataWriter_impl
            {
                friend class DDS::OpenSplice::Publisher;
                friend class TFMessage_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::InstanceHandle_t register_instance (
                    const TFMessage_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
                    const TFMessage_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
                    const TFMessage_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    TFMessage_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const TFMessage_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            protected:
                TFMessage_DataWriter_impl ();
            
                virtual ~TFMessage_DataWriter_impl ();
            
                virtual DDS::ReturnCode_t init (
                                DDS::OpenSplice::Publisher *publisher,
                                DDS::OpenSplice::DomainParticipant *participant,
                                const DDS::DataWriterQos &qos,
                                DDS::OpenSplice::Topic *a_topic,
                                const char *name,
                                DDS::OpenSplice::cxxCopyIn copyIn,
                                DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                TFMessage_DataWriter_impl (const TFMessage_DataWriter_impl &);
            
                void operator= (const TFMessage_DataWriter &);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_DataReader_impl : public virtual TFMessage_DataReader,
                                                                   public ::DDS::OpenSplice::FooDataReader_impl
            {
                friend class DDS::OpenSplice::Subscriber;
                friend class TFMessage_TypeSupportMetaHolder;
                friend class TFMessage_DataReaderView_impl;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    TFMessage_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    TFMessage_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    TFMessage_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const TFMessage_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                TFMessage_DataReader_impl ();
            
                virtual ~TFMessage_DataReader_impl ();
            
                DDS::ReturnCode_t init (
                        DDS::OpenSplice::Subscriber *subscriber,
                        const DDS::DataReaderQos &qos,
                        DDS::OpenSplice::TopicDescription *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
            
                static void* dataSeqAlloc (
                    void * data_values,
                    DDS::ULong len);
            
                static void dataSeqLength (
                    void * data_values,
                    DDS::ULong len);
            
                static void * dataSeqGetBuffer (
                    void * data_values,
                    DDS::ULong index);
            
                static void dataSeqCopyOut (
                    const void * from,
                    void * received_data);
                static void copyDataOut(const void *from, void *to);
            
            private:
                TFMessage_DataReader_impl (const TFMessage_DataReader &);
                void operator= (const TFMessage_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_DataReaderView_impl : public virtual TFMessage_DataReaderView,
                                                                       public ::DDS::OpenSplice::FooDataReaderView_impl
            {
                friend class DDS::OpenSplice::DataReader;
                friend class TFMessage_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    TFMessage_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    TFMessage_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    TFMessage_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    TFMessage_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const TFMessage_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                TFMessage_DataReaderView_impl ();
            
                virtual ~TFMessage_DataReaderView_impl ();
            
                virtual DDS::ReturnCode_t init (
                    DDS::OpenSplice::DataReader *reader,
                    const char *name,
                    const DDS::DataReaderViewQos &qos,
                    DDS::OpenSplice::cxxCopyIn copyIn,
                    DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                TFMessage_DataReaderView_impl (const TFMessage_DataReaderView &);
            
                void operator= (const TFMessage_DataReaderView &);
            };
            
        }

    }

}

#undef OS_API
#endif
