// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: roboime.proto

#ifndef PROTOBUF_roboime_2eproto__INCLUDED
#define PROTOBUF_roboime_2eproto__INCLUDED

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

namespace RoboimeData {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_roboime_2eproto();
void protobuf_AssignDesc_roboime_2eproto();
void protobuf_ShutdownFile_roboime_2eproto();

class DataBlue;
class DataReceiver;
class DataYellow;

// ===================================================================

class DataYellow : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RoboimeData.DataYellow) */ {
 public:
  DataYellow();
  virtual ~DataYellow();

  DataYellow(const DataYellow& from);

  inline DataYellow& operator=(const DataYellow& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DataYellow& default_instance();

  void Swap(DataYellow* other);

  // implements Message ----------------------------------------------

  inline DataYellow* New() const { return New(NULL); }

  DataYellow* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataYellow& from);
  void MergeFrom(const DataYellow& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DataYellow* other);
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

  // required float ballPoseX = 1;
  bool has_ballposex() const;
  void clear_ballposex();
  static const int kBallPoseXFieldNumber = 1;
  float ballposex() const;
  void set_ballposex(float value);

  // required float ballPoseY = 2;
  bool has_ballposey() const;
  void clear_ballposey();
  static const int kBallPoseYFieldNumber = 2;
  float ballposey() const;
  void set_ballposey(float value);

  // required float yellow0PoseX = 3;
  bool has_yellow0posex() const;
  void clear_yellow0posex();
  static const int kYellow0PoseXFieldNumber = 3;
  float yellow0posex() const;
  void set_yellow0posex(float value);

  // required float yellow0PoseY = 4;
  bool has_yellow0posey() const;
  void clear_yellow0posey();
  static const int kYellow0PoseYFieldNumber = 4;
  float yellow0posey() const;
  void set_yellow0posey(float value);

  // required float yellow0Angle = 5;
  bool has_yellow0angle() const;
  void clear_yellow0angle();
  static const int kYellow0AngleFieldNumber = 5;
  float yellow0angle() const;
  void set_yellow0angle(float value);

  // required float yellow1PoseX = 6;
  bool has_yellow1posex() const;
  void clear_yellow1posex();
  static const int kYellow1PoseXFieldNumber = 6;
  float yellow1posex() const;
  void set_yellow1posex(float value);

  // required float yellow1PoseY = 7;
  bool has_yellow1posey() const;
  void clear_yellow1posey();
  static const int kYellow1PoseYFieldNumber = 7;
  float yellow1posey() const;
  void set_yellow1posey(float value);

  // required float yellow1Angle = 8;
  bool has_yellow1angle() const;
  void clear_yellow1angle();
  static const int kYellow1AngleFieldNumber = 8;
  float yellow1angle() const;
  void set_yellow1angle(float value);

  // required float yellow2PoseX = 9;
  bool has_yellow2posex() const;
  void clear_yellow2posex();
  static const int kYellow2PoseXFieldNumber = 9;
  float yellow2posex() const;
  void set_yellow2posex(float value);

  // required float yellow2PoseY = 10;
  bool has_yellow2posey() const;
  void clear_yellow2posey();
  static const int kYellow2PoseYFieldNumber = 10;
  float yellow2posey() const;
  void set_yellow2posey(float value);

  // required float yellow2Angle = 11;
  bool has_yellow2angle() const;
  void clear_yellow2angle();
  static const int kYellow2AngleFieldNumber = 11;
  float yellow2angle() const;
  void set_yellow2angle(float value);

