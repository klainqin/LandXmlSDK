#if !defined(__LX_WIN32EXCEPTION_H)
#define __LX_WIN32EXCEPTION_H

/////////////////////////////////////////////////////////////////////////////
//
// File: Win32Exception.h
//
// Description: 
//		Contains the definition of the Win32Exception class.
//
// $History: Win32Exception.h $
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "Exception.h"

namespace LX
{

class LX_DECLSPEC Win32Exception : public Exception
{
public:
	Win32Exception (
		int nLastError);

    int getLastError () const;

private:
	int m_nLastError;

};

};

#endif