// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/SetValueSubCommand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/SetValueSubCommand.pb.h"

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

const ::google::protobuf::Descriptor* SetValueSubCommand_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SetValueSubCommand_reflection_ = NULL;
struct SetValueSubCommandOneofInstance {
  ::google::protobuf::int32 ivalue_;
  float fvalue_;
  ::google::protobuf::uint32 uivalue_;
}* SetValueSubCommand_default_oneof_instance_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fSetValueSubCommand_2eproto() {
  protobuf_AddDesc_proto_2fSetValueSubCommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/SetValueSubCommand.proto");
  GOOGLE_CHECK(file != NULL);
  SetValueSubCommand_descriptor_ = file->message_type(0);
  static const int SetValueSubCommand_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetValueSubCommand, id_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(SetValueSubCommand_default_oneof_instance_, ivalue_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(SetValueSubCommand_default_oneof_instance_, fvalue_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(SetValueSubCommand_default_oneof_instance_, uivalue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetValueSubCommand, userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetValueSubCommand, values_),
  };
  SetValueSubCommand_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SetValueSubCommand_descriptor_,
      SetValueSubCommand::default_instance_,
      SetValueSubCommand_offsets_,
      -1,
      -1,
      -1,
      SetValueSubCommand_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetValueSubCommand, _oneof_case_[0]),
      sizeof(SetValueSubCommand),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetValueSubCommand, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetValueSubCommand, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fSetValueSubCommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SetValueSubCommand_descriptor_, &SetValueSubCommand::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fSetValueSubCommand_2eproto() {
  delete SetValueSubCommand::default_instance_;
  delete SetValueSubCommand_default_oneof_instance_;
  delete SetValueSubCommand_reflection_;
}

void protobuf_AddDesc_proto_2fSetValueSubCommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036proto/SetValueSubCommand.proto\"q\n\022SetV"
    "alueSubCommand\022\n\n\002id\030\001 \001(\r\022\020\n\006iValue\030\002 \001"
    "(\005H\000\022\020\n\006fValue\030\003 \001(\002H\000\022\021\n\007uiValue\030\004 \001(\rH"
    "\000\022\016\n\006userId\030\005 \001(\rB\010\n\006valuesb\006proto3", 155);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/SetValueSubCommand.proto", &protobuf_RegisterTypes);
  SetValueSubCommand::default_instance_ = new SetValueSubCommand();
  SetValueSubCommand_default_oneof_instance_ = new SetValueSubCommandOneofInstance();
  SetValueSubCommand::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fSetValueSubCommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fSetValueSubCommand_2eproto {
  StaticDescriptorInitializer_proto_2fSetValueSubCommand_2eproto() {
    protobuf_AddDesc_proto_2fSetValueSubCommand_2eproto();
  }
} static_descriptor_initializer_proto_2fSetValueSubCommand_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SetValueSubCommand::kIdFieldNumber;
const int SetValueSubCommand::kIValueFieldNumber;
const int SetValueSubCommand::kFValueFieldNumber;
const int SetValueSubCommand::kUiValueFieldNumber;
const int SetValueSubCommand::kUserIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SetValueSubCommand::SetValueSubCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SetValueSubCommand)
}

void SetValueSubCommand::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  SetValueSubCommand_default_oneof_instance_->ivalue_ = 0;
  SetValueSubCommand_default_oneof_instance_->fvalue_ = 0;
  SetValueSubCommand_default_oneof_instance_->uivalue_ = 0u;
}

SetValueSubCommand::SetValueSubCommand(const SetValueSubCommand& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SetValueSubCommand)
}

void SetValueSubCommand::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  id_ = 0u;
  userid_ = 0u;
  clear_has_values();
}

SetValueSubCommand::~SetValueSubCommand() {
  // @@protoc_insertion_point(destructor:SetValueSubCommand)
  SharedDtor();
}

void SetValueSubCommand::SharedDtor() {
  if (has_values()) {
    clear_values();
  }
  if (this != default_instance_) {
  }
}

void SetValueSubCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SetValueSubCommand::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SetValueSubCommand_descriptor_;
}

const SetValueSubCommand& SetValueSubCommand::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fSetValueSubCommand_2eproto();
  return *default_instance_;
}

SetValueSubCommand* SetValueSubCommand::default_instance_ = NULL;

SetValueSubCommand* SetValueSubCommand::New(::google::protobuf::Arena* arena) const {
  SetValueSubCommand* n = new SetValueSubCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SetValueSubCommand::clear_values() {
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


void SetValueSubCommand::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SetValueSubCommand*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(id_, userid_);

#undef ZR_HELPER_
#undef ZR_

  clear_values();
}

bool SetValueSubCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SetValueSubCommand)
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
        if (input->ExpectTag(40)) goto parse_userId;
        break;
      }

      // optional uint32 userId = 5;
      case 5: {
        if (tag == 40) {
         parse_userId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &userid_)));

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
  // @@protoc_insertion_point(parse_success:SetValueSubCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SetValueSubCommand)
  return false;
#undef DO_
}

void SetValueSubCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SetValueSubCommand)
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

  // optional uint32 userId = 5;
  if (this->userid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->userid(), output);
  }

  // @@protoc_insertion_point(serialize_end:SetValueSubCommand)
}

