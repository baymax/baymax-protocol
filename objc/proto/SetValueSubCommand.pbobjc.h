// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/SetValueSubCommand.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30000
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - SetValueSubCommandRoot

@interface SetValueSubCommandRoot : GPBRootObject

// The base class provides:
//   + (GPBExtensionRegistry *)extensionRegistry;
// which is an GPBExtensionRegistry that includes all the extensions defined by
// this file and all files that it depends on.

@end

#pragma mark - SetValueSubCommand

typedef GPB_ENUM(SetValueSubCommand_FieldNumber) {
  SetValueSubCommand_FieldNumber_Id_p = 1,
  SetValueSubCommand_FieldNumber_IValue = 2,
  SetValueSubCommand_FieldNumber_FValue = 3,
  SetValueSubCommand_FieldNumber_UiValue = 4,
  SetValueSubCommand_FieldNumber_UserId = 5,
};

typedef GPB_ENUM(SetValueSubCommand_Values_OneOfCase) {
  SetValueSubCommand_Values_OneOfCase_GPBUnsetOneOfCase = 0,
  SetValueSubCommand_Values_OneOfCase_IValue = 2,
  SetValueSubCommand_Values_OneOfCase_FValue = 3,
  SetValueSubCommand_Values_OneOfCase_UiValue = 4,
};

@interface SetValueSubCommand : GPBMessage

@property(nonatomic, readwrite) uint32_t id_p;

@property(nonatomic, readonly) SetValueSubCommand_Values_OneOfCase valuesOneOfCase;

@property(nonatomic, readwrite) int32_t iValue;

@property(nonatomic, readwrite) float fValue;

@property(nonatomic, readwrite) uint32_t uiValue;

@property(nonatomic, readwrite) uint32_t userId;

@end

void SetValueSubCommand_ClearValuesOneOfCase(SetValueSubCommand *message);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

// @@protoc_insertion_point(global_scope)