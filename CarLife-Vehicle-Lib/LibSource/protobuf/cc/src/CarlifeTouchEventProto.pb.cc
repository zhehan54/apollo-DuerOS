// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeTouchEventProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeTouchEventProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* CarlifeTouchEvent_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeTouchEvent_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeTouchEventProto_2eproto() {
  protobuf_AddDesc_CarlifeTouchEventProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeTouchEventProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeTouchEvent_descriptor_ = file->message_type(0);
  static const int CarlifeTouchEvent_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeTouchEvent, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeTouchEvent, code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeTouchEvent, value_),
  };
  CarlifeTouchEvent_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeTouchEvent_descriptor_,
      CarlifeTouchEvent::default_instance_,
      CarlifeTouchEvent_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeTouchEvent, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeTouchEvent, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeTouchEvent));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeTouchEventProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeTouchEvent_descriptor_, &CarlifeTouchEvent::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeTouchEventProto_2eproto() {
  delete CarlifeTouchEvent::default_instance_;
  delete CarlifeTouchEvent_reflection_;
}

void protobuf_AddDesc_CarlifeTouchEventProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034CarlifeTouchEventProto.proto\022\032com.baid"
    "u.carlife.protobuf\">\n\021CarlifeTouchEvent\022"
    "\014\n\004type\030\001 \002(\005\022\014\n\004code\030\002 \002(\005\022\r\n\005value\030\003 \002"
    "(\005", 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeTouchEventProto.proto", &protobuf_RegisterTypes);
  CarlifeTouchEvent::default_instance_ = new CarlifeTouchEvent();
  CarlifeTouchEvent::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeTouchEventProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeTouchEventProto_2eproto {
  StaticDescriptorInitializer_CarlifeTouchEventProto_2eproto() {
    protobuf_AddDesc_CarlifeTouchEventProto_2eproto();
  }
} static_descriptor_initializer_CarlifeTouchEventProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeTouchEvent::kTypeFieldNumber;
const int CarlifeTouchEvent::kCodeFieldNumber;
const int CarlifeTouchEvent::kValueFieldNumber;
#endif  // !_MSC_VER

CarlifeTouchEvent::CarlifeTouchEvent()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeTouchEvent::InitAsDefaultInstance() {
}

CarlifeTouchEvent::CarlifeTouchEvent(const CarlifeTouchEvent& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeTouchEvent::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  code_ = 0;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeTouchEvent::~CarlifeTouchEvent() {
  SharedDtor();
}

void CarlifeTouchEvent::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CarlifeTouchEvent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeTouchEvent::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeTouchEvent_descriptor_;
}

const CarlifeTouchEvent& CarlifeTouchEvent::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeTouchEventProto_2eproto();
  return *default_instance_;
}

CarlifeTouchEvent* CarlifeTouchEvent::default_instance_ = NULL;

CarlifeTouchEvent* CarlifeTouchEvent::New() const {
  return new CarlifeTouchEvent;
}

void CarlifeTouchEvent::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    code_ = 0;
    value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeTouchEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_code;
        break;
      }

      // required int32 code = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
          set_has_code();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_value;
        break;
      }

      // required int32 value = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CarlifeTouchEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // required int32 code = 2;
  if (has_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->code(), output);
  }

  // required int32 value = 3;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeTouchEvent::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // required int32 code = 2;
  if (has_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->code(), target);
  }

  // required int32 value = 3;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeTouchEvent::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // required int32 code = 2;
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->code());
    }

    // required int32 value = 3;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CarlifeTouchEvent::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeTouchEvent* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeTouchEvent*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeTouchEvent::MergeFrom(const CarlifeTouchEvent& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_code()) {
      set_code(from.code());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeTouchEvent::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeTouchEvent::CopyFrom(const CarlifeTouchEvent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeTouchEvent::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void CarlifeTouchEvent::Swap(CarlifeTouchEvent* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(code_, other->code_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeTouchEvent::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeTouchEvent_descriptor_;
  metadata.reflection = CarlifeTouchEvent_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)