::google::protobuf::uint8* SetValueSubCommand::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SetValueSubCommand)
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

  // optional uint32 userId = 5;
  if (this->userid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->userid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:SetValueSubCommand)
  return target;
}

int SetValueSubCommand::ByteSize() const {
  int total_size = 0;

  // optional uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // optional uint32 userId = 5;
  if (this->userid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->userid());
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

void SetValueSubCommand::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SetValueSubCommand* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SetValueSubCommand>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SetValueSubCommand::MergeFrom(const SetValueSubCommand& from) {
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
  if (from.userid() != 0) {
    set_userid(from.userid());
  }
}

void SetValueSubCommand::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SetValueSubCommand::CopyFrom(const SetValueSubCommand& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetValueSubCommand::IsInitialized() const {

  return true;
}

void SetValueSubCommand::Swap(SetValueSubCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SetValueSubCommand::InternalSwap(SetValueSubCommand* other) {
  std::swap(id_, other->id_);
  std::swap(userid_, other->userid_);
  std::swap(values_, other->values_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SetValueSubCommand::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SetValueSubCommand_descriptor_;
  metadata.reflection = SetValueSubCommand_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SetValueSubCommand

// optional uint32 id = 1;
void SetValueSubCommand::clear_id() {
  id_ = 0u;
}
 ::google::protobuf::uint32 SetValueSubCommand::id() const {
  // @@protoc_insertion_point(field_get:SetValueSubCommand.id)
  return id_;
}
 void SetValueSubCommand::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:SetValueSubCommand.id)
}

// optional int32 iValue = 2;
bool SetValueSubCommand::has_ivalue() const {
  return values_case() == kIValue;
}
void SetValueSubCommand::set_has_ivalue() {
  _oneof_case_[0] = kIValue;
}
void SetValueSubCommand::clear_ivalue() {
  if (has_ivalue()) {
    values_.ivalue_ = 0;
    clear_has_values();
  }
}
 ::google::protobuf::int32 SetValueSubCommand::ivalue() const {
  // @@protoc_insertion_point(field_get:SetValueSubCommand.iValue)
  if (has_ivalue()) {
    return values_.ivalue_;
  }
  return 0;
}
 void SetValueSubCommand::set_ivalue(::google::protobuf::int32 value) {
  if (!has_ivalue()) {
    clear_values();
    set_has_ivalue();
  }
  values_.ivalue_ = value;
  // @@protoc_insertion_point(field_set:SetValueSubCommand.iValue)
}

// optional float fValue = 3;
bool SetValueSubCommand::has_fvalue() const {
  return values_case() == kFValue;
}
void SetValueSubCommand::set_has_fvalue() {
  _oneof_case_[0] = kFValue;
}
void SetValueSubCommand::clear_fvalue() {
  if (has_fvalue()) {
    values_.fvalue_ = 0;
    clear_has_values();
  }
}
 float SetValueSubCommand::fvalue() const {
  // @@protoc_insertion_point(field_get:SetValueSubCommand.fValue)
  if (has_fvalue()) {
    return values_.fvalue_;
  }
  return 0;
}
 void SetValueSubCommand::set_fvalue(float value) {
  if (!has_fvalue()) {
    clear_values();
    set_has_fvalue();
  }
  values_.fvalue_ = value;
  // @@protoc_insertion_point(field_set:SetValueSubCommand.fValue)
}

// optional uint32 uiValue = 4;
bool SetValueSubCommand::has_uivalue() const {
  return values_case() == kUiValue;
}
void SetValueSubCommand::set_has_uivalue() {
  _oneof_case_[0] = kUiValue;
}
void SetValueSubCommand::clear_uivalue() {
  if (has_uivalue()) {
    values_.uivalue_ = 0u;
    clear_has_values();
  }
}
 ::google::protobuf::uint32 SetValueSubCommand::uivalue() const {
  // @@protoc_insertion_point(field_get:SetValueSubCommand.uiValue)
  if (has_uivalue()) {
    return values_.uivalue_;
  }
  return 0u;
}
 void SetValueSubCommand::set_uivalue(::google::protobuf::uint32 value) {
  if (!has_uivalue()) {
    clear_values();
    set_has_uivalue();
  }
  values_.uivalue_ = value;
  // @@protoc_insertion_point(field_set:SetValueSubCommand.uiValue)
}

// optional uint32 userId = 5;
void SetValueSubCommand::clear_userid() {
  userid_ = 0u;
}
 ::google::protobuf::uint32 SetValueSubCommand::userid() const {
  // @@protoc_insertion_point(field_get:SetValueSubCommand.userId)
  return userid_;
}
 void SetValueSubCommand::set_userid(::google::protobuf::uint32 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:SetValueSubCommand.userId)
}

bool SetValueSubCommand::has_values() const {
  return values_case() != VALUES_NOT_SET;
}
void SetValueSubCommand::clear_has_values() {
  _oneof_case_[0] = VALUES_NOT_SET;
}
SetValueSubCommand::ValuesCase SetValueSubCommand::values_case() const {
  return SetValueSubCommand::ValuesCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
