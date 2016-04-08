// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/ValueSettedSubCommand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/ValueSettedSubCommand.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ValueSettedSubCommand_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ValueSettedSubCommand_reflection_ = NULL;
struct ValueSettedSubCommandOneofInstance {
  ::google::protobuf::int32 ivalue_;
  float fvalue_;
  ::google::protobuf::uint32 uivalue_;
}* ValueSettedSubCommand_default_oneof_instance_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fValueSettedSubCommand_2eproto() {
  protobuf_AddDesc_proto_2fValueSettedSubCommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/ValueSettedSubCommand.proto");
  GOOGLE_CHECK(file != NULL);
  ValueSettedSubCommand_descriptor_ = file->message_type(0);
  static const int ValueSettedSubCommand_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValueSettedSubCommand, id_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(ValueSettedSubCommand_default_oneof_instance_, ivalue_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(ValueSettedSubCommand_default_oneof_instance_, fvalue_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(ValueSettedSubCommand_default_oneof_instance_, uivalue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValueSettedSubCommand, values_),
  };
  ValueSettedSubCommand_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ValueSettedSubCommand_descriptor_,
      ValueSettedSubCommand::default_instance_,
      ValueSettedSubCommand_offsets_,
      -1,
      -1,
      -1,
      ValueSettedSubCommand_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValueSettedSubCommand, _oneof_case_[0]),
      sizeof(ValueSettedSubCommand),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValueSettedSubCommand, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValueSettedSubCommand, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fValueSettedSubCommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ValueSettedSubCommand_descriptor_, &ValueSettedSubCommand::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fValueSettedSubCommand_2eproto() {
  delete ValueSettedSubCommand::default_instance_;
  delete ValueSettedSubCommand_default_oneof_instance_;
  delete ValueSettedSubCommand_reflection_;
}

void protobuf_AddDesc_proto_2fValueSettedSubCommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!proto/ValueSettedSubCommand.proto\"d\n\025V"
    "alueSettedSubCommand\022\n\n\002id\030\001 \001(\r\022\020\n\006iVal"
    "ue\030\002 \001(\005H\000\022\020\n\006fValue\030\003 \001(\002H\000\022\021\n\007uiValue\030"
    "\004 \001(\rH\000B\010\n\006valuesb\006proto3", 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/ValueSettedSubCommand.proto", &protobuf_RegisterTypes);
  ValueSettedSubCommand::default_instance_ = new ValueSettedSubCommand();
  ValueSettedSubCommand_default_oneof_instance_ = new ValueSettedSubCommandOneofInstance();
  ValueSettedSubCommand::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fValueSettedSubCommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fValueSettedSubCommand_2eproto {
  StaticDescriptorInitializer_proto_2fValueSettedSubCommand_2eproto() {
    protobuf_AddDesc_proto_2fValueSettedSubCommand_2eproto();
  }
} static_descriptor_initializer_proto_2fValueSettedSubCommand_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ValueSettedSubCommand::kIdFieldNumber;
const int ValueSettedSubCommand::kIValueFieldNumber;
const int ValueSettedSubCommand::kFValueFieldNumber;
const int ValueSettedSubCommand::kUiValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ValueSettedSubCommand::ValueSettedSubCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ValueSettedSubCommand)
}

void ValueSettedSubCommand::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  ValueSettedSubCommand_default_oneof_instance_->ivalue_ = 0;
  ValueSettedSubCommand_default_oneof_instance_->fvalue_ = 0;
  ValueSettedSubCommand_default_oneof_instance_->uivalue_ = 0u;
}

ValueSettedSubCommand::ValueSettedSubCommand(const ValueSettedSubCommand& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ValueSettedSubCommand)
}

void ValueSettedSubCommand::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  id_ = 0u;
  clear_has_values();
}

ValueSettedSubCommand::~ValueSettedSubCommand() {
  // @@protoc_insertion_point(destructor:ValueSettedSubCommand)
  SharedDtor();
}

void ValueSettedSubCommand::SharedDtor() {
  if (has_values()) {
    clear_values();
  }
  if (this != default_instance_) {
  }
}

void ValueSettedSubCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ValueSettedSubCommand::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ValueSettedSubCommand_descriptor_;
}

const ValueSettedSubCommand& ValueSettedSubCommand::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fValueSettedSubCommand_2eproto();
  return *default_instance_;
}

ValueSettedSubCommand* ValueSettedSubCommand::default_instance_ = NULL;

ValueSettedSubCommand* ValueSettedSubCommand::New(::google::protobuf::Arena* arena) const {
  ValueSettedSubCommand* n = new ValueSettedSubCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ValueSettedSubCommand::clear_values() {
  switch(values_case()) {
    case kIValue: {
      // No need to clear
      break;
    }
    case kFValue: {
      // No need to clear
      break;
    }
    case kUiValue: {
      // No need to clear
      break;
    }
    case VALUES_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = VALUES_NOT_SET;
}


void ValueSettedSubCommand::Clear() {
  id_ = 0u;
  clear_values();
}

bool ValueSettedSubCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ValueSettedSubCommand)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_iValue;
        break;
      }

      // optional int32 iValue = 2;
      case 2: {
        if (tag == 16) {
         parse_iValue:
          clear_values();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &values_.ivalue_)));
          set_has_ivalue();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_fValue;
        break;
      }

      // optional float fValue = 3;
      case 3: {
        if (tag == 29) {
         parse_fValue:
          clear_values();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &values_.fvalue_)));
          set_has_fvalue();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_uiValue;
        break;
      }

      // optional uint32 uiValue = 4;
      case 4: {
        if (tag == 32) {
         parse_uiValue:
          clear_values();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &values_.uivalue_)));
          set_has_uivalue();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ValueSettedSubCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ValueSettedSubCommand)
  return false;
