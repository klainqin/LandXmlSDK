#if !defined(__LX_DATETIME_H)
#define __LX_DATETIME_H

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

class DateTime : public ValueObject
{
public:
	DateTime ();

	DateTime (
		const String& strValue);

	DateTime (
		wchar_t* strValue, 
		int nValueLen);

	String value () const;

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

private:
	bool initFromString (
		const wchar_t* strValue, 
		int nValueLen);

	time_t m_time;
	int m_nTZOffsetHours;
	int m_nTZOffsetMinutes;
	double m_dSeconds;
    bool m_bNothing;
};

} // End namespace LX
#endif