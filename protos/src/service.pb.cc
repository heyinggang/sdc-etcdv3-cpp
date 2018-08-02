// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service.proto

#include "service.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace sdc {
class Service_Property_PropertyEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Service_Property_PropertyEntry_DoNotUse>
      _instance;
} _Service_Property_PropertyEntry_DoNotUse_default_instance_;
class Service_PropertyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Service_Property>
      _instance;
} _Service_Property_default_instance_;
class ServiceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Service>
      _instance;
} _Service_default_instance_;
}  // namespace sdc
namespace protobuf_service_2eproto {
void InitDefaultsService_Property_PropertyEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::sdc::_Service_Property_PropertyEntry_DoNotUse_default_instance_;
    new (ptr) ::sdc::Service_Property_PropertyEntry_DoNotUse();
  }
  ::sdc::Service_Property_PropertyEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsService_Property_PropertyEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsService_Property_PropertyEntry_DoNotUseImpl);
}

void InitDefaultsService_PropertyImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_service_2eproto::InitDefaultsService_Property_PropertyEntry_DoNotUse();
  {
    void* ptr = &::sdc::_Service_Property_default_instance_;
    new (ptr) ::sdc::Service_Property();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sdc::Service_Property::InitAsDefaultInstance();
}

void InitDefaultsService_Property() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsService_PropertyImpl);
}

void InitDefaultsServiceImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_service_2eproto::InitDefaultsService_Property();
  {
    void* ptr = &::sdc::_Service_default_instance_;
    new (ptr) ::sdc::Service();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sdc::Service::InitAsDefaultInstance();
}

void InitDefaultsService() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsServiceImpl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service_Property_PropertyEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service_Property_PropertyEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service_Property_PropertyEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service_Property_PropertyEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service_Property, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service_Property, property_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service, servicename_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service, address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sdc::Service, properties_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::sdc::Service_Property_PropertyEntry_DoNotUse)},
  { 9, -1, sizeof(::sdc::Service_Property)},
  { 15, -1, sizeof(::sdc::Service)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::sdc::_Service_Property_PropertyEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sdc::_Service_Property_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sdc::_Service_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "service.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rservice.proto\022\003sdc\"\316\001\n\007Service\022\023\n\013Serv"
      "iceName\030\001 \001(\t\022\017\n\007Address\030\002 \001(\t\022)\n\nProper"
      "ties\030\003 \003(\0132\025.sdc.Service.Property\032r\n\010Pro"
      "perty\0225\n\010Property\030\001 \003(\0132#.sdc.Service.Pr"
      "operty.PropertyEntry\032/\n\rPropertyEntry\022\013\n"
      "\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "service.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_service_2eproto
namespace sdc {

// ===================================================================

Service_Property_PropertyEntry_DoNotUse::Service_Property_PropertyEntry_DoNotUse() {}
Service_Property_PropertyEntry_DoNotUse::Service_Property_PropertyEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void Service_Property_PropertyEntry_DoNotUse::MergeFrom(const Service_Property_PropertyEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata Service_Property_PropertyEntry_DoNotUse::GetMetadata() const {
  ::protobuf_service_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_2eproto::file_level_metadata[0];
}
void Service_Property_PropertyEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void Service_Property::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Service_Property::kPropertyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Service_Property::Service_Property()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_service_2eproto::InitDefaultsService_Property();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sdc.Service.Property)
}
Service_Property::Service_Property(const Service_Property& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  property_.MergeFrom(from.property_);
  // @@protoc_insertion_point(copy_constructor:sdc.Service.Property)
}

void Service_Property::SharedCtor() {
  _cached_size_ = 0;
}

Service_Property::~Service_Property() {
  // @@protoc_insertion_point(destructor:sdc.Service.Property)
  SharedDtor();
}

void Service_Property::SharedDtor() {
}

void Service_Property::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Service_Property::descriptor() {
  ::protobuf_service_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Service_Property& Service_Property::default_instance() {
  ::protobuf_service_2eproto::InitDefaultsService_Property();
  return *internal_default_instance();
}

Service_Property* Service_Property::New(::google::protobuf::Arena* arena) const {
  Service_Property* n = new Service_Property;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Service_Property::Clear() {
// @@protoc_insertion_point(message_clear_start:sdc.Service.Property)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  property_.Clear();
  _internal_metadata_.Clear();
}

bool Service_Property::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sdc.Service.Property)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<string, string> Property = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          Service_Property_PropertyEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              Service_Property_PropertyEntry_DoNotUse,
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&property_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "sdc.Service.Property.PropertyEntry.key"));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), static_cast<int>(parser.value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "sdc.Service.Property.PropertyEntry.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sdc.Service.Property)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sdc.Service.Property)
  return false;
#undef DO_
}

