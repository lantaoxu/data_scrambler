// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "cpptoc/base_cpptoc.h"
#include "cpptoc/v8accessor_cpptoc.h"
#include "cpptoc/v8handler_cpptoc.h"
#include "ctocpp/v8context_ctocpp.h"
#include "ctocpp/v8exception_ctocpp.h"
#include "ctocpp/v8value_ctocpp.h"
#include "transfer_util.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefV8Value> CefV8Value::CreateUndefined() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_undefined();

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateNull() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_null();

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateBool(bool value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_bool(
      value);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateInt(int32 value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_int(
      value);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateUInt(uint32 value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_uint(
      value);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateDouble(double value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_double(
      value);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateDate(const CefTime& date) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_date(
      &date);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateString(const CefString& value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: value

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_string(
      value.GetStruct());

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateObject(
    CefRefPtr<CefV8Accessor> accessor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: accessor

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_object(
      CefV8AccessorCppToC::Wrap(accessor));

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateArray(int length) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_array(
      length);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8Value::CreateFunction(const CefString& name,
    CefRefPtr<CefV8Handler> handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return NULL;
  // Verify param: handler; type: refptr_diff
  DCHECK(handler.get());
  if (!handler.get())
    return NULL;

  // Execute
  cef_v8value_t* _retval = cef_v8value_create_function(
      name.GetStruct(),
      CefV8HandlerCppToC::Wrap(handler));

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefV8ValueCToCpp::IsValid() {
  if (CEF_MEMBER_MISSING(struct_, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_valid(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsUndefined() {
  if (CEF_MEMBER_MISSING(struct_, is_undefined))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_undefined(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsNull() {
  if (CEF_MEMBER_MISSING(struct_, is_null))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_null(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsBool() {
  if (CEF_MEMBER_MISSING(struct_, is_bool))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_bool(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsInt() {
  if (CEF_MEMBER_MISSING(struct_, is_int))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_int(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsUInt() {
  if (CEF_MEMBER_MISSING(struct_, is_uint))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_uint(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsDouble() {
  if (CEF_MEMBER_MISSING(struct_, is_double))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_double(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsDate() {
  if (CEF_MEMBER_MISSING(struct_, is_date))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_date(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsString() {
  if (CEF_MEMBER_MISSING(struct_, is_string))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_string(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsObject() {
  if (CEF_MEMBER_MISSING(struct_, is_object))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_object(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsArray() {
  if (CEF_MEMBER_MISSING(struct_, is_array))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_array(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsFunction() {
  if (CEF_MEMBER_MISSING(struct_, is_function))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_function(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::IsSame(CefRefPtr<CefV8Value> that) {
  if (CEF_MEMBER_MISSING(struct_, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = struct_->is_same(struct_,
      CefV8ValueCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::GetBoolValue() {
  if (CEF_MEMBER_MISSING(struct_, get_bool_value))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_bool_value(struct_);

  // Return type: bool
  return _retval?true:false;
}

int32 CefV8ValueCToCpp::GetIntValue() {
  if (CEF_MEMBER_MISSING(struct_, get_int_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int32 _retval = struct_->get_int_value(struct_);

  // Return type: simple
  return _retval;
}

uint32 CefV8ValueCToCpp::GetUIntValue() {
  if (CEF_MEMBER_MISSING(struct_, get_uint_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  uint32 _retval = struct_->get_uint_value(struct_);

  // Return type: simple
  return _retval;
}

double CefV8ValueCToCpp::GetDoubleValue() {
  if (CEF_MEMBER_MISSING(struct_, get_double_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  double _retval = struct_->get_double_value(struct_);

  // Return type: simple
  return _retval;
}

CefTime CefV8ValueCToCpp::GetDateValue() {
  if (CEF_MEMBER_MISSING(struct_, get_date_value))
    return CefTime();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_time_t _retval = struct_->get_date_value(struct_);

  // Return type: simple
  return _retval;
}

CefString CefV8ValueCToCpp::GetStringValue() {
  if (CEF_MEMBER_MISSING(struct_, get_string_value))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_string_value(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefV8ValueCToCpp::IsUserCreated() {
  if (CEF_MEMBER_MISSING(struct_, is_user_created))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_user_created(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::HasException() {
  if (CEF_MEMBER_MISSING(struct_, has_exception))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->has_exception(struct_);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefV8Exception> CefV8ValueCToCpp::GetException() {
  if (CEF_MEMBER_MISSING(struct_, get_exception))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8exception_t* _retval = struct_->get_exception(struct_);

  // Return type: refptr_same
  return CefV8ExceptionCToCpp::Wrap(_retval);
}

bool CefV8ValueCToCpp::ClearException() {
  if (CEF_MEMBER_MISSING(struct_, clear_exception))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->clear_exception(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::WillRethrowExceptions() {
  if (CEF_MEMBER_MISSING(struct_, will_rethrow_exceptions))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->will_rethrow_exceptions(struct_);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::SetRethrowExceptions(bool rethrow) {
  if (CEF_MEMBER_MISSING(struct_, set_rethrow_exceptions))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->set_rethrow_exceptions(struct_,
      rethrow);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::HasValue(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, has_value_bykey))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: key

  // Execute
  int _retval = struct_->has_value_bykey(struct_,
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::HasValue(int index) {
  if (CEF_MEMBER_MISSING(struct_, has_value_byindex))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: index; type: simple_byval
  DCHECK_GE(index, 0);
  if (index < 0)
    return false;

  // Execute
  int _retval = struct_->has_value_byindex(struct_,
      index);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::DeleteValue(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, delete_value_bykey))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: key

  // Execute
  int _retval = struct_->delete_value_bykey(struct_,
      key.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::DeleteValue(int index) {
  if (CEF_MEMBER_MISSING(struct_, delete_value_byindex))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: index; type: simple_byval
  DCHECK_GE(index, 0);
  if (index < 0)
    return false;

  // Execute
  int _retval = struct_->delete_value_byindex(struct_,
      index);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefV8Value> CefV8ValueCToCpp::GetValue(const CefString& key) {
  if (CEF_MEMBER_MISSING(struct_, get_value_bykey))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: key

  // Execute
  cef_v8value_t* _retval = struct_->get_value_bykey(struct_,
      key.GetStruct());

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8ValueCToCpp::GetValue(int index) {
  if (CEF_MEMBER_MISSING(struct_, get_value_byindex))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: index; type: simple_byval
  DCHECK_GE(index, 0);
  if (index < 0)
    return NULL;

  // Execute
  cef_v8value_t* _retval = struct_->get_value_byindex(struct_,
      index);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

bool CefV8ValueCToCpp::SetValue(const CefString& key,
    CefRefPtr<CefV8Value> value, PropertyAttribute attribute) {
  if (CEF_MEMBER_MISSING(struct_, set_value_bykey))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: value; type: refptr_same
  DCHECK(value.get());
  if (!value.get())
    return false;
  // Unverified params: key

  // Execute
  int _retval = struct_->set_value_bykey(struct_,
      key.GetStruct(),
      CefV8ValueCToCpp::Unwrap(value),
      attribute);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::SetValue(int index, CefRefPtr<CefV8Value> value) {
  if (CEF_MEMBER_MISSING(struct_, set_value_byindex))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: index; type: simple_byval
  DCHECK_GE(index, 0);
  if (index < 0)
    return false;
  // Verify param: value; type: refptr_same
  DCHECK(value.get());
  if (!value.get())
    return false;

  // Execute
  int _retval = struct_->set_value_byindex(struct_,
      index,
      CefV8ValueCToCpp::Unwrap(value));

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::SetValue(const CefString& key, AccessControl settings,
    PropertyAttribute attribute) {
  if (CEF_MEMBER_MISSING(struct_, set_value_byaccessor))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: key

  // Execute
  int _retval = struct_->set_value_byaccessor(struct_,
      key.GetStruct(),
      settings,
      attribute);

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::GetKeys(std::vector<CefString>& keys) {
  if (CEF_MEMBER_MISSING(struct_, get_keys))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: keys; type: string_vec_byref
  cef_string_list_t keysList = cef_string_list_alloc();
  DCHECK(keysList);
  if (keysList)
    transfer_string_list_contents(keys, keysList);

  // Execute
  int _retval = struct_->get_keys(struct_,
      keysList);

  // Restore param:keys; type: string_vec_byref
  if (keysList) {
    keys.clear();
    transfer_string_list_contents(keysList, keys);
    cef_string_list_free(keysList);
  }

  // Return type: bool
  return _retval?true:false;
}

bool CefV8ValueCToCpp::SetUserData(CefRefPtr<CefBase> user_data) {
  if (CEF_MEMBER_MISSING(struct_, set_user_data))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: user_data

  // Execute
  int _retval = struct_->set_user_data(struct_,
      CefBaseCppToC::Wrap(user_data));

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefBase> CefV8ValueCToCpp::GetUserData() {
  if (CEF_MEMBER_MISSING(struct_, get_user_data))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_base_t* _retval = struct_->get_user_data(struct_);

  // Return type: refptr_diff
  return CefBaseCppToC::Unwrap(_retval);
}

int CefV8ValueCToCpp::GetExternallyAllocatedMemory() {
  if (CEF_MEMBER_MISSING(struct_, get_externally_allocated_memory))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_externally_allocated_memory(struct_);

  // Return type: simple
  return _retval;
}

int CefV8ValueCToCpp::AdjustExternallyAllocatedMemory(int change_in_bytes) {
  if (CEF_MEMBER_MISSING(struct_, adjust_externally_allocated_memory))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->adjust_externally_allocated_memory(struct_,
      change_in_bytes);

  // Return type: simple
  return _retval;
}

int CefV8ValueCToCpp::GetArrayLength() {
  if (CEF_MEMBER_MISSING(struct_, get_array_length))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_array_length(struct_);

  // Return type: simple
  return _retval;
}

CefString CefV8ValueCToCpp::GetFunctionName() {
  if (CEF_MEMBER_MISSING(struct_, get_function_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_function_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefV8Handler> CefV8ValueCToCpp::GetFunctionHandler() {
  if (CEF_MEMBER_MISSING(struct_, get_function_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8handler_t* _retval = struct_->get_function_handler(struct_);

  // Return type: refptr_diff
  return CefV8HandlerCppToC::Unwrap(_retval);
}

CefRefPtr<CefV8Value> CefV8ValueCToCpp::ExecuteFunction(
    CefRefPtr<CefV8Value> object, const CefV8ValueList& arguments) {
  if (CEF_MEMBER_MISSING(struct_, execute_function))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: object

  // Translate param: arguments; type: refptr_vec_same_byref_const
  const size_t argumentsCount = arguments.size();
  cef_v8value_t** argumentsList = NULL;
  if (argumentsCount > 0) {
    argumentsList = new cef_v8value_t*[argumentsCount];
    DCHECK(argumentsList);
    if (argumentsList) {
      for (size_t i = 0; i < argumentsCount; ++i) {
        argumentsList[i] = CefV8ValueCToCpp::Unwrap(arguments[i]);
      }
    }
  }

  // Execute
  cef_v8value_t* _retval = struct_->execute_function(struct_,
      CefV8ValueCToCpp::Unwrap(object),
      argumentsCount,
      argumentsList);

  // Restore param:arguments; type: refptr_vec_same_byref_const
  if (argumentsList)
    delete [] argumentsList;

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

CefRefPtr<CefV8Value> CefV8ValueCToCpp::ExecuteFunctionWithContext(
    CefRefPtr<CefV8Context> context, CefRefPtr<CefV8Value> object,
    const CefV8ValueList& arguments) {
  if (CEF_MEMBER_MISSING(struct_, execute_function_with_context))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: context; type: refptr_same
  DCHECK(context.get());
  if (!context.get())
    return NULL;
  // Unverified params: object

  // Translate param: arguments; type: refptr_vec_same_byref_const
  const size_t argumentsCount = arguments.size();
  cef_v8value_t** argumentsList = NULL;
  if (argumentsCount > 0) {
    argumentsList = new cef_v8value_t*[argumentsCount];
    DCHECK(argumentsList);
    if (argumentsList) {
      for (size_t i = 0; i < argumentsCount; ++i) {
        argumentsList[i] = CefV8ValueCToCpp::Unwrap(arguments[i]);
      }
    }
  }

  // Execute
  cef_v8value_t* _retval = struct_->execute_function_with_context(struct_,
      CefV8ContextCToCpp::Unwrap(context),
      CefV8ValueCToCpp::Unwrap(object),
      argumentsCount,
      argumentsList);

  // Restore param:arguments; type: refptr_vec_same_byref_const
  if (argumentsList)
    delete [] argumentsList;

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefV8ValueCToCpp, CefV8Value,
    cef_v8value_t>::DebugObjCt = 0;
#endif

