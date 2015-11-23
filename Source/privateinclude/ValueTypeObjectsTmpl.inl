#if !defined(__LX_VALUETYPEOBJECTSTMPL_INL)
#define __LX_VALUETYPEOBJECTSTMPL_INL

#include "stdafx.h"

#include "LXDefs.h"
#include "Object.h"
#include "ValueObjectTmpl.h"
#include "ValueTypeObjectsTmpl.h"
#include "ParseException.h"

// Include inlines.
#include "ValueObjectTmpl.inl"
#include "float.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueTypeObjectsTmpl.inl
//
// Description: 
//		Contains the implementation of the DoubleObject class
//
// $History: ObjectCollection.cpp $
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

// Number of digits after the . for real numbers.
#define F_FORMAT L"%.12f"
#define  MAXCHS  256
    
// StringObject
template<class T>
StringObjectTmpl<T>::StringObjectTmpl ()
{
}

template<class T>
StringObjectTmpl<T>::StringObjectTmpl (
    DocumentImpl* pDoc) 
: ValueObjectTmpl<T>(pDoc)
{
}


template<class T>
StringObjectTmpl<T>::StringObjectTmpl (
	const String& strValue)
	: m_strValue(strValue)
{
	this->m_bNothing = false;
}


template<class T>
StringObjectTmpl<T>::StringObjectTmpl (
	wchar_t* strValue) 
	: m_strValue(strValue)
{
	this->m_bNothing = false;
}


template<class T>
StringObjectTmpl<T>::StringObjectTmpl (
	wchar_t* strValue, 
	int nValueLen) 
	: m_strValue(strValue, nValueLen)
{
	this->m_bNothing = false;
}


template <class T>
String StringObjectTmpl<T>::value () const
{
	return m_strValue;
}


template <class T>
void StringObjectTmpl<T>::setValue (
	String strValue)
{
	m_strValue = strValue;
	this->m_bNothing = false;
}

template<class T>
Object::ValidityEnum StringObjectTmpl<T>::validate (
    IValidationEventSink *pEventSink) const
{
    return Object::kValid;
}


template<class T>
String StringObjectTmpl<T>::toString() const
{
	return m_strValue;
}


template<class T>
void StringObjectTmpl<T>::toStream (
	IStream& stream) const
{
	if (!this->m_bNothing)
	{
		streamOut(m_strValue, stream);	
	}
}


template<class T>
String StringObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen)
{
	return String(strValue, nValueLen);
}


template<class T>
IParserEventSink::EventCode StringObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen, 
	String& strSetValue)
{
	strSetValue.assign(strValue, nValueLen);
	return  IParserEventSink::EventCode::kOk;
}


template<class T>
void StringObjectTmpl<T>::streamOut (
	const String& strValue, 
	IStream& stream)
{
        wchar_t         str2[ MAXCHS+6 ];
        const wchar_t*  c;
        int  i = -1;
        for( c = strValue.c_str(); *c != 0; ++c )
        {
            if( *c == L'<' ) {                  // escape XML reserved chars
                str2[ ++i ] = L'&';
                str2[ ++i ] = L'l';
                str2[ ++i ] = L't';
                str2[ ++i ] = L';';
            }
            else if( *c == L'>' ) {
                str2[ ++i ] = L'&';
                str2[ ++i ] = L'g';
                str2[ ++i ] = L't';
                str2[ ++i ] = L';';
            }
            else if( *c == L'&' ) {
                str2[ ++i ] = L'&';
                str2[ ++i ] = L'a';
                str2[ ++i ] = L'm';
                str2[ ++i ] = L'p';
                str2[ ++i ] = L';';
            }
            else if( *c == L'"' ) {
                str2[ ++i ] = L'&';
                str2[ ++i ] = L'q';
                str2[ ++i ] = L'u';
                str2[ ++i ] = L'o';
                str2[ ++i ] = L't';
                str2[ ++i ] = L';';
            }
            else if( *c == L'\'' ) {
                str2[ ++i ] = L'&';
                str2[ ++i ] = L'a';
                str2[ ++i ] = L'p';
                str2[ ++i ] = L'o';
                str2[ ++i ] = L's';
                str2[ ++i ] = L';';
            } else
                str2[ ++i ] = *c;

            if( i >= MAXCHS ) {
                str2[ ++i ] = 0;
                stream.write( str2 );
                i = -1;
            }
        }
        if( i >= 0 ) {
            str2[ ++i ] = 0;
            stream.write( str2 );
        }
}



// DoubleObject
template<class T>
DoubleObjectTmpl<T>::DoubleObjectTmpl ()
{
	m_dValue = 0.0;
}

template<class T>
DoubleObjectTmpl<T>::DoubleObjectTmpl (
    DocumentImpl* pDoc) 
: ValueObjectTmpl<T>(pDoc)
{
    m_dValue = 0.0;
}


template<class T>
DoubleObjectTmpl<T>::DoubleObjectTmpl (
	double dValue)
{
	m_dValue = dValue;
	this->m_bNothing = false;
}