  // @@protoc_insertion_point(class_scope:RoboimeData.DataYellow)
 private:
  inline void set_has_ballposex();
  inline void clear_has_ballposex();
  inline void set_has_ballposey();
  inline void clear_has_ballposey();
  inline void set_has_yellow0posex();
  inline void clear_has_yellow0posex();
  inline void set_has_yellow0posey();
  inline void clear_has_yellow0posey();
  inline void set_has_yellow0angle();
  inline void clear_has_yellow0angle();
  inline void set_has_yellow1posex();
  inline void clear_has_yellow1posex();
  inline void set_has_yellow1posey();
  inline void clear_has_yellow1posey();
  inline void set_has_yellow1angle();
  inline void clear_has_yellow1angle();
  inline void set_has_yellow2posex();
  inline void clear_has_yellow2posex();
  inline void set_has_yellow2posey();
  inline void clear_has_yellow2posey();
  inline void set_has_yellow2angle();
  inline void clear_has_yellow2angle();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float ballposex_;
  float ballposey_;
  float yellow0posex_;
  float yellow0posey_;
  float yellow0angle_;
  float yellow1posex_;
  float yellow1posey_;
  float yellow1angle_;
  float yellow2posex_;
  float yellow2posey_;
  float yellow2angle_;
  friend void  protobuf_AddDesc_roboime_2eproto();
  friend void protobuf_AssignDesc_roboime_2eproto();
  friend void protobuf_ShutdownFile_roboime_2eproto();

  void InitAsDefaultInstance();
  static DataYellow* default_instance_;
};
// -------------------------------------------------------------------

class DataBlue : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RoboimeData.DataBlue) */ {
 public:
  DataBlue();
  virtual ~DataBlue();

  DataBlue(const DataBlue& from);

  inline DataBlue& operator=(const DataBlue& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DataBlue& default_instance();

  void Swap(DataBlue* other);

  // implements Message ----------------------------------------------

  inline DataBlue* New() const { return New(NULL); }

  DataBlue* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataBlue& from);
  void MergeFrom(const DataBlue& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DataBlue* other);
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

  // required float blue0PoseX = 1;
  bool has_blue0posex() const;
  void clear_blue0posex();
  static const int kBlue0PoseXFieldNumber = 1;
  float blue0posex() const;
  void set_blue0posex(float value);

  // required float blue0PoseY = 2;
  bool has_blue0posey() const;
  void clear_blue0posey();
  static const int kBlue0PoseYFieldNumber = 2;
  float blue0posey() const;
  void set_blue0posey(float value);

  // required float blue0Angle = 3;
  bool has_blue0angle() const;
  void clear_blue0angle();
  static const int kBlue0AngleFieldNumber = 3;
  float blue0angle() const;
  void set_blue0angle(float value);

  // required float blue1PoseX = 4;
  bool has_blue1posex() const;
  void clear_blue1posex();
  static const int kBlue1PoseXFieldNumber = 4;
  float blue1posex() const;
  void set_blue1posex(float value);

  // required float blue1PoseY = 5;
  bool has_blue1posey() const;
  void clear_blue1posey();
  static const int kBlue1PoseYFieldNumber = 5;
  float blue1posey() const;
  void set_blue1posey(float value);

  // required float blue1Angle = 6;
  bool has_blue1angle() const;
  void clear_blue1angle();
  static const int kBlue1AngleFieldNumber = 6;
  float blue1angle() const;
  void set_blue1angle(float value);

  // required float blue2PoseX = 7;
  bool has_blue2posex() const;
  void clear_blue2posex();
  static const int kBlue2PoseXFieldNumber = 7;
  float blue2posex() const;
  void set_blue2posex(float value);

  // required float blue2PoseY = 8;
  bool has_blue2posey() const;
  void clear_blue2posey();
  static const int kBlue2PoseYFieldNumber = 8;
  float blue2posey() const;
  void set_blue2posey(float value);

  // required float blue2Angle = 9;
  bool has_blue2angle() const;
  void clear_blue2angle();
  static const int kBlue2AngleFieldNumber = 9;
  float blue2angle() const;
  void set_blue2angle(float value);

