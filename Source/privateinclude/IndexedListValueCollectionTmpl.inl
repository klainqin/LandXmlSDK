#if !defined(__LX_INDEXEDVALUELISTCOLLECTIONTMPL_INL)
#define __LX_INDEXEDVALUELISTCOLLECTIONTMPL_INL

/////////////////////////////////////////////////////////////////////////////
//
// File: IndexedListValueCollectionTmpl.inl
//
// Description: 
//		Contains the implementation of the IndexedListValueCollectionTmpl template.
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "IndexedListValueCollectionTmpl.h"
#include "ParseException.h"
#include "Utils.h"

#include "ValueObjectTmpl.inl"


#pragma warning (push)
#pragma warning (disable: 4786 4710)

namespace LX
{

template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::IndexedListValueCollectionTmpl<T, BaseT, TObject> ()
{
    m_arrValues.reserve(3);

	// Indexed lists can never be set to "nothing" they can only be emptied.
	m_bNothing = false;
}

template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::IndexedListValueCollectionTmpl<T, BaseT, TObject> (
    DocumentImpl* pDoc)
    : ValueObjectTmpl<BaseT>(pDoc)
{
    m_arrValues.reserve(3);

	// Indexed lists can never be set to "nothing" they can only be emptied.
	m_bNothing = false;
}


template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::IndexedListValueCollectionTmpl<T, BaseT, TObject> (
	const IndexedListValueCollectionTmpl<T, BaseT, TObject>& value)
	: m_arrValues(value.m_arrValues)
{
	// Indexed lists can never be set to "nothing" they can only be emptied.
	m_bNothing = false;
}


template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::IndexedListValueCollectionTmpl<T, BaseT, TObject> (
	const IndexedListValueCollection<T>& value)
{
    copy (value);

	// Indexed lists can never be set to "nothing" they can only be emptied.
	m_bNothing = false;
}

template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::IndexedListValueCollectionTmpl<T, BaseT, TObject> (
	IndexedListValueCollectionTmpl<T, BaseT, TObject>* pValue)
{
	if (pValue)
	{
		m_arrValues = pValue->m_arrValues;
	}
	// Indexed lists can never be set to "nothing" they can only be emptied.
	m_bNothing = false;
}

template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::~IndexedListValueCollectionTmpl<T, BaseT, TObject> ()
{
    m_arrValues.clear();
    
	m_bNothing = false;
}



template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>::IndexedListValueCollectionTmpl<T, BaseT, TObject> (
	IndexedListValueCollection<T>* pValue)
{
	if (pValue)
	{
        copy(*pValue);
	}

    m_bNothing = false;
}


template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::copy (
	const IndexedListValueCollection<T>& value)
{
    int nSize = value.size();
    // Reserve the array.
    m_arrValues.reserve(nSize);

    // Populate the array.
    for (int i = 0; i < nSize; i++)
    {
		m_arrValues.push_back(value.at(i));
    }

    m_bNothing = false;
}

template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::addItem (
	T item)
{
	m_arrValues.push_back(item);
}


template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::addParsedItems (
	const wchar_t* strValue, 
	int nValueLen)
{
	int nStartPos = 0;
	int nTokenPos = 0;
	int nTokenLen = 0;

	while (Utils::tokenizeString(strValue, nValueLen, Utils::k_strDelimiters, nStartPos, nTokenPos, nTokenLen))
	{
		addItem(TObject::parseString(&(strValue[nTokenPos]), nTokenLen));
		nStartPos = nTokenPos + nTokenLen;
	}

	return;
}


template <class T, class BaseT, class TObject>
IndexedListValueCollection<T>& IndexedListValueCollectionTmpl<T, BaseT, TObject>::value()
{
	return *this;
}


template <class T, class BaseT, class TObject>
const IndexedListValueCollection<T>& IndexedListValueCollectionTmpl<T, BaseT, TObject>::value() const
{
	return *this;
}



template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::toStream (
	IStream& stream) const
{
	IndexedListValueCollectionTmpl<T, BaseT, TObject>::streamOut(this, stream);
}


template <class T, class BaseT, class TObject>
String IndexedListValueCollectionTmpl<T, BaseT, TObject>::toString () const
{
    String strValue;
 	int nSize = size();
	for (int i = 0; i < nSize; i++)
	{
        strValue += (TObject(m_arrValues.at(i))).toString();
		if (i < nSize - 1)
			strValue += L" ";
	}

    return strValue;
}

template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::reserve (int nSize)
{
    m_arrValues.reserve(nSize);
}


template <class T, class BaseT, class TObject>
int IndexedListValueCollectionTmpl<T, BaseT, TObject>::size () const
{
	return m_arrValues.size();
}


template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::clearItems ()
{
	m_arrValues.clear();
}


template <class T, class BaseT, class TObject>
const T& IndexedListValueCollectionTmpl<T, BaseT, TObject>::at (
	const int i) const
{
	return m_arrValues.at(i);
}


template <class T, class BaseT, class TObject>
T& IndexedListValueCollectionTmpl<T, BaseT, TObject>::at (
	const int i) 
{
	return m_arrValues.at(i);
}


template <class T, class BaseT, class TObject>
const T& IndexedListValueCollectionTmpl<T, BaseT, TObject>::operator[] (
	const int i) const
{
	return m_arrValues.at(i);
}


template <class T, class BaseT, class TObject>
T& IndexedListValueCollectionTmpl<T, BaseT, TObject>::operator[] (
	const int i) 
{
	if( i >= (int) m_arrValues.size() )  // if will be assigning to a new entry,
            m_arrValues.resize(i+1);         //   make space for it
	return m_arrValues.at(i);
}


template <class T, class BaseT, class TObject>
IndexedListValueCollectionTmpl<T, BaseT, TObject>* IndexedListValueCollectionTmpl<T, BaseT, TObject>::parseString (
	const wchar_t* strValue, 
	int nValueLen)
{
	int nStartPos = 0;
	int nTokenPos = 0;
	int nTokenLen = 0;

	IndexedListValueCollectionTmpl<T, BaseT, TObject>* pCollection = new IndexedListValueCollectionTmpl<T, BaseT, TObject>();
	if (!pCollection)
		throw ParseException(IParserEventSink::Severity::kUnrecoverableError, IParserEventSink::EventCode::kAllocationFailure, L"Memory allocation failure.");

	while (Utils::tokenizeString(strValue, nValueLen, Utils::k_strDelimiters, nStartPos, nTokenPos, nTokenLen))
	{
		pCollection->addItem(TObject::parseString(&(strValue[nTokenPos]), nTokenLen));
		nStartPos = nTokenPos + nTokenLen;
	}

	return pCollection;
}


template <class T, class BaseT, class TObject>
IParserEventSink::EventCode IndexedListValueCollectionTmpl<T, BaseT, TObject>::parseString (
	const wchar_t* strValue, 
	int nValueLen,
typename	IndexedListValueCollectionTmpl<T, BaseT, TObject>::Type& value)
{
	int nStartPos = 0;
	int nTokenPos = 0;
	int nTokenLen = 0;

	T itemValue;
	IParserEventSink::EventCode sts;

	value = new IndexedListValueCollectionTmpl<T, BaseT, TObject>();
	if (!value)
		throw ParseException(IParserEventSink::Severity::kUnrecoverableError, IParserEventSink::EventCode::kAllocationFailure, L"Memory allocation failure.");

	while (Utils::tokenizeString(strValue, nValueLen, Utils::k_strDelimiters, nStartPos, nTokenPos, nTokenLen))
	{
		// Parse the next value. Make sure the value is valid.
		sts = TObject::parseString(&(strValue[nTokenPos]), nTokenLen, itemValue);
		if (sts != IParserEventSink::EventCode::kOk)
			return sts;

		// Add the value to the colllection.
		value->addItem(itemValue);
		nStartPos = nTokenPos + nTokenLen;
	}

	return IParserEventSink::EventCode::kOk;
}



template <class T, class BaseT, class TObject>
void IndexedListValueCollectionTmpl<T, BaseT, TObject>::streamOut (
	const IndexedListValueCollection<T>* pVec, 
	IStream& stream)
{
	int nSize = pVec->size();
	for (int i = 0; i < nSize; i++)
	{
		TObject::streamOut(pVec->at(i), stream);
		if (i < nSize - 1)
			stream.write(L" ");
	}
}

}; // End Namespace.

#pragma warning(pop)

#endif 