template <class T>
double DoubleObjectTmpl<T>::value () const
{
	return m_dValue;
}


template <class T>
void DoubleObjectTmpl<T>::setValue (
	double dValue)
{
	m_dValue = dValue;
	this->m_bNothing = false;
}

template<class T>
Object::ValidityEnum DoubleObjectTmpl<T>::validate (
    IValidationEventSink *pEventSink) const
{
    return Object::kValid;
}

template<class T>
String DoubleObjectTmpl<T>::toString() const
{
    wchar_t strValue[MAXCHS]={0};

    if ((m_dValue == DBL_MAX) || (m_dValue > (DBL_MAX-1.0)))
        swprintf(strValue, (MAXCHS-1), L"%s", L"INF");   // convert number
    else
        swprintf(strValue, (MAXCHS-1), F_FORMAT, m_dValue);   // convert number

    wchar_t* p = strValue;
    while( *p != 0 )
        p++;                                // find end
    while( *--p == L'0' )
        *p = 0;                             // remove trailing zeros

    return String(strValue);
}


template<class T>
void DoubleObjectTmpl<T>::toStream (
	IStream& stream) const
{
	if (!this->m_bNothing)
	{
		streamOut(m_dValue, stream);	
	}
}


template<class T>
double DoubleObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);
    // transform it into upper case string
    std::transform(strVal.begin(), strVal.end(), strVal.begin(), toupper);
	double dValue = 0.0;
    if (strVal == L"INF")
        dValue = wcstod(strVal.c_str(), NULL);
    else
        dValue = DBL_MAX;

	return dValue;
}


template<class T>
IParserEventSink::EventCode DoubleObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen, 
	double &dValue)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);
    // transform it into upper case string
    std::transform(strVal.begin(), strVal.end(), strVal.begin(), toupper);
    if (strVal == L"INF")
    	dValue = wcstod(strVal.c_str(), NULL);
    else
        dValue = DBL_MAX;
	return  IParserEventSink::EventCode::kOk;
}


template<class T>
void DoubleObjectTmpl<T>::streamOut (
	const double dValue, 
	IStream& stream)
{
	wchar_t strValue[MAXCHS]={0};
    
    if ((dValue == DBL_MAX) || (dValue > (DBL_MAX-1.0)))
        swprintf(strValue, (MAXCHS-1), L"%s", L"INF");   // convert number
    else
        swprintf(strValue, (MAXCHS-1), F_FORMAT, dValue);   // convert number

        wchar_t* p = strValue;
        while( *p != 0 )
            p++;                                // find end
        while( *--p == L'0' )
            *p = 0;                             // remove trailing zeros
	stream.write(strValue);
}



// IntegerObject
template<class T>
IntegerObjectTmpl<T>::IntegerObjectTmpl ()
{
	m_nValue = 0;
}


template<class T>
IntegerObjectTmpl<T>::IntegerObjectTmpl (
    DocumentImpl* pDoc) 
: ValueObjectTmpl<T>(pDoc)
{
    m_nValue = 0;
}


template<class T>
IntegerObjectTmpl<T>::IntegerObjectTmpl (
	int nValue)
{
	m_nValue = nValue;
	this->m_bNothing = false;
}


template <class T>
int IntegerObjectTmpl<T>::value () const
{
	return m_nValue;
}


template <class T>
void IntegerObjectTmpl<T>::setValue (
	int nValue)
{
	m_nValue = nValue;
	this->m_bNothing = false;
}


template<class T>
Object::ValidityEnum IntegerObjectTmpl<T>::validate (
    IValidationEventSink *pEventSink) const
{
    return Object::kValid;
}


template<class T>
String IntegerObjectTmpl<T>::toString() const
{
	wchar_t strValue[MAXCHS]={0};
	swprintf(strValue, (MAXCHS-1), L"%d", m_nValue);
	return String(strValue);
}


template<class T>
void IntegerObjectTmpl<T>::toStream (
	IStream& stream) const
{
	if (!this->m_bNothing)
	{
		streamOut(m_nValue, stream);	
	}
}


template<class T>
int IntegerObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);
	int iValue = wcstol(strVal.c_str(), NULL, 10);

	return iValue;
}


template<class T>
IParserEventSink::EventCode IntegerObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen, 
	int& nValue)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);
	nValue = wcstol(strVal.c_str(), NULL, 10);
	return  IParserEventSink::EventCode::kOk;
}


template<class T>
void IntegerObjectTmpl<T>::streamOut (
	const int nValue, 
	IStream& stream)
{
	wchar_t strValue[MAXCHS]={0};
	swprintf(strValue, (MAXCHS-1), L"%d", nValue);
	stream.write(strValue);
}




// BooleanObject

template<class T>
const wchar_t* BooleanObjectTmpl<T>::kstrTrue = L"true";

template<class T>
const wchar_t* BooleanObjectTmpl<T>::kstrFalse = L"false";


template<class T>
BooleanObjectTmpl<T>::BooleanObjectTmpl ()
{
	m_bValue = false;
}