  // @@protoc_insertion_point(class_scope:RoboimeData.DataBlue)
 private:
  inline void set_has_blue0posex();
  inline void clear_has_blue0posex();
  inline void set_has_blue0posey();
  inline void clear_has_blue0posey();
  inline void set_has_blue0angle();
  inline void clear_has_blue0angle();
  inline void set_has_blue1posex();
  inline void clear_has_blue1posex();
  inline void set_has_blue1posey();
  inline void clear_has_blue1posey();
  inline void set_has_blue1angle();
  inline void clear_has_blue1angle();
  inline void set_has_blue2posex();
  inline void clear_has_blue2posex();
  inline void set_has_blue2posey();
  inline void clear_has_blue2posey();
  inline void set_has_blue2angle();
  inline void clear_has_blue2angle();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float blue0posex_;
  float blue0posey_;
  float blue0angle_;
  float blue1posex_;
  float blue1posey_;
  float blue1angle_;
  float blue2posex_;
  float blue2posey_;
  float blue2angle_;
  friend void  protobuf_AddDesc_roboime_2eproto();
  friend void protobuf_AssignDesc_roboime_2eproto();
  friend void protobuf_ShutdownFile_roboime_2eproto();

  void InitAsDefaultInstance();
  static DataBlue* default_instance_;
};
// -------------------------------------------------------------------

class DataReceiver : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:RoboimeData.DataReceiver) */ {
 public:
  DataReceiver();
  virtual ~DataReceiver();

  DataReceiver(const DataReceiver& from);

  inline DataReceiver& operator=(const DataReceiver& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DataReceiver& default_instance();

  void Swap(DataReceiver* other);

  // implements Message ----------------------------------------------

  inline DataReceiver* New() const { return New(NULL); }

  DataReceiver* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataReceiver& from);
  void MergeFrom(const DataReceiver& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DataReceiver* other);
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

  // required uint32 friend0VelEsq = 1;
  bool has_friend0velesq() const;
  void clear_friend0velesq();
  static const int kFriend0VelEsqFieldNumber = 1;
  ::google::protobuf::uint32 friend0velesq() const;
  void set_friend0velesq(::google::protobuf::uint32 value);

  // required uint32 friend0VelDir = 2;
  bool has_friend0veldir() const;
  void clear_friend0veldir();
  static const int kFriend0VelDirFieldNumber = 2;
  ::google::protobuf::uint32 friend0veldir() const;
  void set_friend0veldir(::google::protobuf::uint32 value);

  // required uint32 friend1VelEsq = 3;
  bool has_friend1velesq() const;
  void clear_friend1velesq();
  static const int kFriend1VelEsqFieldNumber = 3;
  ::google::protobuf::uint32 friend1velesq() const;
  void set_friend1velesq(::google::protobuf::uint32 value);

  // required uint32 friend1VelDir = 4;
  bool has_friend1veldir() const;
  void clear_friend1veldir();
  static const int kFriend1VelDirFieldNumber = 4;
  ::google::protobuf::uint32 friend1veldir() const;
  void set_friend1veldir(::google::protobuf::uint32 value);

  // required uint32 friend2VelEsq = 5;
  bool has_friend2velesq() const;
  void clear_friend2velesq();
  static const int kFriend2VelEsqFieldNumber = 5;
  ::google::protobuf::uint32 friend2velesq() const;
  void set_friend2velesq(::google::protobuf::uint32 value);

