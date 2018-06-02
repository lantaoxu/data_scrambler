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

#ifndef CEF_LIBCEF_DLL_CTOCPP_WEB_PLUGIN_INFO_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_WEB_PLUGIN_INFO_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_web_plugin.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefWebPluginInfoCToCpp
    : public CefCToCpp<CefWebPluginInfoCToCpp, CefWebPluginInfo,
        cef_web_plugin_info_t> {
 public:
  explicit CefWebPluginInfoCToCpp(cef_web_plugin_info_t* str)
      : CefCToCpp<CefWebPluginInfoCToCpp, CefWebPluginInfo,
          cef_web_plugin_info_t>(str) {}
  virtual ~CefWebPluginInfoCToCpp() {}

  // CefWebPluginInfo methods
  virtual CefString GetName() OVERRIDE;
  virtual CefString GetPath() OVERRIDE;
  virtual CefString GetVersion() OVERRIDE;
  virtual CefString GetDescription() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_WEB_PLUGIN_INFO_CTOCPP_H_