template<class T>
BooleanObjectTmpl<T>::BooleanObjectTmpl (
    DocumentImpl* pDoc) 
: ValueObjectTmpl<T>(pDoc)
{
    m_bValue = false;
}

template<class T>
BooleanObjectTmpl<T>::BooleanObjectTmpl (
	bool bValue)
{
	m_bValue = bValue;
	this->m_bNothing = false;	
}


template <class T>
bool BooleanObjectTmpl<T>::value () const
{
	return m_bValue;
}


template <class T>
void BooleanObjectTmpl<T>::setValue (
	bool bValue)
{
	m_bValue = bValue;
	this->m_bNothing = false;
}

template<class T>
Object::ValidityEnum BooleanObjectTmpl<T>::validate (
    IValidationEventSink *pEventSink) const
{
    return Object::kValid;
}

template<class T>
String BooleanObjectTmpl<T>::toString() const
{
	if (m_bValue)
		return String(kstrTrue);
	else
		return String(kstrFalse);
}


template<class T>
void BooleanObjectTmpl<T>::toStream (
	IStream& stream) const
{
	if (!this->m_bNothing)
	{
		streamOut(m_bValue, stream);	
	}
}


template<class T>
bool BooleanObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);

	if (strVal == kstrTrue || strVal == L"1")
		return true;
	else if (strVal == kstrFalse || strVal == L"0")
		return false;

	return false;
}


template<class T>
IParserEventSink::EventCode BooleanObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen, 
	bool& bValue)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);

	if (strVal == kstrTrue || strVal == L"1")
	{
		bValue = true;
		return  IParserEventSink::EventCode::kOk;
	}
	else if (strVal == kstrFalse || strVal == L"0")
	{
		bValue = false;
		return  IParserEventSink::EventCode::kOk;
	}

	return  IParserEventSink::EventCode::kInvalidBooleanValue;
}


template<class T>
void BooleanObjectTmpl<T>::streamOut (
	const bool bValue, 
	IStream& stream)
{
	if (bValue)
		stream.write(kstrTrue);
	else
		stream.write(kstrFalse);
}


// UIntegerObject
template<class T>
UIntegerObjectTmpl<T>::UIntegerObjectTmpl ()
{
	m_nValue = 0;
}

template<class T>
UIntegerObjectTmpl<T>::UIntegerObjectTmpl (
    DocumentImpl* pDoc) 
: ValueObjectTmpl<T>(pDoc)
{
    m_nValue = 0;
}

template<class T>
UIntegerObjectTmpl<T>::UIntegerObjectTmpl (
	unsigned int nValue)
{
	m_nValue = nValue;
	this->m_bNothing = false;
}


template <class T>
unsigned int UIntegerObjectTmpl<T>::value () const
{
	return m_nValue;
}


template <class T>
void UIntegerObjectTmpl<T>::setValue (
	unsigned int nValue)
{
	m_nValue = nValue;
	this->m_bNothing = false;
}


template<class T>
Object::ValidityEnum UIntegerObjectTmpl<T>::validate (
    IValidationEventSink *pEventSink) const
{
    return Object::kValid;
}

template<class T>
String UIntegerObjectTmpl<T>::toString() const
{
	wchar_t strValue[MAXCHS]={0};
	swprintf(strValue, (MAXCHS-1), L"%d", m_nValue);
	return String(strValue);
}


template<class T>
void UIntegerObjectTmpl<T>::toStream (
	IStream& stream) const
{
	if (!this->m_bNothing)
	{
		streamOut(m_nValue, stream);	
	}
}


template<class T>
unsigned int UIntegerObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);
	unsigned int iValue = wcstoul(strVal.c_str(), NULL, 10);

	return iValue;
}


template<class T>
IParserEventSink::EventCode UIntegerObjectTmpl<T>::parseString (
	const wchar_t* strValue, 
	int nValueLen, 
	unsigned int& nValue)
{
	String strVal = StringObjectTmpl<StringObject>::parseString(strValue, nValueLen);
	nValue = wcstoul(strVal.c_str(), NULL, 10);
	return IParserEventSink::EventCode::kOk;
}


template<class T>
void UIntegerObjectTmpl<T>::streamOut (
	const unsigned int nValue, 
	IStream& stream)
{
	wchar_t strValue[MAXCHS]={0};
	swprintf(strValue, (MAXCHS-1), L"%d", nValue);
	stream.write(strValue);
}



// EnumObject
template<class T>
int EnumObjectTmpl<T>::findString (
	const wchar_t* strValue,
	int nValueLen, 
    const wchar_t* strarrValues[], 
    const int nNumValues)
{
	int i = 0;

	// Find the string.
	while (i < nNumValues)
	{
        // Check the lengths first.
        if (nValueLen == wcslen(strarrValues[i]))
        {
		    if (wcsncmp(strValue, strarrValues[i], nValueLen) == 0)
			    return i;
        }
		i++;
	}

	return -1;
}

};

#endif

