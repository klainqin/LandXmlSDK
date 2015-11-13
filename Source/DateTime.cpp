#include "stdafx.h"
#include <time.h>

#include "LXDefs.h"
#include "DateTime.h"
#include "ValueTypeObjects.h"
#include "Utils.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueTypeObjects.cpp
//
// Description: 
//		Contains the implementation of the DoubleObject class
//
// $History: ValueTypeObjects.cpp $
//
/////////////////////////////////////////////////////////////////////////////
#pragma warning (push)
#pragma warning (disable: 4786)

namespace LX 
{

// StringObject
DateTime::DateTime () 
{
	m_time = 0;
	m_nTZOffsetHours = INT_MAX;
	m_nTZOffsetMinutes = INT_MAX;
	m_dSeconds = 0.0;

}

DateTime::DateTime (
	const String& strValue)
{
	if (initFromString(strValue.c_str(), strValue.size()))
		m_bNothing = false;
}


DateTime::DateTime (
	wchar_t* strValue, 
	int nValueLen) 
{
	if (initFromString(strValue, nValueLen))
		m_bNothing = false;
}

String DateTime::toString() const
{
	return L"";
}

void DateTime::toStream (
	IStream& stream) const
{
	const wchar_t* kstrTimeZoneOffsetFormat = L"%s%02:%02";
	const wchar_t* kstrTimeFormat = L"%04u-%02u-%02uT%02u:%02u:%02f%s";
	const wchar_t* kstrZulu = L"Z";
	const wchar_t* kstrPositive = L"+";
	const wchar_t* kstrNegative = L"-";

	if (!m_bNothing)
	{
		wchar_t strBuffer1[100];
		wchar_t strBuffer2[200];
		wchar_t strSign[2];

		strBuffer1[0] = L'\0';
		strBuffer2[0] = L'\0';

		// Check for valid time zone offsets.
		if (m_nTZOffsetHours != INT_MAX && m_nTZOffsetMinutes != INT_MAX)
		{
			// Check for ZULU time.
			if (m_nTZOffsetHours == 0 && m_nTZOffsetMinutes == 0)
			{
				wcscpy(strBuffer1, kstrZulu);
			}
			else
			{
				// Determine the sign.
				if (m_nTZOffsetHours  < 0)
					wcscpy(strSign, kstrPositive);
				else
					wcscpy(strSign, kstrNegative);

				swprintf (strBuffer1, kstrTimeZoneOffsetFormat, strSign, m_nTZOffsetMinutes, m_nTZOffsetMinutes);
			}
		}

		// Initialize a time_t variable from the parsed in dates.
		struct tm *pTimeStruct;

		// WARNING : Possible thread issue here with the gmtime static.
#pragma message("Use of the gmtime may have threading implications")
		pTimeStruct= gmtime(&m_time);

		// Build the string.
		swprintf (strBuffer2, kstrTimeFormat, 
			      pTimeStruct->tm_year, pTimeStruct->tm_mon, pTimeStruct->tm_mday, 
				  pTimeStruct->tm_hour, pTimeStruct->tm_min, pTimeStruct->tm_sec, 
				  strBuffer1);

		// Write the string
		stream.write(strBuffer2);
	}
}

bool DateTime::initFromString (
	const wchar_t* strValue, 
	int nValueLen)
{
	// Date time format : CCYY-MM-DDThh:mm:ss
	unsigned int nYear = 0;
	unsigned int nMonth = 0;
	unsigned int nDay = 0;
	unsigned int nHours = 0;
	unsigned int nMinutes = 0;
	unsigned int nSeconds = 0;
	unsigned int nTimeZoneOffset = 0;
	unsigned int nSecondsFrac = 0;
	unsigned int nTimeZoneOffsetHours = INT_MAX;
	unsigned int nTimeZoneOffsetMinutes = INT_MAX;

	int nPosition = 0;

	int nNextPos = Utils::findNextNonDigit(strValue, nValueLen);
	if (nNextPos < 4)
		return false;

	// First first 4 digits as year
	if (nValueLen - nPosition < 4)
		return false;
	if (!UIntegerObject::parseString(strValue, nNextPos, nYear))
		return false;
	nPosition += nNextPos;
	nPosition += 1; // Account for the hyphen.

	// Get the month
	if (nValueLen - nPosition < 2)
		return false;
	if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nMonth))
		return false;
	nPosition += 2;

	// Get the hyphen
	if (nValueLen - nPosition < 1)
		return false;
	if (strValue[nPosition] != L'-')
		return false;
	nPosition += 1;

	// Get the day
	if (nValueLen - nPosition < 2)
		return false;
	if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nDay))
		return false;
	nPosition += 2;

	// Get the "T"
	if (nValueLen - nPosition < 1)
		return false;
	if (strValue[nPosition] != L'T')
		return false;
	nPosition += 1;

	// Get the hour
	if (nValueLen - nPosition < 2)
		return false;
	if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nHours))
		return false;
	nPosition += 2;

	// Get the colon
	if (nValueLen - nPosition < 1)
		return false;
	if (strValue[nPosition] != L':')
		return false;
	nPosition += 1;

	// Get the minute
	if (nValueLen - nPosition < 2)
		return false;
	if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nMinutes))
		return false;
	nPosition += 2;

	// Get the colon
	if (nValueLen - nPosition < 1)
		return false;
	if (strValue[nPosition] != L':')
		return false;
	nPosition += 1;

	// Get the second
	if (nValueLen - nPosition < 2)
		return false;
	if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nSeconds))
		return false;
	nPosition += 2;

	// Are we at end.
	if (nPosition < nValueLen)
	{
		// No. check for fractional seconds.
		if (strValue[nPosition] == L'.')
		{
			nPosition += 1;
			// Get thend of the seonds fraction.
			int nSecsPos = Utils::findNextNonDigit(&(strValue[nPosition]), nValueLen - nPosition);

			if (!UIntegerObject::parseString(&(strValue[nPosition]), nSecsPos, nSecondsFrac)) 
				return false;  // ?? May not want to fail.
			nPosition += nSecsPos;

		}

		if (nPosition < nValueLen)
		{
			// Check for optional time zone (Z)
			if (strValue[nPosition] == L'Z')
			{
				nPosition += 1;

				nTimeZoneOffsetHours = 0;
				nTimeZoneOffsetMinutes = 0;
			}
			// Check for Time zone offsets (+, -)
			else if (strValue[nPosition] == L'+' || strValue[nPosition] == L'-')
			{
				// Get the multiplier so we now whether the time zone off set is positive 
				// or negative.
				int nOffsetMult = 1;
				if (strValue[nPosition] == L'-')
				{
					nOffsetMult = -1;
				}

				nPosition += 1;

				// Get the HH:MM following the offset.
				// Get the hour
				if (nValueLen - nPosition < 2)
					return false;
				if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nTimeZoneOffsetHours))
					return false;
				nPosition += 2;
				nTimeZoneOffsetHours *= nOffsetMult;

				// Get the colon
				if (nValueLen - nPosition < 1)
					return false;
				if (strValue[nPosition] != L':')
					return false;
				nPosition += 1;

				// Get the minute
				if (nValueLen - nPosition < 2)
					return false;
				if (!UIntegerObject::parseString(&(strValue[nPosition]), 2, nTimeZoneOffsetMinutes))
					return false;
				nPosition += 2;
				nTimeZoneOffsetMinutes *= nOffsetMult;
			}
		}
	}

	// Initialize a time_t variable from the parsed in dates.
	struct tm timeStruct;

	timeStruct.tm_year = nYear;
	timeStruct.tm_mon = nMonth;
	timeStruct.tm_mday = nDay;
	timeStruct.tm_hour = nHours;
	timeStruct.tm_min = nMinutes;
	timeStruct.tm_sec = nSeconds;
	timeStruct.tm_isdst = 0;
	timeStruct.tm_wday = 0;
	timeStruct.tm_yday = 0;

	// TODO : WARNING : Possible thread safety issue!
	m_time = mktime(&timeStruct);

	// Initialize the time zone offsets and fractional seconds members.
	m_nTZOffsetHours = nTimeZoneOffsetHours;
	m_nTZOffsetMinutes = nTimeZoneOffsetMinutes;
	m_dSeconds = 0.0;

	return true;
}

}; // End namespace LX

