// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: example2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_example2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_example2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_example2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_example2_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_example2_2eproto;
namespace example {
class HelloRequest2;
struct HelloRequest2DefaultTypeInternal;
extern HelloRequest2DefaultTypeInternal _HelloRequest2_default_instance_;
class HelloResponse2;
struct HelloResponse2DefaultTypeInternal;
extern HelloResponse2DefaultTypeInternal _HelloResponse2_default_instance_;
}  // namespace example
PROTOBUF_NAMESPACE_OPEN
template<> ::example::HelloRequest2* Arena::CreateMaybeMessage<::example::HelloRequest2>(Arena*);
template<> ::example::HelloResponse2* Arena::CreateMaybeMessage<::example::HelloResponse2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace example {

// ===================================================================

class HelloRequest2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.HelloRequest2) */ {
 public:
  inline HelloRequest2() : HelloRequest2(nullptr) {}
  ~HelloRequest2() override;
  explicit PROTOBUF_CONSTEXPR HelloRequest2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloRequest2(const HelloRequest2& from);
  HelloRequest2(HelloRequest2&& from) noexcept
    : HelloRequest2() {
    *this = ::std::move(from);
  }

  inline HelloRequest2& operator=(const HelloRequest2& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloRequest2& operator=(HelloRequest2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloRequest2& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloRequest2* internal_default_instance() {
    return reinterpret_cast<const HelloRequest2*>(
               &_HelloRequest2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloRequest2& a, HelloRequest2& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloRequest2* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloRequest2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloRequest2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloRequest2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloRequest2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HelloRequest2& from) {
    HelloRequest2::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloRequest2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.HelloRequest2";
  }
  protected:
  explicit HelloRequest2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:example.HelloRequest2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_example2_2eproto;
};
// -------------------------------------------------------------------

class HelloResponse2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:example.HelloResponse2) */ {
 public:
  inline HelloResponse2() : HelloResponse2(nullptr) {}
  ~HelloResponse2() override;
  explicit PROTOBUF_CONSTEXPR HelloResponse2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloResponse2(const HelloResponse2& from);
  HelloResponse2(HelloResponse2&& from) noexcept
    : HelloResponse2() {
    *this = ::std::move(from);
  }

  inline HelloResponse2& operator=(const HelloResponse2& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloResponse2& operator=(HelloResponse2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HelloResponse2& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloResponse2* internal_default_instance() {
    return reinterpret_cast<const HelloResponse2*>(
               &_HelloResponse2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloResponse2& a, HelloResponse2& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloResponse2* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloResponse2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloResponse2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloResponse2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloResponse2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HelloResponse2& from) {
    HelloResponse2::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloResponse2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "example.HelloResponse2";
  }
  protected:
  explicit HelloResponse2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:example.HelloResponse2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_example2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest2

// string message = 1;
inline void HelloRequest2::clear_message() {
  _impl_.message_.ClearToEmpty();
}
inline const std::string& HelloRequest2::message() const {
  // @@protoc_insertion_point(field_get:example.HelloRequest2.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloRequest2::set_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:example.HelloRequest2.message)
}
inline std::string* HelloRequest2::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:example.HelloRequest2.message)
  return _s;
}
inline const std::string& HelloRequest2::_internal_message() const {
  return _impl_.message_.Get();
}
inline void HelloRequest2::_internal_set_message(const std::string& value) {
  
  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloRequest2::_internal_mutable_message() {
  
  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloRequest2::release_message() {
  // @@protoc_insertion_point(field_release:example.HelloRequest2.message)
  return _impl_.message_.Release();
}
inline void HelloRequest2::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:example.HelloRequest2.message)
}

// -------------------------------------------------------------------

// HelloResponse2

// string message = 1;
inline void HelloResponse2::clear_message() {
  _impl_.message_.ClearToEmpty();
}
inline const std::string& HelloResponse2::message() const {
  // @@protoc_insertion_point(field_get:example.HelloResponse2.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloResponse2::set_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:example.HelloResponse2.message)
}
inline std::string* HelloResponse2::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:example.HelloResponse2.message)
  return _s;
}
inline const std::string& HelloResponse2::_internal_message() const {
  return _impl_.message_.Get();
}
inline void HelloResponse2::_internal_set_message(const std::string& value) {
  
  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloResponse2::_internal_mutable_message() {
  
  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloResponse2::release_message() {
  // @@protoc_insertion_point(field_release:example.HelloResponse2.message)
  return _impl_.message_.Release();
}
inline void HelloResponse2::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:example.HelloResponse2.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace example

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_example2_2eproto