  // required uint32 friend2VelDir = 6;
  bool has_friend2veldir() const;
  void clear_friend2veldir();
  static const int kFriend2VelDirFieldNumber = 6;
  ::google::protobuf::uint32 friend2veldir() const;
  void set_friend2veldir(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:RoboimeData.DataReceiver)
 private:
  inline void set_has_friend0velesq();
  inline void clear_has_friend0velesq();
  inline void set_has_friend0veldir();
  inline void clear_has_friend0veldir();
  inline void set_has_friend1velesq();
  inline void clear_has_friend1velesq();
  inline void set_has_friend1veldir();
  inline void clear_has_friend1veldir();
  inline void set_has_friend2velesq();
  inline void clear_has_friend2velesq();
  inline void set_has_friend2veldir();
  inline void clear_has_friend2veldir();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 friend0velesq_;
  ::google::protobuf::uint32 friend0veldir_;
  ::google::protobuf::uint32 friend1velesq_;
  ::google::protobuf::uint32 friend1veldir_;
  ::google::protobuf::uint32 friend2velesq_;
  ::google::protobuf::uint32 friend2veldir_;
  friend void  protobuf_AddDesc_roboime_2eproto();
  friend void protobuf_AssignDesc_roboime_2eproto();
  friend void protobuf_ShutdownFile_roboime_2eproto();

  void InitAsDefaultInstance();
  static DataReceiver* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DataYellow

// required float ballPoseX = 1;
inline bool DataYellow::has_ballposex() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataYellow::set_has_ballposex() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataYellow::clear_has_ballposex() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataYellow::clear_ballposex() {
  ballposex_ = 0;
  clear_has_ballposex();
}
inline float DataYellow::ballposex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.ballPoseX)
  return ballposex_;
}
inline void DataYellow::set_ballposex(float value) {
  set_has_ballposex();
  ballposex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.ballPoseX)
}

// required float ballPoseY = 2;
inline bool DataYellow::has_ballposey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataYellow::set_has_ballposey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataYellow::clear_has_ballposey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataYellow::clear_ballposey() {
  ballposey_ = 0;
  clear_has_ballposey();
}
inline float DataYellow::ballposey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.ballPoseY)
  return ballposey_;
}
inline void DataYellow::set_ballposey(float value) {
  set_has_ballposey();
  ballposey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.ballPoseY)
}

// required float yellow0PoseX = 3;
inline bool DataYellow::has_yellow0posex() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DataYellow::set_has_yellow0posex() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DataYellow::clear_has_yellow0posex() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DataYellow::clear_yellow0posex() {
  yellow0posex_ = 0;
  clear_has_yellow0posex();
}
inline float DataYellow::yellow0posex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow0PoseX)
  return yellow0posex_;
}
inline void DataYellow::set_yellow0posex(float value) {
  set_has_yellow0posex();
  yellow0posex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow0PoseX)
}

// required float yellow0PoseY = 4;
inline bool DataYellow::has_yellow0posey() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DataYellow::set_has_yellow0posey() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DataYellow::clear_has_yellow0posey() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DataYellow::clear_yellow0posey() {
  yellow0posey_ = 0;
  clear_has_yellow0posey();
}
inline float DataYellow::yellow0posey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow0PoseY)
  return yellow0posey_;
}
inline void DataYellow::set_yellow0posey(float value) {
  set_has_yellow0posey();
  yellow0posey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow0PoseY)
}

// required float yellow0Angle = 5;
inline bool DataYellow::has_yellow0angle() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DataYellow::set_has_yellow0angle() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DataYellow::clear_has_yellow0angle() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DataYellow::clear_yellow0angle() {
  yellow0angle_ = 0;
  clear_has_yellow0angle();
}
inline float DataYellow::yellow0angle() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow0Angle)
  return yellow0angle_;
}
inline void DataYellow::set_yellow0angle(float value) {
  set_has_yellow0angle();
  yellow0angle_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow0Angle)
}

// required float yellow1PoseX = 6;
inline bool DataYellow::has_yellow1posex() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DataYellow::set_has_yellow1posex() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DataYellow::clear_has_yellow1posex() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DataYellow::clear_yellow1posex() {
  yellow1posex_ = 0;
  clear_has_yellow1posex();
}
inline float DataYellow::yellow1posex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow1PoseX)
  return yellow1posex_;
}
inline void DataYellow::set_yellow1posex(float value) {
  set_has_yellow1posex();
  yellow1posex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow1PoseX)
}

