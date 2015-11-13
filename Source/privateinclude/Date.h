#if !defined(__LX_DATE_H)
#define __LX_DATE_H

#include "LXDefs.h"
#include "LXString.h"
#include "Object.h"
#include "ValueObject.h"
#include "IStream.h"

#pragma warning (push)
#pragma warning (disable: 4786)

/////////////////////////////////////////////////////////////////////////////
//
// File: DateTime.h
//
// Description: 
//		Contains the definition of the for the value types
//
// $History: ValueTypeObjects.h $
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

class Date : public ValueObject
{
public:
	Date ();

	Date (
		const String& strValue);

	Date (
		wchar_t* strValue, 
		int nValueLen);

	Date value () const;

	void setValue (
		String strValue);

	void toStream (
		IStream& stream) const;

	String toString () const;
	
	static DateTime parseString (
		wchar_t* strValue, 
		int nValueLen);

	static void streamOut (
		const DateTime& strValue, 
		IStream& stream);
};

} // End namespace LX
#endif