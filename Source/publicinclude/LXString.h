#if !defined(__LX_STRING_H)
#define __LX_STRING_H

/////////////////////////////////////////////////////////////////////////////
//
// File: LXString.h
//
// Description: 
//		Declares the string type used by the LandXML SDK.
//
// $History: LXString.h $
//
/////////////////////////////////////////////////////////////////////////////
#include "LXDefs.h"

#pragma warning (push,1)
#include <string>
#pragma warning (pop)


#pragma warning (push)
#pragma warning (disable: 4710) 

namespace LX
{

typedef LX_DECLSPEC std::wstring String;

}; // End namespace LX
#pragma warning (pop)


#endif //__LX_STRING_H