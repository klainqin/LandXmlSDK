#if !defined(__LX_OBJECTTMPL_INL)
#define __LX_OBJECTTMPL_INL

#include "stdafx.h"
#include "ObjectTmpl.h"
#include "DocumentImpl.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: Object.cpp
//
// Description: 
//		Contains the implementation of the Object class
//
// $History: Object.cpp $
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

template<class T>
ObjectTmpl<T>::ObjectTmpl<T> ()
{
    m_pDoc = NULL;
    m_pCollectionLocation = NULL;
}

template<class T>
ObjectTmpl<T>::ObjectTmpl<T> (DocumentImpl* pDoc)
{
    m_pDoc = pDoc;
    m_pCollectionLocation = NULL;
}


template<class T>
ObjectTmpl<T>::~ObjectTmpl<T> ()
{

}


template<class T>
void ObjectTmpl<T>::toXml (
	IStream& stream)
{
	// Do nothing.
	stream;
}


template<class T>
String ObjectTmpl<T>::toString () const
{
	return L"";
}


template<class T>
void ObjectTmpl<T>::toStream (
	IStream& stream) const
{
	// To Stream.
	stream;
}


template<class T>
Document* ObjectTmpl<T>::getDocument ()
{
    return m_pDoc;
}


template<class T>
void ObjectTmpl<T>::setContainingCollectionLocation (
    CollectionLocation* pLocation)
{
    // If the new location pointer equals the current location then 
    // bail.
    if (pLocation == m_pCollectionLocation)
    {
        return;
    }

    // If the iterator is being set to NULL then just set it.
    if (pLocation == NULL)
    {
        // Release the original location pointer if there was one.
        if (m_pCollectionLocation)
            m_pCollectionLocation->release();

        // Object is being taken out of a collection, so set the 
        // iterator to NULL.
        m_pCollectionLocation = NULL;
    }
    else
    {
        // Object is being added to a collection.
        // Make sure its not already in a collection.
        if (m_pCollectionLocation)
        {
            throw Exception(Exception::kObjectIsAlreadyInCollection, L"Object is already in a collection.");
        }

        // Set the iterator.
        m_pCollectionLocation = pLocation;
    }
}


template<class T>
CollectionLocation* ObjectTmpl<T>::getContainingCollectionLocation ()
{
    return m_pCollectionLocation;
}


template<class T>
Object* ObjectTmpl<T>::getGlobalCollection ()
{
    return NULL;
}


template<class T>
Object::ValidityEnum ObjectTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    pEventSink;  // Do nothing.
    return Object::kValid;
}


template<class T>
void ObjectTmpl<T>::release ()
{
	if (m_pCollectionLocation)
		m_pCollectionLocation->release();

	m_pCollectionLocation = NULL;

	delete this;
}

};

#endif
