/*
 *
 * Copyright 2010 JiJie Shi
 *
 * This file is part of data_scrambler.
 *
 * data_scrambler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * data_scrambler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with data_scrambler.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#if !defined(AFX_WEBBROWSER2_H__E9BA68A6_02ED_4553_943D_0923EF07E9C7__INCLUDED_)
#define AFX_WEBBROWSER2_H__E9BA68A6_02ED_4553_943D_0923EF07E9C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CWebBrowser2 wrapper class

#include "webbrowser.h"
class CWebBrowser2 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CWebBrowser2)
public:
	CWebBrowser2()
	{
		status_event = CreateEvent( NULL, FALSE, FALSE, NULL ); 
		ASSERT( NULL != status_event ); 
		document_loaded = FALSE; 
		navigate_on = TRUE; 
		locate_page_begin = 0; 
		url_loading.clear(); 
	}

	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8856f961, 0x340a, 0x11d0, { 0xa9, 0x6b, 0x0, 0xc0, 0x4f, 0xd7, 0x5, 0xa2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void GoBack();
	void GoForward();
	void GoHome();
	void GoSearch();
	void Navigate(LPCTSTR URL, VARIANT* Flags, VARIANT* TargetFrameName, VARIANT* PostData, VARIANT* Headers);
	void Refresh();
	void Refresh2(VARIANT* Level);
	void Stop();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetContainer();
	LPDISPATCH GetDocument();
	BOOL GetTopLevelContainer();
	CString GetType();
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	CString GetLocationName();
	CString GetLocationURL();
	BOOL GetBusy();
	void Quit();
	void ClientToWindow(long* pcx, long* pcy);
	void PutProperty(LPCTSTR Property_, const VARIANT& vtValue);
	VARIANT GetProperty_(LPCTSTR Property_);
	CString GetName();
	ULONG GetHwnd();
	CString GetFullName();
	CString GetPath();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetStatusBar();
	void SetStatusBar(BOOL bNewValue);
	CString GetStatusText();
	void SetStatusText(LPCTSTR lpszNewValue);
	long GetToolBar();
	void SetToolBar(long nNewValue);
	BOOL GetMenuBar();
	void SetMenuBar(BOOL bNewValue);
	BOOL GetFullScreen();
	void SetFullScreen(BOOL bNewValue);
	void Navigate2(VARIANT* URL, VARIANT* Flags, VARIANT* TargetFrameName, VARIANT* PostData, VARIANT* Headers);
	long QueryStatusWB(long cmdID);
	void ExecWB(long cmdID, long cmdexecopt, VARIANT* pvaIn, VARIANT* pvaOut);
	STDMETHODIMP Exec( const GUID* pguidCmdGroup, 
		DWORD nCmdID,
		DWORD nCmdexecopt, 
		VARIANTARG* pvaIn, 
		VARIANTARG* pvaOut ); 
	void ShowBrowserBar(VARIANT* pvaClsid, VARIANT* pvarShow, VARIANT* pvarSize);
	long GetReadyState();
	BOOL GetOffline();
	void SetOffline(BOOL bNewValue);
	BOOL GetSilent();
	void SetSilent(BOOL bNewValue);
	BOOL GetRegisterAsBrowser();
	void SetRegisterAsBrowser(BOOL bNewValue);
	BOOL GetRegisterAsDropTarget();
	void SetRegisterAsDropTarget(BOOL bNewValue);
	BOOL GetTheaterMode();
	void SetTheaterMode(BOOL bNewValue);
	BOOL GetAddressBar();
	void SetAddressBar(BOOL bNewValue);
	BOOL GetResizable();
	void SetResizable(BOOL bNewValue);

	HANDLE get_status_event()
	{
		return status_event; 
	}

	LRESULT notify_status_event( BOOLEAN loaded )
	{
		dbg_print( MSG_IMPORTANT, "notify html web page is loaded\n" ); 

		document_loaded = loaded; 
		SetEvent( status_event ); 
		return ERROR_SUCCESS; 
	}

	LRESULT get_status( BOOLEAN *loaded )
	{
		*loaded = document_loaded; 
		return ERROR_SUCCESS; 
	}

	ULONG wait_for_status_event( ULONG time )
	{
		ULONG wait_ret; 
		wait_ret = WaitForSingleObject( status_event, time ); 

		dbg_print( MSG_IMPORTANT, "wait the html page loading event done %u\n", wait_ret ); 
		return wait_ret; 
	}

	BOOLEAN can_navigate()
	{
        return TRUE; // navigate_on;
	}

	BOOLEAN switch_navigate( BOOLEAN on )
	{
		BOOLEAN old_on; 
		old_on = navigate_on; 

		navigate_on = on; 
	
		return old_on; 
	}

	VOID set_loading_url( LPCWSTR url )
	{
		url_loading = url; 
	}

	wstring get_loading_url()
	{
		return url_loading; 
	}


	HRESULT on_web_page_locate_begin()
	{
		locate_page_begin = GetTickCount64(); 
		switch_navigate( TRUE ); 
		return S_OK; 
	}

	HRESULT close_navigate_function()
	{
		switch_navigate( FALSE ); 
		locate_page_begin = 0; 
		return S_OK; 
	}

	HRESULT check_web_page_loading_status()
	{
		HRESULT hr = S_OK;
		ULONGLONG current_time; 
		ULONG _web_page_load_time; 
		ULONG _web_page_process_delay; 

		do 
		{
			if( locate_page_begin == 0 )
			{
				break; 
			}

			get_html_action_global_config( NULL, 
				&_web_page_load_time, 
				&_web_page_process_delay ); 

			current_time = GetTickCount64(); 

			if( current_time < locate_page_begin )
			{
				if( current_time >= ( _web_page_process_delay + _web_page_load_time ) )
				{
					close_navigate_function();
				}
				else if( ( current_time + ( ULONGLONG )0xffffffffffffffff - locate_page_begin ) 
					>= ( _web_page_process_delay + _web_page_load_time ) )
				{
					close_navigate_function(); 
				}

				dbg_print( MSG_IMPORTANT, "load page time tick is overflow(%I64u:%I64u)\n", 
					current_time, 
					locate_page_begin ); 
			}
			else if( ( current_time - locate_page_begin ) >= ( _web_page_process_delay + _web_page_load_time ) )
			{
				close_navigate_function(); 
			}
		}while( FALSE );
		return hr; 
	}

public:
	BOOLEAN document_loaded; 
protected:
	HANDLE status_event; 
	BOOLEAN navigate_on; 
	wstring url_loading; 
	ULONGLONG locate_page_begin; 
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

INLINE HRESULT WINAPI browser_safe_navigate_start( CWebBrowser2 *browser, 
									 LPCWSTR url )
{
	HRESULT hr = S_OK; 
	//BOOLEAN loaded; 

	browser->document_loaded = FALSE; 
	
	browser->Stop(); 

	browser->on_web_page_locate_begin(); 

	try
	{
		//http://stackoverflow.com/a/24465159/3581404
		browser->Navigate( url, 
			NULL, 
			NULL, 
			NULL, 
			NULL ); 

	}
	catch(...)
	{
		hr = E_UNEXPECTED; 
	}

	return hr; 
}

INLINE ULONG WINAPI _browser_safe_navigate_end( CWebBrowser2 *browser, ULONG wait_time, BOOLEAN *loaded )
{
	ULONG wait_ret; 
	BOOLEAN _loaded; 

	wait_ret = browser->wait_for_status_event( wait_time ); 

	browser->get_status( &_loaded ); 
	if( NULL == loaded ) 
	{
		*loaded = _loaded; 
	}

	browser->close_navigate_function(); 

	return wait_ret; 
}

//#define DEFAULT_WAIT_TIME 6000
//INLINE HRESULT WINAPI browser_safe_navigate_end( CWebBrowser2 *browser )
//{
//	return _browser_safe_navigate_end( browser, DEFAULT_WAIT_TIME ); 
//}

INLINE LRESULT WINAPI get_web_browser_location_url( CWebBrowser2 *web_browser, wstring &url )
{
	LRESULT ret = ERROR_SUCCESS; 
	HRESULT hr; 
	LPCWSTR temp_text; 
	IHTMLDocument2Ptr html_doc; 
	_bstr_t __url; 

	do
	{
		html_doc = web_browser->GetDocument(); 

		if( NULL == html_doc )
		{
			CString _url; 
			_url = web_browser->GetLocationURL(); 
			dbg_print( MSG_FATAL_ERROR, "have not loaded the web page %ws\n", _url.GetBuffer() ); 
			url = _url.GetBuffer(); 
			break; 
		}

		hr = html_doc->get_URL( __url.GetAddress() ); 
		if( FAILED(hr))
		{
			break; 
		}

		temp_text = __url.operator wchar_t*(); 
		if( NULL == temp_text)
		{
			ret = ERROR_ERRORS_ENCOUNTERED; 
			break; 
		}

		url = temp_text; 
	}while( FALSE ); 

	return ret; 
}

#endif // !defined(AFX_WEBBROWSER2_H__E9BA68A6_02ED_4553_943D_0923EF07E9C7__INCLUDED_)