#undef DO_
}

void ValueSettedSubCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ValueSettedSubCommand)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional int32 iValue = 2;
  if (has_ivalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->ivalue(), output);
  }

  // optional float fValue = 3;
  if (has_fvalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->fvalue(), output);
  }

  // optional uint32 uiValue = 4;
  if (has_uivalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->uivalue(), output);
  }

  // @@protoc_insertion_point(serialize_end:ValueSettedSubCommand)
}

::google::protobuf::uint8* ValueSettedSubCommand::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ValueSettedSubCommand)
  // optional uint32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional int32 iValue = 2;
  if (has_ivalue()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->ivalue(), target);
  }

  // optional float fValue = 3;
  if (has_fvalue()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->fvalue(), target);
  }

  // optional uint32 uiValue = 4;
  if (has_uivalue()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->uivalue(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ValueSettedSubCommand)
  return target;
}

int ValueSettedSubCommand::ByteSize() const {
  int total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  switch (values_case()) {
    // optional int32 iValue = 2;
    case kIValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ivalue());
      break;
    }
    // optional float fValue = 3;
    case kFValue: {
      total_size += 1 + 4;
      break;
    }
    // optional uint32 uiValue = 4;
    case kUiValue: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->uivalue());
      break;
    }
    case VALUES_NOT_SET: {
      break;
    }
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ValueSettedSubCommand::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ValueSettedSubCommand* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ValueSettedSubCommand>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ValueSettedSubCommand::MergeFrom(const ValueSettedSubCommand& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  switch (from.values_case()) {
    case kIValue: {
      set_ivalue(from.ivalue());
      break;
    }
    case kFValue: {
      set_fvalue(from.fvalue());
      break;
    }
    case kUiValue: {
      set_uivalue(from.uivalue());
      break;
    }
    case VALUES_NOT_SET: {
      break;
    }
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void ValueSettedSubCommand::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ValueSettedSubCommand::CopyFrom(const ValueSettedSubCommand& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ValueSettedSubCommand::IsInitialized() const {

  return true;
}

void ValueSettedSubCommand::Swap(ValueSettedSubCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ValueSettedSubCommand::InternalSwap(ValueSettedSubCommand* other) {
  std::swap(id_, other->id_);
  std::swap(values_, other->values_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ValueSettedSubCommand::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ValueSettedSubCommand_descriptor_;
  metadata.reflection = ValueSettedSubCommand_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ValueSettedSubCommand

// optional uint32 id = 1;
void ValueSettedSubCommand::clear_id() {
  id_ = 0u;
}
 ::google::protobuf::uint32 ValueSettedSubCommand::id() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.id)
  return id_;
}
 void ValueSettedSubCommand::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.id)
}

// optional int32 iValue = 2;
bool ValueSettedSubCommand::has_ivalue() const {
  return values_case() == kIValue;
}
void ValueSettedSubCommand::set_has_ivalue() {
  _oneof_case_[0] = kIValue;
}
void ValueSettedSubCommand::clear_ivalue() {
  if (has_ivalue()) {
    values_.ivalue_ = 0;
    clear_has_values();
  }
}
 ::google::protobuf::int32 ValueSettedSubCommand::ivalue() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.iValue)
  if (has_ivalue()) {
    return values_.ivalue_;
  }
  return 0;
}
 void ValueSettedSubCommand::set_ivalue(::google::protobuf::int32 value) {
  if (!has_ivalue()) {
    clear_values();
    set_has_ivalue();
  }
  values_.ivalue_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.iValue)
}

// optional float fValue = 3;
bool ValueSettedSubCommand::has_fvalue() const {
  return values_case() == kFValue;
}
void ValueSettedSubCommand::set_has_fvalue() {
  _oneof_case_[0] = kFValue;
}
void ValueSettedSubCommand::clear_fvalue() {
  if (has_fvalue()) {
    values_.fvalue_ = 0;
    clear_has_values();
  }
}
 float ValueSettedSubCommand::fvalue() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.fValue)
  if (has_fvalue()) {
    return values_.fvalue_;
  }
  return 0;
}
 void ValueSettedSubCommand::set_fvalue(float value) {
  if (!has_fvalue()) {
    clear_values();
    set_has_fvalue();
  }
  values_.fvalue_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.fValue)
}

// optional uint32 uiValue = 4;
bool ValueSettedSubCommand::has_uivalue() const {
  return values_case() == kUiValue;
}
void ValueSettedSubCommand::set_has_uivalue() {
  _oneof_case_[0] = kUiValue;
}
void ValueSettedSubCommand::clear_uivalue() {
  if (has_uivalue()) {
    values_.uivalue_ = 0u;
    clear_has_values();
  }
}
 ::google::protobuf::uint32 ValueSettedSubCommand::uivalue() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.uiValue)
  if (has_uivalue()) {
    return values_.uivalue_;
  }
  return 0u;
}
 void ValueSettedSubCommand::set_uivalue(::google::protobuf::uint32 value) {
  if (!has_uivalue()) {
    clear_values();
    set_has_uivalue();
  }
  values_.uivalue_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.uiValue)
}

bool ValueSettedSubCommand::has_values() const {
  return values_case() != VALUES_NOT_SET;
}
void ValueSettedSubCommand::clear_has_values() {
  _oneof_case_[0] = VALUES_NOT_SET;
}
ValueSettedSubCommand::ValuesCase ValueSettedSubCommand::values_case() const {
  return ValueSettedSubCommand::ValuesCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
