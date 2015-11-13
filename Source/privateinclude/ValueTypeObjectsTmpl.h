#if !defined(__LX_VALUETYPEOBJECTSTMPL_H)
#define __LX_VALUETYPEOBJECTSTMPL_H

#include "LXDefs.h"
#include "LXString.h"
#include "ValueObjectTmpl.h"
#include "IStream.h"
#include "IParserEventSink.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueTypeObjectsTmpl.h
//
// Description: 
//		Contains the definition of the for the value types
//
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

template <class T>
class StringObjectTmpl : public ValueObjectTmpl<T>
{
public:
	typedef String Type;

	StringObjectTmpl<T> ();

   	StringObjectTmpl<T> (DocumentImpl* pDoc);

	StringObjectTmpl<T> (
		const String& strValue);

	StringObjectTmpl<T> (
		wchar_t* strValue);

	StringObjectTmpl<T> (
		wchar_t* strValue, 
		int nValueLen);

	String value () const;

	void setValue (
		String strValue);

	void toStream (
		IStream& stream) const;

	String toString () const;

    Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;
	
	static String parseString (
		const wchar_t* strValue, 
		int nValueLen);

	static IParserEventSink::EventCode parseString (
		const wchar_t* strValue, 
		int nValueLen, 
		String& strSetValue);

	static void streamOut (
		const String& strValue, 
		IStream& stream);

private:
	String m_strValue;

};


template <class T>
class DoubleObjectTmpl : public ValueObjectTmpl<T>
{
public:
	typedef double Type;

	DoubleObjectTmpl<T> ();

   	DoubleObjectTmpl<T> (DocumentImpl* pDoc);

	DoubleObjectTmpl<T> (
		double dValue);

	double value() const;

	void setValue (
		double dValue);

	void toStream (
		IStream& stream) const;

	String toString () const;

    Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

	static double parseString (
		const wchar_t* strValue, 
		int nValueLen);

	static  IParserEventSink::EventCode parseString (
		const wchar_t* strValue, 
		int nValueLen, 
		double& dValue);

	static void streamOut (
		const double dValue, 
		IStream& stream);

private:
	double m_dValue;
};



template <class T>
class IntegerObjectTmpl : public ValueObjectTmpl<T>
{
public:
	typedef int Type;

	IntegerObjectTmpl<T> ();

   	IntegerObjectTmpl<T> (DocumentImpl* pDoc);

	IntegerObjectTmpl<T> (
		int nValue);

	int value() const;

	void setValue (
		int nValue);

	void toStream (
		IStream& stream) const;

    Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

	String toString () const;

	static int parseString (
		const wchar_t* strValue, 
		int nValueLen);

	static  IParserEventSink::EventCode parseString (
		const wchar_t* strValue, 
		int nValueLen, 
		int& nValue);

	static void streamOut (
		const int nValue, 
		IStream& stream);

private:
	int m_nValue;
};


template <class T>
class UIntegerObjectTmpl : public ValueObjectTmpl<T>
{
public:
	typedef unsigned int Type;

	UIntegerObjectTmpl<T> ();

    UIntegerObjectTmpl<T> (DocumentImpl* pDoc);

	UIntegerObjectTmpl<T> (
		unsigned int nValue);

	unsigned int value() const;

	void setValue (
		unsigned int nValue);

	void toStream (
		IStream& stream) const;

    Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

	String toString () const;

	static unsigned int parseString (
		const wchar_t* strValue, 
		int nValueLen);

	static  IParserEventSink::EventCode parseString (
		const wchar_t* strValue, 
		int nValueLen, 
		unsigned int& nValue);

	static void streamOut (
		const unsigned int nValue, 
		IStream& stream);

private:
	unsigned int m_nValue;
};


template <class T>
class BooleanObjectTmpl : public ValueObjectTmpl<T>
{
public:
	typedef bool Type;

	BooleanObjectTmpl<T> ();

    BooleanObjectTmpl<T> (DocumentImpl* pDoc);

	BooleanObjectTmpl<T> (
		bool nValue);

	bool value() const;

	void setValue (
		bool bValue);

	void toStream (
		IStream& stream) const;

    Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

	String toString () const;

	static bool parseString (
		const wchar_t* strValue, 
		int nValueLen);

	static IParserEventSink::EventCode parseString (
		const wchar_t* strValue, 
		int nValueLen, 
		bool& bValue);

	static void streamOut (
		const bool bValue, 
		IStream& stream);

	static const wchar_t* kstrTrue;
	static const wchar_t* kstrFalse;

private:
	bool m_bValue;
};


template <class T>
class  EnumObjectTmpl : public ValueObjectTmpl<T>
{
protected:
	static int findString (
		const wchar_t* strValue,
		int nValueLen,
        const wchar_t* strarrValues[], 
        const int nNumValues);
};

}; // End Namespace

#endif


