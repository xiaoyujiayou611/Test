// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_proto3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test_proto3.pb.h"

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

}  // namespace


void protobuf_AssignDesc_test_5fproto3_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_5fproto3_2eproto() {
  protobuf_AddDesc_test_5fproto3_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test_proto3.proto");
  GOOGLE_CHECK(file != NULL);
  Test_descriptor_ = file->message_type(0);
  static const int Test_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, a_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, b_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, c_),
  };
  Test_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Test_descriptor_,
      Test::default_instance_,
      Test_offsets_,
      -1,
      -1,
      -1,
      sizeof(Test),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_5fproto3_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Test_descriptor_, &Test::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_5fproto3_2eproto() {
  delete Test::default_instance_;
  delete Test_reflection_;
}

void protobuf_AddDesc_test_5fproto3_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_5fproto3_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021test_proto3.proto\"\'\n\004Test\022\t\n\001a\030\001 \001(\r\022\t"
    "\n\001b\030\002 \001(\t\022\t\n\001c\030\003 \001(\004b\006proto3", 68);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test_proto3.proto", &protobuf_RegisterTypes);
  Test::default_instance_ = new Test();
  Test::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_5fproto3_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_5fproto3_2eproto {
  StaticDescriptorInitializer_test_5fproto3_2eproto() {
    protobuf_AddDesc_test_5fproto3_2eproto();
  }
} static_descriptor_initializer_test_5fproto3_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Test::kAFieldNumber;
const int Test::kBFieldNumber;
const int Test::kCFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Test::Test()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Test)
}

void Test::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Test::Test(const Test& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Test)
}

void Test::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  a_ = 0u;
  b_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  c_ = GOOGLE_ULONGLONG(0);
}

Test::~Test() {
  // @@protoc_insertion_point(destructor:Test)
  SharedDtor();
}

void Test::SharedDtor() {
  b_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
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
  if (default_instance_ == NULL) protobuf_AddDesc_test_5fproto3_2eproto();
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
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Test, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Test*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(c_, a_);
  b_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

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
      // optional uint32 a = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &a_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_b;
        break;
      }

      // optional string b = 2;
      case 2: {
        if (tag == 18) {
         parse_b:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_b()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->b().data(), this->b().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Test.b"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_c;
        break;
      }

      // optional uint64 c = 3;
      case 3: {
        if (tag == 24) {
         parse_c:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &c_)));

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
  // optional uint32 a = 1;
  if (this->a() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->a(), output);
  }

  // optional string b = 2;
  if (this->b().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->b().data(), this->b().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.b");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->b(), output);
  }

  // optional uint64 c = 3;
  if (this->c() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->c(), output);
  }

  // @@protoc_insertion_point(serialize_end:Test)
}

::google::protobuf::uint8* Test::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Test)
  // optional uint32 a = 1;
  if (this->a() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->a(), target);
  }

  // optional string b = 2;
  if (this->b().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->b().data(), this->b().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.b");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->b(), target);
  }

  // optional uint64 c = 3;
  if (this->c() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->c(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Test)
  return target;
}

int Test::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:Test)
  int total_size = 0;

  // optional uint32 a = 1;
  if (this->a() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->a());
  }

  // optional string b = 2;
  if (this->b().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->b());
  }

  // optional uint64 c = 3;
  if (this->c() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->c());
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
  if (from.a() != 0) {
    set_a(from.a());
  }
  if (from.b().size() > 0) {

    b_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.b_);
  }
  if (from.c() != 0) {
    set_c(from.c());
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
  std::swap(a_, other->a_);
  b_.Swap(&other->b_);
  std::swap(c_, other->c_);
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

// optional uint32 a = 1;
void Test::clear_a() {
  a_ = 0u;
}
 ::google::protobuf::uint32 Test::a() const {
  // @@protoc_insertion_point(field_get:Test.a)
  return a_;
}
 void Test::set_a(::google::protobuf::uint32 value) {
  
  a_ = value;
  // @@protoc_insertion_point(field_set:Test.a)
}

// optional string b = 2;
void Test::clear_b() {
  b_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Test::b() const {
  // @@protoc_insertion_point(field_get:Test.b)
  return b_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Test::set_b(const ::std::string& value) {
  
  b_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Test.b)
}
 void Test::set_b(const char* value) {
  
  b_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Test.b)
}
 void Test::set_b(const char* value, size_t size) {
  
  b_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Test.b)
}
 ::std::string* Test::mutable_b() {
  
  // @@protoc_insertion_point(field_mutable:Test.b)
  return b_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Test::release_b() {
  // @@protoc_insertion_point(field_release:Test.b)
  
  return b_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Test::set_allocated_b(::std::string* b) {
  if (b != NULL) {
    
  } else {
    
  }
  b_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), b);
  // @@protoc_insertion_point(field_set_allocated:Test.b)
}

// optional uint64 c = 3;
void Test::clear_c() {
  c_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 Test::c() const {
  // @@protoc_insertion_point(field_get:Test.c)
  return c_;
}
 void Test::set_c(::google::protobuf::uint64 value) {
  
  c_ = value;
  // @@protoc_insertion_point(field_set:Test.c)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
