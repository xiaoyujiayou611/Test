// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_map.proto

#include "test_map.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_test_5fmap_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Data_test_5fmap_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_test_5fmap_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DataSet_test_5fmap_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_test_5fmap_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MapTest_MapItemEntry_DoNotUse_test_5fmap_2eproto;
class DataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Data> _instance;
} _Data_default_instance_;
class DataSetDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DataSet> _instance;
} _DataSet_default_instance_;
class MapTest_MapItemEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MapTest_MapItemEntry_DoNotUse> _instance;
} _MapTest_MapItemEntry_DoNotUse_default_instance_;
class MapTestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MapTest> _instance;
} _MapTest_default_instance_;
static void InitDefaultsscc_info_Data_test_5fmap_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Data_default_instance_;
    new (ptr) ::Data();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Data::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Data_test_5fmap_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Data_test_5fmap_2eproto}, {}};

static void InitDefaultsscc_info_DataSet_test_5fmap_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_DataSet_default_instance_;
    new (ptr) ::DataSet();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::DataSet::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_DataSet_test_5fmap_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_DataSet_test_5fmap_2eproto}, {
      &scc_info_Data_test_5fmap_2eproto.base,}};

static void InitDefaultsscc_info_MapTest_test_5fmap_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MapTest_default_instance_;
    new (ptr) ::MapTest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::MapTest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MapTest_test_5fmap_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_MapTest_test_5fmap_2eproto}, {
      &scc_info_MapTest_MapItemEntry_DoNotUse_test_5fmap_2eproto.base,}};

static void InitDefaultsscc_info_MapTest_MapItemEntry_DoNotUse_test_5fmap_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MapTest_MapItemEntry_DoNotUse_default_instance_;
    new (ptr) ::MapTest_MapItemEntry_DoNotUse();
  }
  ::MapTest_MapItemEntry_DoNotUse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MapTest_MapItemEntry_DoNotUse_test_5fmap_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_MapTest_MapItemEntry_DoNotUse_test_5fmap_2eproto}, {
      &scc_info_DataSet_test_5fmap_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_test_5fmap_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_test_5fmap_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_test_5fmap_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_test_5fmap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Data, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Data, data_name_),
  PROTOBUF_FIELD_OFFSET(::Data, id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::DataSet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::DataSet, data_),
  PROTOBUF_FIELD_OFFSET(::MapTest_MapItemEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::MapTest_MapItemEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MapTest_MapItemEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::MapTest_MapItemEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MapTest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MapTest, map_item_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Data)},
  { 7, -1, sizeof(::DataSet)},
  { 13, 20, sizeof(::MapTest_MapItemEntry_DoNotUse)},
  { 22, -1, sizeof(::MapTest)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Data_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_DataSet_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MapTest_MapItemEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MapTest_default_instance_),
};

const char descriptor_table_protodef_test_5fmap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016test_map.proto\"%\n\004Data\022\021\n\tdata_name\030\001 "
  "\001(\t\022\n\n\002id\030\002 \001(\r\"\036\n\007DataSet\022\023\n\004data\030\001 \003(\013"
  "2\005.Data\"l\n\007MapTest\022\'\n\010map_item\030\001 \003(\0132\025.M"
  "apTest.MapItemEntry\0328\n\014MapItemEntry\022\013\n\003k"
  "ey\030\001 \001(\t\022\027\n\005value\030\002 \001(\0132\010.DataSet:\0028\001b\006p"
  "roto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_test_5fmap_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_test_5fmap_2eproto_sccs[4] = {
  &scc_info_Data_test_5fmap_2eproto.base,
  &scc_info_DataSet_test_5fmap_2eproto.base,
  &scc_info_MapTest_test_5fmap_2eproto.base,
  &scc_info_MapTest_MapItemEntry_DoNotUse_test_5fmap_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_test_5fmap_2eproto_once;
static bool descriptor_table_test_5fmap_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_5fmap_2eproto = {
  &descriptor_table_test_5fmap_2eproto_initialized, descriptor_table_protodef_test_5fmap_2eproto, "test_map.proto", 205,
  &descriptor_table_test_5fmap_2eproto_once, descriptor_table_test_5fmap_2eproto_sccs, descriptor_table_test_5fmap_2eproto_deps, 4, 0,
  schemas, file_default_instances, TableStruct_test_5fmap_2eproto::offsets,
  file_level_metadata_test_5fmap_2eproto, 4, file_level_enum_descriptors_test_5fmap_2eproto, file_level_service_descriptors_test_5fmap_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_test_5fmap_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_test_5fmap_2eproto), true);

// ===================================================================

void Data::InitAsDefaultInstance() {
}
class Data::_Internal {
 public:
};

Data::Data()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Data)
}
Data::Data(const Data& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data_name().empty()) {
    data_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_name_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:Data)
}

void Data::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Data_test_5fmap_2eproto.base);
  data_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  id_ = 0u;
}

Data::~Data() {
  // @@protoc_insertion_point(destructor:Data)
  SharedDtor();
}

void Data::SharedDtor() {
  data_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Data::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Data& Data::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Data_test_5fmap_2eproto.base);
  return *internal_default_instance();
}


void Data::Clear() {
// @@protoc_insertion_point(message_clear_start:Data)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  id_ = 0u;
  _internal_metadata_.Clear();
}

const char* Data::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string data_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_data_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Data.data_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Data::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Data)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string data_name = 1;
  if (this->data_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_data_name().data(), static_cast<int>(this->_internal_data_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Data.data_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_data_name(), target);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Data)
  return target;
}

