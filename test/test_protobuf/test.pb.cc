// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

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

const ::google::protobuf::Descriptor* Test_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Test_reflection_ = NULL;
const ::google::protobuf::Descriptor* TestString_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestString_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  Test_descriptor_ = file->message_type(0);
  static const int Test_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, ts_set_),
  };
  Test_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Test_descriptor_,
      Test::default_instance_,
      Test_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, _has_bits_[0]),
      -1,
      -1,
      sizeof(Test),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, _internal_metadata_),
      -1);
  TestString_descriptor_ = file->message_type(1);
  static const int TestString_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestString, xxx_),
  };
  TestString_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestString_descriptor_,
      TestString::default_instance_,
      TestString_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestString, _has_bits_[0]),
      -1,
      -1,
      sizeof(TestString),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestString, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Test_descriptor_, &Test::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestString_descriptor_, &TestString::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  delete Test::default_instance_;
  delete Test_reflection_;
  delete TestString::default_instance_;
  delete TestString_reflection_;
}

void protobuf_AddDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\"\026\n\004Test\022\016\n\006ts_set\030\001 \003(\004\"\031\n\n"
    "TestString\022\013\n\003xxx\030\001 \003(\t", 63);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  Test::default_instance_ = new Test();
  TestString::default_instance_ = new TestString();
  Test::default_instance_->InitAsDefaultInstance();
  TestString::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Test::kTsSetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Test::Test()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Test)
}

void Test::InitAsDefaultInstance() {
}

Test::Test(const Test& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Test)
}

void Test::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Test::~Test() {
  // @@protoc_insertion_point(destructor:Test)
  SharedDtor();
}

void Test::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Test::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Test::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Test_descriptor_;
}

const Test& Test::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

Test* Test::default_instance_ = NULL;

Test* Test::New(::google::protobuf::Arena* arena) const {
  Test* n = new Test;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Test::Clear() {
// @@protoc_insertion_point(message_clear_start:Test)
  ts_set_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Test::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Test)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 ts_set = 1;
      case 1: {
        if (tag == 8) {
         parse_ts_set:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 8, input, this->mutable_ts_set())));
        } else if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_ts_set())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(8)) goto parse_ts_set;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Test)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Test)
  return false;
#undef DO_
}

void Test::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Test)
  // repeated uint64 ts_set = 1;
  for (int i = 0; i < this->ts_set_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      1, this->ts_set(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Test)
}

::google::protobuf::uint8* Test::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Test)
  // repeated uint64 ts_set = 1;
  for (int i = 0; i < this->ts_set_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64ToArray(1, this->ts_set(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Test)
  return target;
}

int Test::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Test)
  int total_size = 0;

  // repeated uint64 ts_set = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->ts_set_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->ts_set(i));
    }
    total_size += 1 * this->ts_set_size() + data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Test::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Test)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Test* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Test>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Test)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Test)
    MergeFrom(*source);
  }
}

