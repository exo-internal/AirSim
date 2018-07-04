#ifndef INERTIASTAMPED_DCPS_IMPL_H_
#define INERTIASTAMPED_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_InertiaStamped_.h"
#include "TypeSupportMetaHolder.h"
#include "TypeSupport.h"
#include "FooDataWriter_impl.h"
#include "FooDataReader_impl.h"
#include "FooDataReaderView_impl.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs {

    namespace msg {

        namespace dds_ {

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_TypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
            {
            public:
                InertiaStamped_TypeSupportMetaHolder ();
                virtual ~InertiaStamped_TypeSupportMetaHolder ();
            
            private:
                ::DDS::OpenSplice::DataWriter * create_datawriter ();
            
                ::DDS::OpenSplice::DataReader * create_datareader ();
            
                ::DDS::OpenSplice::DataReaderView * create_view ();
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_TypeSupport : public virtual InertiaStamped_TypeSupportInterface,
                                                               public ::DDS::OpenSplice::TypeSupport
            {
            public:
                InertiaStamped_TypeSupport ();
            
                virtual ~InertiaStamped_TypeSupport ();
            
            private:
                InertiaStamped_TypeSupport (const InertiaStamped_TypeSupport &);
            
                void operator= (const InertiaStamped_TypeSupport &);
            };
            
            typedef InertiaStamped_TypeSupportInterface_var InertiaStamped_TypeSupport_var;
            typedef InertiaStamped_TypeSupportInterface_ptr InertiaStamped_TypeSupport_ptr;
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_DataWriter_impl : public virtual InertiaStamped_DataWriter,
                                                                   public ::DDS::OpenSplice::FooDataWriter_impl
            {
                friend class DDS::OpenSplice::Publisher;
                friend class InertiaStamped_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::InstanceHandle_t register_instance (
                    const InertiaStamped_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
                    const InertiaStamped_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
                    const InertiaStamped_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    InertiaStamped_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const InertiaStamped_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            protected:
                InertiaStamped_DataWriter_impl ();
            
                virtual ~InertiaStamped_DataWriter_impl ();
            
                virtual DDS::ReturnCode_t init (
                                DDS::OpenSplice::Publisher *publisher,
                                DDS::OpenSplice::DomainParticipant *participant,
                                const DDS::DataWriterQos &qos,
                                DDS::OpenSplice::Topic *a_topic,
                                const char *name,
                                DDS::OpenSplice::cxxCopyIn copyIn,
                                DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                InertiaStamped_DataWriter_impl (const InertiaStamped_DataWriter_impl &);
            
                void operator= (const InertiaStamped_DataWriter &);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_DataReader_impl : public virtual InertiaStamped_DataReader,
                                                                   public ::DDS::OpenSplice::FooDataReader_impl
            {
                friend class DDS::OpenSplice::Subscriber;
                friend class InertiaStamped_TypeSupportMetaHolder;
                friend class InertiaStamped_DataReaderView_impl;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    InertiaStamped_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    InertiaStamped_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    InertiaStamped_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const InertiaStamped_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                InertiaStamped_DataReader_impl ();
            
                virtual ~InertiaStamped_DataReader_impl ();
            
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
                InertiaStamped_DataReader_impl (const InertiaStamped_DataReader &);
                void operator= (const InertiaStamped_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_DataReaderView_impl : public virtual InertiaStamped_DataReaderView,
                                                                       public ::DDS::OpenSplice::FooDataReaderView_impl
            {
                friend class DDS::OpenSplice::DataReader;
                friend class InertiaStamped_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    InertiaStamped_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    InertiaStamped_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    InertiaStamped_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    InertiaStamped_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const InertiaStamped_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                InertiaStamped_DataReaderView_impl ();
            
                virtual ~InertiaStamped_DataReaderView_impl ();
            
                virtual DDS::ReturnCode_t init (
                    DDS::OpenSplice::DataReader *reader,
                    const char *name,
                    const DDS::DataReaderViewQos &qos,
                    DDS::OpenSplice::cxxCopyIn copyIn,
                    DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                InertiaStamped_DataReaderView_impl (const InertiaStamped_DataReaderView &);
            
                void operator= (const InertiaStamped_DataReaderView &);
            };
            
        }

    }

}

#undef OS_API
#endif