void Service_Property::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sdc.Service.Property)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, string> Property = 1;
  if (!this->property().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "sdc.Service.Property.PropertyEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "sdc.Service.Property.PropertyEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->property().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->property().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->property().begin();
          it != this->property().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Service_Property_PropertyEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(property_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Service_Property_PropertyEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->property().begin();
          it != this->property().end(); ++it) {
        entry.reset(property_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sdc.Service.Property)
}

::google::protobuf::uint8* Service_Property::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sdc.Service.Property)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, string> Property = 1;
  if (!this->property().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "sdc.Service.Property.PropertyEntry.key");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "sdc.Service.Property.PropertyEntry.value");
      }
    };

    if (deterministic &&
        this->property().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->property().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->property().begin();
          it != this->property().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Service_Property_PropertyEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(property_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<Service_Property_PropertyEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->property().begin();
          it != this->property().end(); ++it) {
        entry.reset(property_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sdc.Service.Property)
  return target;
}

size_t Service_Property::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sdc.Service.Property)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, string> Property = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->property_size());
  {
    ::google::protobuf::scoped_ptr<Service_Property_PropertyEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->property().begin();
        it != this->property().end(); ++it) {
      entry.reset(property_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Service_Property::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sdc.Service.Property)
  GOOGLE_DCHECK_NE(&from, this);
  const Service_Property* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Service_Property>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sdc.Service.Property)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sdc.Service.Property)
    MergeFrom(*source);
  }
}

void Service_Property::MergeFrom(const Service_Property& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sdc.Service.Property)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  property_.MergeFrom(from.property_);
}

void Service_Property::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sdc.Service.Property)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Service_Property::CopyFrom(const Service_Property& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sdc.Service.Property)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Service_Property::IsInitialized() const {
  return true;
}

void Service_Property::Swap(Service_Property* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Service_Property::InternalSwap(Service_Property* other) {
  using std::swap;
  property_.Swap(&other->property_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Service_Property::GetMetadata() const {
  protobuf_service_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Service::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Service::kServiceNameFieldNumber;
const int Service::kAddressFieldNumber;
const int Service::kPropertiesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Service::Service()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_service_2eproto::InitDefaultsService();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sdc.Service)
}
Service::Service(const Service& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      properties_(from.properties_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  servicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.servicename().size() > 0) {
    servicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servicename_);
  }
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.address().size() > 0) {
    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  // @@protoc_insertion_point(copy_constructor:sdc.Service)
}

void Service::SharedCtor() {
  servicename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Service::~Service() {
  // @@protoc_insertion_point(destructor:sdc.Service)
  SharedDtor();
}

void Service::SharedDtor() {
  servicename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Service::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Service::descriptor() {
  ::protobuf_service_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Service& Service::default_instance() {
  ::protobuf_service_2eproto::InitDefaultsService();
  return *internal_default_instance();
}

Service* Service::New(::google::protobuf::Arena* arena) const {
  Service* n = new Service;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Service::Clear() {
// @@protoc_insertion_point(message_clear_start:sdc.Service)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  properties_.Clear();
  servicename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Service::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sdc.Service)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string ServiceName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_servicename()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->servicename().data(), static_cast<int>(this->servicename().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "sdc.Service.ServiceName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string Address = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address().data(), static_cast<int>(this->address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "sdc.Service.Address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .sdc.Service.Property Properties = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_properties()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sdc.Service)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sdc.Service)
  return false;
#undef DO_
}

void Service::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sdc.Service)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ServiceName = 1;
  if (this->servicename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->servicename().data(), static_cast<int>(this->servicename().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sdc.Service.ServiceName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->servicename(), output);
  }

  // string Address = 2;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), static_cast<int>(this->address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sdc.Service.Address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->address(), output);
  }

  // repeated .sdc.Service.Property Properties = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->properties_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->properties(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sdc.Service)
}

::google::protobuf::uint8* Service::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sdc.Service)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ServiceName = 1;
  if (this->servicename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->servicename().data(), static_cast<int>(this->servicename().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sdc.Service.ServiceName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->servicename(), target);
  }

  // string Address = 2;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), static_cast<int>(this->address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sdc.Service.Address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->address(), target);
  }

  // repeated .sdc.Service.Property Properties = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->properties_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->properties(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sdc.Service)
  return target;
}

size_t Service::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sdc.Service)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .sdc.Service.Property Properties = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->properties_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->properties(static_cast<int>(i)));
    }
  }

  // string ServiceName = 1;
  if (this->servicename().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->servicename());
  }

  // string Address = 2;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->address());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Service::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sdc.Service)
  GOOGLE_DCHECK_NE(&from, this);
  const Service* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Service>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sdc.Service)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sdc.Service)
    MergeFrom(*source);
  }
}

void Service::MergeFrom(const Service& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sdc.Service)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  properties_.MergeFrom(from.properties_);
  if (from.servicename().size() > 0) {

    servicename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servicename_);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
}

void Service::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sdc.Service)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Service::CopyFrom(const Service& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sdc.Service)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Service::IsInitialized() const {
  return true;
}

void Service::Swap(Service* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Service::InternalSwap(Service* other) {
  using std::swap;
  properties_.InternalSwap(&other->properties_);
  servicename_.Swap(&other->servicename_);
  address_.Swap(&other->address_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Service::GetMetadata() const {
  protobuf_service_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sdc

// @@protoc_insertion_point(global_scope)