size_t Data::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Data)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string data_name = 1;
  if (this->data_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data_name());
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Data::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Data)
  GOOGLE_DCHECK_NE(&from, this);
  const Data* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Data>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Data)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Data)
    MergeFrom(*source);
  }
}

void Data::MergeFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Data)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data_name().size() > 0) {

    data_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_name_);
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
}

void Data::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Data::CopyFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Data::IsInitialized() const {
  return true;
}

void Data::InternalSwap(Data* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  data_name_.Swap(&other->data_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Data::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void DataSet::InitAsDefaultInstance() {
}
class DataSet::_Internal {
 public:
};

DataSet::DataSet()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DataSet)
}
DataSet::DataSet(const DataSet& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:DataSet)
}

void DataSet::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DataSet_test_5fmap_2eproto.base);
}

DataSet::~DataSet() {
  // @@protoc_insertion_point(destructor:DataSet)
  SharedDtor();
}

void DataSet::SharedDtor() {
}

void DataSet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DataSet& DataSet::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DataSet_test_5fmap_2eproto.base);
  return *internal_default_instance();
}


void DataSet::Clear() {
// @@protoc_insertion_point(message_clear_start:DataSet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  _internal_metadata_.Clear();
}

const char* DataSet::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .Data data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_data(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DataSet::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:DataSet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Data data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_data_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_data(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DataSet)
  return target;
}

size_t DataSet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DataSet)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Data data = 1;
  total_size += 1UL * this->_internal_data_size();
  for (const auto& msg : this->data_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DataSet::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DataSet)
  GOOGLE_DCHECK_NE(&from, this);
  const DataSet* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DataSet>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DataSet)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DataSet)
    MergeFrom(*source);
  }
}

void DataSet::MergeFrom(const DataSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DataSet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void DataSet::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DataSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataSet::CopyFrom(const DataSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DataSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataSet::IsInitialized() const {
  return true;
}

void DataSet::InternalSwap(DataSet* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  data_.InternalSwap(&other->data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DataSet::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

MapTest_MapItemEntry_DoNotUse::MapTest_MapItemEntry_DoNotUse() {}
MapTest_MapItemEntry_DoNotUse::MapTest_MapItemEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void MapTest_MapItemEntry_DoNotUse::MergeFrom(const MapTest_MapItemEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata MapTest_MapItemEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void MapTest_MapItemEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

void MapTest::InitAsDefaultInstance() {
}
class MapTest::_Internal {
 public:
};

MapTest::MapTest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MapTest)
}
MapTest::MapTest(const MapTest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  map_item_.MergeFrom(from.map_item_);
  // @@protoc_insertion_point(copy_constructor:MapTest)
}

void MapTest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MapTest_test_5fmap_2eproto.base);
}

MapTest::~MapTest() {
  // @@protoc_insertion_point(destructor:MapTest)
  SharedDtor();
}

void MapTest::SharedDtor() {
}

void MapTest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MapTest& MapTest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MapTest_test_5fmap_2eproto.base);
  return *internal_default_instance();
}


void MapTest::Clear() {
// @@protoc_insertion_point(message_clear_start:MapTest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  map_item_.Clear();
  _internal_metadata_.Clear();
}

const char* MapTest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // map<string, .DataSet> map_item = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&map_item_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MapTest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MapTest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, .DataSet> map_item = 1;
  if (!this->_internal_map_item().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::DataSet >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "MapTest.MapItemEntry.key");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_map_item().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_map_item().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::DataSet >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::DataSet >::const_iterator
          it = this->_internal_map_item().begin();
          it != this->_internal_map_item().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = MapTest_MapItemEntry_DoNotUse::Funcs::InternalSerialize(1, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::DataSet >::const_iterator
          it = this->_internal_map_item().begin();
          it != this->_internal_map_item().end(); ++it) {
        target = MapTest_MapItemEntry_DoNotUse::Funcs::InternalSerialize(1, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MapTest)
  return target;
}

size_t MapTest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MapTest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, .DataSet> map_item = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_map_item_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::DataSet >::const_iterator
      it = this->_internal_map_item().begin();
      it != this->_internal_map_item().end(); ++it) {
    total_size += MapTest_MapItemEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MapTest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MapTest)
  GOOGLE_DCHECK_NE(&from, this);
  const MapTest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MapTest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MapTest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MapTest)
    MergeFrom(*source);
  }
}

void MapTest::MergeFrom(const MapTest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MapTest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  map_item_.MergeFrom(from.map_item_);
}

void MapTest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MapTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MapTest::CopyFrom(const MapTest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MapTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MapTest::IsInitialized() const {
  return true;
}

void MapTest::InternalSwap(MapTest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  map_item_.Swap(&other->map_item_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MapTest::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Data* Arena::CreateMaybeMessage< ::Data >(Arena* arena) {
  return Arena::CreateInternal< ::Data >(arena);
}
template<> PROTOBUF_NOINLINE ::DataSet* Arena::CreateMaybeMessage< ::DataSet >(Arena* arena) {
  return Arena::CreateInternal< ::DataSet >(arena);
}
template<> PROTOBUF_NOINLINE ::MapTest_MapItemEntry_DoNotUse* Arena::CreateMaybeMessage< ::MapTest_MapItemEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::MapTest_MapItemEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::MapTest* Arena::CreateMaybeMessage< ::MapTest >(Arena* arena) {
  return Arena::CreateInternal< ::MapTest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
