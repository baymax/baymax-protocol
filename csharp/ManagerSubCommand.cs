// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/ManagerSubCommand.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from proto/ManagerSubCommand.proto</summary>
[global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
public static partial class ManagerSubCommandReflection {

  #region Descriptor
  /// <summary>File descriptor for proto/ManagerSubCommand.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static ManagerSubCommandReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "Ch1wcm90by9NYW5hZ2VyU3ViQ29tbWFuZC5wcm90byITChFNYW5hZ2VyU3Vi",
          "Q29tbWFuZGIGcHJvdG8z"));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedCodeInfo(null, new pbr::GeneratedCodeInfo[] {
          new pbr::GeneratedCodeInfo(typeof(global::ManagerSubCommand), global::ManagerSubCommand.Parser, null, null, null, null)
        }));
  }
  #endregion

}
#region Messages
[global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
public sealed partial class ManagerSubCommand : pb::IMessage<ManagerSubCommand> {
  private static readonly pb::MessageParser<ManagerSubCommand> _parser = new pb::MessageParser<ManagerSubCommand>(() => new ManagerSubCommand());
  public static pb::MessageParser<ManagerSubCommand> Parser { get { return _parser; } }

  public static pbr::MessageDescriptor Descriptor {
    get { return global::ManagerSubCommandReflection.Descriptor.MessageTypes[0]; }
  }

  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  public ManagerSubCommand() {
    OnConstruction();
  }

  partial void OnConstruction();

  public ManagerSubCommand(ManagerSubCommand other) : this() {
  }

  public ManagerSubCommand Clone() {
    return new ManagerSubCommand(this);
  }

  public override bool Equals(object other) {
    return Equals(other as ManagerSubCommand);
  }

  public bool Equals(ManagerSubCommand other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    return true;
  }

  public override int GetHashCode() {
    int hash = 1;
    return hash;
  }

  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  public void WriteTo(pb::CodedOutputStream output) {
  }

  public int CalculateSize() {
    int size = 0;
    return size;
  }

  public void MergeFrom(ManagerSubCommand other) {
    if (other == null) {
      return;
    }
  }

  public void MergeFrom(pb::CodedInputStream input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          input.SkipLastField();
          break;
      }
    }
  }

}

#endregion


#endregion Designer generated code