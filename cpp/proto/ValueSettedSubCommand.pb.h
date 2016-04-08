// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/ValueSettedSubCommand.proto

#ifndef PROTOBUF_proto_2fValueSettedSubCommand_2eproto__INCLUDED
#define PROTOBUF_proto_2fValueSettedSubCommand_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_proto_2fValueSettedSubCommand_2eproto();
void protobuf_AssignDesc_proto_2fValueSettedSubCommand_2eproto();
void protobuf_ShutdownFile_proto_2fValueSettedSubCommand_2eproto();

class ValueSettedSubCommand;

// ===================================================================

class ValueSettedSubCommand : public ::google::protobuf::Message {
 public:
  ValueSettedSubCommand();
  virtual ~ValueSettedSubCommand();

  ValueSettedSubCommand(const ValueSettedSubCommand& from);

  inline ValueSettedSubCommand& operator=(const ValueSettedSubCommand& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ValueSettedSubCommand& default_instance();

  enum ValuesCase {
    kIValue = 2,
    kFValue = 3,
    kUiValue = 4,
    VALUES_NOT_SET = 0,
  };

  void Swap(ValueSettedSubCommand* other);

  // implements Message ----------------------------------------------

  inline ValueSettedSubCommand* New() const { return New(NULL); }

  ValueSettedSubCommand* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ValueSettedSubCommand& from);
  void MergeFrom(const ValueSettedSubCommand& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ValueSettedSubCommand* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional int32 iValue = 2;
  private:
  bool has_ivalue() const;
  public:
  void clear_ivalue();
  static const int kIValueFieldNumber = 2;
  ::google::protobuf::int32 ivalue() const;
  void set_ivalue(::google::protobuf::int32 value);

  // optional float fValue = 3;
  private:
  bool has_fvalue() const;
  public:
  void clear_fvalue();
  static const int kFValueFieldNumber = 3;
  float fvalue() const;
  void set_fvalue(float value);

  // optional uint32 uiValue = 4;
  private:
  bool has_uivalue() const;
  public:
  void clear_uivalue();
  static const int kUiValueFieldNumber = 4;
  ::google::protobuf::uint32 uivalue() const;
  void set_uivalue(::google::protobuf::uint32 value);

  ValuesCase values_case() const;
  // @@protoc_insertion_point(class_scope:ValueSettedSubCommand)
 private:
  inline void set_has_ivalue();
  inline void set_has_fvalue();
  inline void set_has_uivalue();

  inline bool has_values() const;
  void clear_values();
  inline void clear_has_values();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 id_;
  union ValuesUnion {
    ValuesUnion() {}
    ::google::protobuf::int32 ivalue_;
    float fvalue_;
    ::google::protobuf::uint32 uivalue_;
  } values_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_proto_2fValueSettedSubCommand_2eproto();
  friend void protobuf_AssignDesc_proto_2fValueSettedSubCommand_2eproto();
  friend void protobuf_ShutdownFile_proto_2fValueSettedSubCommand_2eproto();

  void InitAsDefaultInstance();
  static ValueSettedSubCommand* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ValueSettedSubCommand

// optional uint32 id = 1;
inline void ValueSettedSubCommand::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 ValueSettedSubCommand::id() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.id)
  return id_;
}
inline void ValueSettedSubCommand::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.id)
}

// optional int32 iValue = 2;
inline bool ValueSettedSubCommand::has_ivalue() const {
  return values_case() == kIValue;
}
inline void ValueSettedSubCommand::set_has_ivalue() {
  _oneof_case_[0] = kIValue;
}
inline void ValueSettedSubCommand::clear_ivalue() {
  if (has_ivalue()) {
    values_.ivalue_ = 0;
    clear_has_values();
  }
}
inline ::google::protobuf::int32 ValueSettedSubCommand::ivalue() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.iValue)
  if (has_ivalue()) {
    return values_.ivalue_;
  }
  return 0;
}
inline void ValueSettedSubCommand::set_ivalue(::google::protobuf::int32 value) {
  if (!has_ivalue()) {
    clear_values();
    set_has_ivalue();
  }
  values_.ivalue_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.iValue)
}

// optional float fValue = 3;
inline bool ValueSettedSubCommand::has_fvalue() const {
  return values_case() == kFValue;
}
inline void ValueSettedSubCommand::set_has_fvalue() {
  _oneof_case_[0] = kFValue;
}
inline void ValueSettedSubCommand::clear_fvalue() {
  if (has_fvalue()) {
    values_.fvalue_ = 0;
    clear_has_values();
  }
}
inline float ValueSettedSubCommand::fvalue() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.fValue)
  if (has_fvalue()) {
    return values_.fvalue_;
  }
  return 0;
}
inline void ValueSettedSubCommand::set_fvalue(float value) {
  if (!has_fvalue()) {
    clear_values();
    set_has_fvalue();
  }
  values_.fvalue_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.fValue)
}

// optional uint32 uiValue = 4;
inline bool ValueSettedSubCommand::has_uivalue() const {
  return values_case() == kUiValue;
}
inline void ValueSettedSubCommand::set_has_uivalue() {
  _oneof_case_[0] = kUiValue;
}
inline void ValueSettedSubCommand::clear_uivalue() {
  if (has_uivalue()) {
    values_.uivalue_ = 0u;
    clear_has_values();
  }
}
inline ::google::protobuf::uint32 ValueSettedSubCommand::uivalue() const {
  // @@protoc_insertion_point(field_get:ValueSettedSubCommand.uiValue)
  if (has_uivalue()) {
    return values_.uivalue_;
  }
  return 0u;
}
inline void ValueSettedSubCommand::set_uivalue(::google::protobuf::uint32 value) {
  if (!has_uivalue()) {
    clear_values();
    set_has_uivalue();
  }
  values_.uivalue_ = value;
  // @@protoc_insertion_point(field_set:ValueSettedSubCommand.uiValue)
}

inline bool ValueSettedSubCommand::has_values() const {
  return values_case() != VALUES_NOT_SET;
}
inline void ValueSettedSubCommand::clear_has_values() {
  _oneof_case_[0] = VALUES_NOT_SET;
}
inline ValueSettedSubCommand::ValuesCase ValueSettedSubCommand::values_case() const {
  return ValueSettedSubCommand::ValuesCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fValueSettedSubCommand_2eproto__INCLUDED