// required float yellow1PoseY = 7;
inline bool DataYellow::has_yellow1posey() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DataYellow::set_has_yellow1posey() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DataYellow::clear_has_yellow1posey() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DataYellow::clear_yellow1posey() {
  yellow1posey_ = 0;
  clear_has_yellow1posey();
}
inline float DataYellow::yellow1posey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow1PoseY)
  return yellow1posey_;
}
inline void DataYellow::set_yellow1posey(float value) {
  set_has_yellow1posey();
  yellow1posey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow1PoseY)
}

// required float yellow1Angle = 8;
inline bool DataYellow::has_yellow1angle() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DataYellow::set_has_yellow1angle() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DataYellow::clear_has_yellow1angle() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DataYellow::clear_yellow1angle() {
  yellow1angle_ = 0;
  clear_has_yellow1angle();
}
inline float DataYellow::yellow1angle() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow1Angle)
  return yellow1angle_;
}
inline void DataYellow::set_yellow1angle(float value) {
  set_has_yellow1angle();
  yellow1angle_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow1Angle)
}

// required float yellow2PoseX = 9;
inline bool DataYellow::has_yellow2posex() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DataYellow::set_has_yellow2posex() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DataYellow::clear_has_yellow2posex() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DataYellow::clear_yellow2posex() {
  yellow2posex_ = 0;
  clear_has_yellow2posex();
}
inline float DataYellow::yellow2posex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow2PoseX)
  return yellow2posex_;
}
inline void DataYellow::set_yellow2posex(float value) {
  set_has_yellow2posex();
  yellow2posex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow2PoseX)
}

// required float yellow2PoseY = 10;
inline bool DataYellow::has_yellow2posey() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void DataYellow::set_has_yellow2posey() {
  _has_bits_[0] |= 0x00000200u;
}
inline void DataYellow::clear_has_yellow2posey() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void DataYellow::clear_yellow2posey() {
  yellow2posey_ = 0;
  clear_has_yellow2posey();
}
inline float DataYellow::yellow2posey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow2PoseY)
  return yellow2posey_;
}
inline void DataYellow::set_yellow2posey(float value) {
  set_has_yellow2posey();
  yellow2posey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow2PoseY)
}

// required float yellow2Angle = 11;
inline bool DataYellow::has_yellow2angle() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void DataYellow::set_has_yellow2angle() {
  _has_bits_[0] |= 0x00000400u;
}
inline void DataYellow::clear_has_yellow2angle() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void DataYellow::clear_yellow2angle() {
  yellow2angle_ = 0;
  clear_has_yellow2angle();
}
inline float DataYellow::yellow2angle() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataYellow.yellow2Angle)
  return yellow2angle_;
}
inline void DataYellow::set_yellow2angle(float value) {
  set_has_yellow2angle();
  yellow2angle_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataYellow.yellow2Angle)
}

// -------------------------------------------------------------------

// DataBlue

// required float blue0PoseX = 1;
inline bool DataBlue::has_blue0posex() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataBlue::set_has_blue0posex() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataBlue::clear_has_blue0posex() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataBlue::clear_blue0posex() {
  blue0posex_ = 0;
  clear_has_blue0posex();
}
inline float DataBlue::blue0posex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue0PoseX)
  return blue0posex_;
}
inline void DataBlue::set_blue0posex(float value) {
  set_has_blue0posex();
  blue0posex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue0PoseX)
}

// required float blue0PoseY = 2;
inline bool DataBlue::has_blue0posey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataBlue::set_has_blue0posey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataBlue::clear_has_blue0posey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataBlue::clear_blue0posey() {
  blue0posey_ = 0;
  clear_has_blue0posey();
}
inline float DataBlue::blue0posey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue0PoseY)
  return blue0posey_;
}
inline void DataBlue::set_blue0posey(float value) {
  set_has_blue0posey();
  blue0posey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue0PoseY)
}

