// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/ManagerSubCommand.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/ManagerSubCommand.pb.h"

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

const ::google::protobuf::Descriptor* ManagerSubCommand_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ManagerSubCommand_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fManagerSubCommand_2eproto() {
  protobuf_AddDesc_proto_2fManagerSubCommand_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/ManagerSubCommand.proto");
  GOOGLE_CHECK(file != NULL);
  ManagerSubCommand_descriptor_ = file->message_type(0);
  static const int ManagerSubCommand_offsets_[1] = {
  };
  ManagerSubCommand_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ManagerSubCommand_descriptor_,
      ManagerSubCommand::default_instance_,
      ManagerSubCommand_offsets_,
      -1,
      -1,
      -1,
      sizeof(ManagerSubCommand),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ManagerSubCommand, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ManagerSubCommand, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fManagerSubCommand_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ManagerSubCommand_descriptor_, &ManagerSubCommand::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fManagerSubCommand_2eproto() {
  delete ManagerSubCommand::default_instance_;
  delete ManagerSubCommand_reflection_;
}

void protobuf_AddDesc_proto_2fManagerSubCommand_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035proto/ManagerSubCommand.proto\"\023\n\021Manag"
    "erSubCommandb\006proto3", 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/ManagerSubCommand.proto", &protobuf_RegisterTypes);
  ManagerSubCommand::default_instance_ = new ManagerSubCommand();
  ManagerSubCommand::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fManagerSubCommand_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fManagerSubCommand_2eproto {
  StaticDescriptorInitializer_proto_2fManagerSubCommand_2eproto() {
    protobuf_AddDesc_proto_2fManagerSubCommand_2eproto();
  }
} static_descriptor_initializer_proto_2fManagerSubCommand_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ManagerSubCommand::ManagerSubCommand()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ManagerSubCommand)
}

void ManagerSubCommand::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ManagerSubCommand::ManagerSubCommand(const ManagerSubCommand& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ManagerSubCommand)
}

void ManagerSubCommand::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

ManagerSubCommand::~ManagerSubCommand() {
  // @@protoc_insertion_point(destructor:ManagerSubCommand)
  SharedDtor();
}

void ManagerSubCommand::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ManagerSubCommand::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ManagerSubCommand::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ManagerSubCommand_descriptor_;
}

const ManagerSubCommand& ManagerSubCommand::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fManagerSubCommand_2eproto();
  return *default_instance_;
}

ManagerSubCommand* ManagerSubCommand::default_instance_ = NULL;

ManagerSubCommand* ManagerSubCommand::New(::google::protobuf::Arena* arena) const {
  ManagerSubCommand* n = new ManagerSubCommand;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ManagerSubCommand::Clear() {
}

bool ManagerSubCommand::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ManagerSubCommand)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:ManagerSubCommand)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ManagerSubCommand)
  return false;
#undef DO_
}

void ManagerSubCommand::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ManagerSubCommand)
  // @@protoc_insertion_point(serialize_end:ManagerSubCommand)
}

::google::protobuf::uint8* ManagerSubCommand::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ManagerSubCommand)
  // @@protoc_insertion_point(serialize_to_array_end:ManagerSubCommand)
  return target;
}

int ManagerSubCommand::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ManagerSubCommand::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ManagerSubCommand* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ManagerSubCommand>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ManagerSubCommand::MergeFrom(const ManagerSubCommand& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
}

void ManagerSubCommand::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ManagerSubCommand::CopyFrom(const ManagerSubCommand& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ManagerSubCommand::IsInitialized() const {

  return true;
}

void ManagerSubCommand::Swap(ManagerSubCommand* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ManagerSubCommand::InternalSwap(ManagerSubCommand* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ManagerSubCommand::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ManagerSubCommand_descriptor_;
  metadata.reflection = ManagerSubCommand_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ManagerSubCommand

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)