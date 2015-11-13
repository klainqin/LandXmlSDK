#if !defined(__LX_OBJLISTTMPL_INL)
#define __LX_OBJLISTTMPL_INL

#include "LXDefs.h"
#include "ObjListTmpl.h"
#include "Exception.h"

#include "ObjCollectionTmpl.inl"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4710 4812)

namespace LX
{

template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
int ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::count () const
{
    return m_list.size();
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::~ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator> ()
{
	// Iteratate through the map and delete all the lists in the map.
	// Although clear the list before deleting it.
    list_t::iterator listIterator = m_list.begin();

	while (listIterator != m_list.end())
	{
        if (*listIterator != NULL)
        {
            (*listIterator)->release();
        }
		listIterator++;
	}
};


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
void ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::toXml (
    IStream& stream)
{
    for (list_t::iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        (*iter)->toXml(stream);
    }
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
void ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::addItem (
	T_Obj* pObject)
{
    addItemHelper (pObject);
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
T_Iterator* ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::addItemReturnIterator (
	T_Obj* pObject)
{
    list_t::iterator stlIterator = addItemHelper(pObject);
    T_Iterator *pIter = new ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>(*this,  stlIterator);
    if (!pIter)
        throw Exception(Exception::kUnableToAllocateMemory, L"Could not allocate iterator.");

    return pIter;
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::iterator ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::addItemHelper (
	T_Obj* pObject)
{
    // Make sure there is an object.
    if (!pObject)
    {
        throw Exception(Exception::kInvalidCollectionItem, L"Invalid Item.");
    }

    // First check to make sure the item is not already in a collection.
    if (castObjectToICollectable(pObject)->getContainingCollectionLocation())
    {
        throw Exception(Exception::kItemIsAlreadyInACollection, L"Item is already in a collection.");
    }

    // Add the item to the list
    list_t::iterator stlListPosition = m_list.insert(m_list.end(), pObject);

    // New up an iterator
    CollectionLocation* pLocation = new ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>(*this, stlListPosition);
    if (!pLocation)
    {
        throw Exception(Exception::kUnableToAllocateMemory, L"Could not allocate iterator.");
    }

    castObjectToICollectable(pObject)->setContainingCollectionLocation(pLocation);

    return stlListPosition;
}



template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
T_Iterator*  ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::iterator()
{
    // New up an iterator and return it.
    return new ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>(*this, m_list.begin());
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
T_ConstIterator*  ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::iterator() const
{
    // New up an iterator and return it.
    return new ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>(*this, m_list.begin());
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
Object::ValidityEnum ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::validate (
    IValidationEventSink* pEventSink) const
{
    int nCount = 0;
    Object::ValidityEnum returnSts = Object::kValid;

    for (list_t::const_iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        nCount++;
        if ((*iter)->validate(pEventSink) != Object::kValid)
            returnSts = Object::kCollectionContainsInvalidItems;
    }

    return returnSts;
}


// ObjListTmpl::IteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator> (
    typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>& objectList, 
    typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::iterator stlIterator)
    : m_objectList(objectList), m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
bool ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
bool ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectList.m_list.end();
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
T_Obj* ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return *m_stlIterator;
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
T_Obj* ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::remove ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");

    // Dereference the iterator to get the object pointer.
    T_Obj* pObject = *m_stlIterator;

    ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::iterator tIter = m_stlIterator;
    ++m_stlIterator;            // pass the removed element

    // Remove the item form the map and list in the object map.
    m_objectList.m_list.erase( tIter );

    // Call the object to set the collection location to null
    m_objectList.castObjectToICollectable(pObject)->setContainingCollectionLocation(NULL);

    // Return the object.
    return pObject;
}

template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
void ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}

// ObjListTmpl::ConstIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator> (
    const typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>& objectList, 
    typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::const_iterator stlIterator)
    : m_objectList(objectList), m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
bool ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
bool ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectList.m_list.end();
}


template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
const T_Obj* ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return *m_stlIterator;
}

template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
void ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}


}; // End namespace LX
 
#pragma warning( pop )
#endif