// required float blue0Angle = 3;
inline bool DataBlue::has_blue0angle() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DataBlue::set_has_blue0angle() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DataBlue::clear_has_blue0angle() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DataBlue::clear_blue0angle() {
  blue0angle_ = 0;
  clear_has_blue0angle();
}
inline float DataBlue::blue0angle() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue0Angle)
  return blue0angle_;
}
inline void DataBlue::set_blue0angle(float value) {
  set_has_blue0angle();
  blue0angle_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue0Angle)
}

// required float blue1PoseX = 4;
inline bool DataBlue::has_blue1posex() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DataBlue::set_has_blue1posex() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DataBlue::clear_has_blue1posex() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DataBlue::clear_blue1posex() {
  blue1posex_ = 0;
  clear_has_blue1posex();
}
inline float DataBlue::blue1posex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue1PoseX)
  return blue1posex_;
}
inline void DataBlue::set_blue1posex(float value) {
  set_has_blue1posex();
  blue1posex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue1PoseX)
}

// required float blue1PoseY = 5;
inline bool DataBlue::has_blue1posey() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DataBlue::set_has_blue1posey() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DataBlue::clear_has_blue1posey() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DataBlue::clear_blue1posey() {
  blue1posey_ = 0;
  clear_has_blue1posey();
}
inline float DataBlue::blue1posey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue1PoseY)
  return blue1posey_;
}
inline void DataBlue::set_blue1posey(float value) {
  set_has_blue1posey();
  blue1posey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue1PoseY)
}

// required float blue1Angle = 6;
inline bool DataBlue::has_blue1angle() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DataBlue::set_has_blue1angle() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DataBlue::clear_has_blue1angle() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DataBlue::clear_blue1angle() {
  blue1angle_ = 0;
  clear_has_blue1angle();
}
inline float DataBlue::blue1angle() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue1Angle)
  return blue1angle_;
}
inline void DataBlue::set_blue1angle(float value) {
  set_has_blue1angle();
  blue1angle_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue1Angle)
}

// required float blue2PoseX = 7;
inline bool DataBlue::has_blue2posex() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DataBlue::set_has_blue2posex() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DataBlue::clear_has_blue2posex() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DataBlue::clear_blue2posex() {
  blue2posex_ = 0;
  clear_has_blue2posex();
}
inline float DataBlue::blue2posex() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue2PoseX)
  return blue2posex_;
}
inline void DataBlue::set_blue2posex(float value) {
  set_has_blue2posex();
  blue2posex_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue2PoseX)
}

// required float blue2PoseY = 8;
inline bool DataBlue::has_blue2posey() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DataBlue::set_has_blue2posey() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DataBlue::clear_has_blue2posey() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DataBlue::clear_blue2posey() {
  blue2posey_ = 0;
  clear_has_blue2posey();
}
inline float DataBlue::blue2posey() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue2PoseY)
  return blue2posey_;
}
inline void DataBlue::set_blue2posey(float value) {
  set_has_blue2posey();
  blue2posey_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue2PoseY)
}

// required float blue2Angle = 9;
inline bool DataBlue::has_blue2angle() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DataBlue::set_has_blue2angle() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DataBlue::clear_has_blue2angle() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DataBlue::clear_blue2angle() {
  blue2angle_ = 0;
  clear_has_blue2angle();
}
inline float DataBlue::blue2angle() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataBlue.blue2Angle)
  return blue2angle_;
}
inline void DataBlue::set_blue2angle(float value) {
  set_has_blue2angle();
  blue2angle_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataBlue.blue2Angle)
}

// -------------------------------------------------------------------

// DataReceiver

