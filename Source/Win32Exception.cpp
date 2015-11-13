#include "stdafx.h"
#include "Win32Exception.h"

////////////////////////////////////////////////////////////////////////////
//
// File: Win32Exception.cpp
//
// Description: 
//		Contains the implementation of the Win32Exception object. 
//
// $History: Win32Exception.cpp $
//
/////////////////////////////////////////////////////////////////////////////
namespace LX
{

Win32Exception::Win32Exception (
		int nLastError)
: Exception(Exception::kWin32Exception, L"Windows 32 Exception")
{
	m_nLastError = nLastError;
}

int Win32Exception::getLastError () const
{
    return m_nLastError;
}

} // End namespace LX.