void Test::MergeFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Test)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  ts_set_.MergeFrom(from.ts_set_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Test::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Test::CopyFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Test::IsInitialized() const {

  return true;
}

void Test::Swap(Test* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Test::InternalSwap(Test* other) {
  ts_set_.UnsafeArenaSwap(&other->ts_set_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Test::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Test_descriptor_;
  metadata.reflection = Test_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Test

// repeated uint64 ts_set = 1;
int Test::ts_set_size() const {
  return ts_set_.size();
}
void Test::clear_ts_set() {
  ts_set_.Clear();
}
 ::google::protobuf::uint64 Test::ts_set(int index) const {
  // @@protoc_insertion_point(field_get:Test.ts_set)
  return ts_set_.Get(index);
}
 void Test::set_ts_set(int index, ::google::protobuf::uint64 value) {
  ts_set_.Set(index, value);
  // @@protoc_insertion_point(field_set:Test.ts_set)
}
 void Test::add_ts_set(::google::protobuf::uint64 value) {
  ts_set_.Add(value);
  // @@protoc_insertion_point(field_add:Test.ts_set)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Test::ts_set() const {
  // @@protoc_insertion_point(field_list:Test.ts_set)
  return ts_set_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Test::mutable_ts_set() {
  // @@protoc_insertion_point(field_mutable_list:Test.ts_set)
  return &ts_set_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestString::kXxxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestString::TestString()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:TestString)
}

void TestString::InitAsDefaultInstance() {
}

TestString::TestString(const TestString& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:TestString)
}

void TestString::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestString::~TestString() {
  // @@protoc_insertion_point(destructor:TestString)
  SharedDtor();
}

void TestString::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TestString::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestString::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestString_descriptor_;
}

const TestString& TestString::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

TestString* TestString::default_instance_ = NULL;

TestString* TestString::New(::google::protobuf::Arena* arena) const {
  TestString* n = new TestString;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TestString::Clear() {
// @@protoc_insertion_point(message_clear_start:TestString)
  xxx_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TestString::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:TestString)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string xxx = 1;
      case 1: {
        if (tag == 10) {
         parse_xxx:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_xxx()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->xxx(this->xxx_size() - 1).data(),
            this->xxx(this->xxx_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "TestString.xxx");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_xxx;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:TestString)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:TestString)
  return false;
#undef DO_
}

void TestString::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:TestString)
  // repeated string xxx = 1;
  for (int i = 0; i < this->xxx_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->xxx(i).data(), this->xxx(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "TestString.xxx");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->xxx(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:TestString)
}

::google::protobuf::uint8* TestString::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestString)
  // repeated string xxx = 1;
  for (int i = 0; i < this->xxx_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->xxx(i).data(), this->xxx(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "TestString.xxx");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->xxx(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestString)
  return target;
}

int TestString::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:TestString)
  int total_size = 0;

  // repeated string xxx = 1;
  total_size += 1 * this->xxx_size();
  for (int i = 0; i < this->xxx_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->xxx(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestString::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TestString)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TestString* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TestString>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TestString)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TestString)
    MergeFrom(*source);
  }
}

void TestString::MergeFrom(const TestString& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestString)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  xxx_.MergeFrom(from.xxx_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TestString::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TestString)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestString::CopyFrom(const TestString& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestString)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestString::IsInitialized() const {

  return true;
}

void TestString::Swap(TestString* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestString::InternalSwap(TestString* other) {
  xxx_.UnsafeArenaSwap(&other->xxx_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestString::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestString_descriptor_;
  metadata.reflection = TestString_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestString

// repeated string xxx = 1;
int TestString::xxx_size() const {
  return xxx_.size();
}
void TestString::clear_xxx() {
  xxx_.Clear();
}
 const ::std::string& TestString::xxx(int index) const {
  // @@protoc_insertion_point(field_get:TestString.xxx)
  return xxx_.Get(index);
}
 ::std::string* TestString::mutable_xxx(int index) {
  // @@protoc_insertion_point(field_mutable:TestString.xxx)
  return xxx_.Mutable(index);
}
 void TestString::set_xxx(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:TestString.xxx)
  xxx_.Mutable(index)->assign(value);
}
 void TestString::set_xxx(int index, const char* value) {
  xxx_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:TestString.xxx)
}
 void TestString::set_xxx(int index, const char* value, size_t size) {
  xxx_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TestString.xxx)
}
 ::std::string* TestString::add_xxx() {
  // @@protoc_insertion_point(field_add_mutable:TestString.xxx)
  return xxx_.Add();
}
 void TestString::add_xxx(const ::std::string& value) {
  xxx_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:TestString.xxx)
}
 void TestString::add_xxx(const char* value) {
  xxx_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:TestString.xxx)
}
 void TestString::add_xxx(const char* value, size_t size) {
  xxx_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:TestString.xxx)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
TestString::xxx() const {
  // @@protoc_insertion_point(field_list:TestString.xxx)
  return xxx_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
TestString::mutable_xxx() {
  // @@protoc_insertion_point(field_mutable_list:TestString.xxx)
  return &xxx_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)