// required uint32 friend0VelEsq = 1;
inline bool DataReceiver::has_friend0velesq() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataReceiver::set_has_friend0velesq() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataReceiver::clear_has_friend0velesq() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataReceiver::clear_friend0velesq() {
  friend0velesq_ = 0u;
  clear_has_friend0velesq();
}
inline ::google::protobuf::uint32 DataReceiver::friend0velesq() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataReceiver.friend0VelEsq)
  return friend0velesq_;
}
inline void DataReceiver::set_friend0velesq(::google::protobuf::uint32 value) {
  set_has_friend0velesq();
  friend0velesq_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataReceiver.friend0VelEsq)
}

// required uint32 friend0VelDir = 2;
inline bool DataReceiver::has_friend0veldir() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DataReceiver::set_has_friend0veldir() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DataReceiver::clear_has_friend0veldir() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DataReceiver::clear_friend0veldir() {
  friend0veldir_ = 0u;
  clear_has_friend0veldir();
}
inline ::google::protobuf::uint32 DataReceiver::friend0veldir() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataReceiver.friend0VelDir)
  return friend0veldir_;
}
inline void DataReceiver::set_friend0veldir(::google::protobuf::uint32 value) {
  set_has_friend0veldir();
  friend0veldir_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataReceiver.friend0VelDir)
}

// required uint32 friend1VelEsq = 3;
inline bool DataReceiver::has_friend1velesq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DataReceiver::set_has_friend1velesq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DataReceiver::clear_has_friend1velesq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DataReceiver::clear_friend1velesq() {
  friend1velesq_ = 0u;
  clear_has_friend1velesq();
}
inline ::google::protobuf::uint32 DataReceiver::friend1velesq() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataReceiver.friend1VelEsq)
  return friend1velesq_;
}
inline void DataReceiver::set_friend1velesq(::google::protobuf::uint32 value) {
  set_has_friend1velesq();
  friend1velesq_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataReceiver.friend1VelEsq)
}

// required uint32 friend1VelDir = 4;
inline bool DataReceiver::has_friend1veldir() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DataReceiver::set_has_friend1veldir() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DataReceiver::clear_has_friend1veldir() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DataReceiver::clear_friend1veldir() {
  friend1veldir_ = 0u;
  clear_has_friend1veldir();
}
inline ::google::protobuf::uint32 DataReceiver::friend1veldir() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataReceiver.friend1VelDir)
  return friend1veldir_;
}
inline void DataReceiver::set_friend1veldir(::google::protobuf::uint32 value) {
  set_has_friend1veldir();
  friend1veldir_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataReceiver.friend1VelDir)
}

// required uint32 friend2VelEsq = 5;
inline bool DataReceiver::has_friend2velesq() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DataReceiver::set_has_friend2velesq() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DataReceiver::clear_has_friend2velesq() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DataReceiver::clear_friend2velesq() {
  friend2velesq_ = 0u;
  clear_has_friend2velesq();
}
inline ::google::protobuf::uint32 DataReceiver::friend2velesq() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataReceiver.friend2VelEsq)
  return friend2velesq_;
}
inline void DataReceiver::set_friend2velesq(::google::protobuf::uint32 value) {
  set_has_friend2velesq();
  friend2velesq_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataReceiver.friend2VelEsq)
}

// required uint32 friend2VelDir = 6;
inline bool DataReceiver::has_friend2veldir() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DataReceiver::set_has_friend2veldir() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DataReceiver::clear_has_friend2veldir() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DataReceiver::clear_friend2veldir() {
  friend2veldir_ = 0u;
  clear_has_friend2veldir();
}
inline ::google::protobuf::uint32 DataReceiver::friend2veldir() const {
  // @@protoc_insertion_point(field_get:RoboimeData.DataReceiver.friend2VelDir)
  return friend2veldir_;
}
inline void DataReceiver::set_friend2veldir(::google::protobuf::uint32 value) {
  set_has_friend2veldir();
  friend2veldir_ = value;
  // @@protoc_insertion_point(field_set:RoboimeData.DataReceiver.friend2VelDir)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace RoboimeData

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_roboime_2eproto__INCLUDED
