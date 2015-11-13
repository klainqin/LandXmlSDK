#if !defined(__LX_NAMEDOBJMULTIMAPTMPL_INL)
#define __LX_NAMEDOBJMULTIMAPTMPL_INL

#include "NamedObjMultiMapTmpl.h"
#include "Exception.h"
#include "ObjCollectionTmpl.inl"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4710 4005)

#define _HAS_ITERATOR_DEBUGGING 0

namespace LX
{

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::~NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> ()
{
    // CLEARS THE COLLECTION AND DEALLOCATES THE OBJECTS IN THE COLLECTION.

    // Iterate through the list.  Delete all the objects.
    for (list_t::iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        // Make sure there is an XrefItem object.
        if (*iter)
        {
            // Make sure the Xref has an object.
            // Delete the object.
            if ((*iter)->m_pObject)
			{
				(*iter)->m_pObject->release();
				(*iter)->m_pObject = NULL;
			}
			delete *iter;
        }
    }

	// Clear the list
    m_list.clear();

    // Clear the map
    m_map.clear();
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::toXml (
    IStream& stream)
{
    for (list_t::const_iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        (*iter)->m_pObject->toXml(stream);
    }
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Iterator* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::addItemReturnIterator (
	T_Obj* pObject)
{
    list_t::iterator stlIterator = addItemHelper(pObject);
    T_Iterator *pIter = new NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this,  stlIterator);
    if (!pIter)
        throw Exception(Exception::kUnableToAllocateMemory, L"Could not allocate iterator.");

    return pIter;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::requiresUniqueId () const
{
    return false;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::addItem (
	T_Obj* pObject)
{
    addItemHelper(pObject);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::addItemHelper (
	T_Obj* pObject)
{
    XRefItem* pXref = NULL;
    CollectionLocation* pLocation = NULL;
    ICollectable* pCollectable = castObjectToICollectable(pObject);
    try
    {
        // Make sure there is an object.
        if (!pObject)
        {
            throw Exception(Exception::kInvalidCollectionItem, L"Invalid Item.");
        }

        // First check to make sure the item is not already in a collection.
        if (pCollectable->getContainingCollectionLocation())
        {
            throw Exception(Exception::kItemIsAlreadyInACollection, L"Item is already in a collection.");
        }

        // Construct an XRef object for the item
        pXref = new XRefItem(m_map.end(), m_list.end());
        if (!pXref)
        {
            throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        }

        // Check for a id.
        // First cast the object to the IIdentifiable interface.
        const T_Id* pId = getObjectId(pObject);

        // Make sure we have an id and the Object Id has a value.
        if (pId) 
        {
            // Add the xref to the map using the id.
            hashmap_t::iterator mapPosition = m_map.insert(hashmap_t::value_type(*pId, pXref));

            // Set the map position.
            pXref->m_mapPosition = mapPosition;
        }

        // Add the XRefItem to the list.
	    pXref->m_listPosition = m_list.insert(m_list.end(), pXref);

        // Set the item.
        pXref->m_pObject = pObject;

        // Set the collection location on the newly added object.
        pLocation = new NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, pXref->m_listPosition);
        if (!pLocation)
        {
            throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        }

        pCollectable->setContainingCollectionLocation(pLocation);

        return pXref->m_listPosition;
    }
    catch (Exception e)
    {
        // Try to recover everything that was done
        pCollectable->setContainingCollectionLocation(NULL);

        if (pXref)
        {
            // Remove from the map if added.
            if (pXref->m_mapPosition != m_map.end())
                m_map.erase(pXref->m_mapPosition);

            // Remove from the list if added
            if (pXref->m_listPosition != m_list.end())
                m_list.erase(pXref->m_listPosition);

            delete pXref;
        }

        if (pLocation)
            delete pLocation;

        // rethrow the exception
        throw e;
    }
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Iterator* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::find(
	const T_Id& id)  
{
    hashmap_t::iterator iter = m_map.find(id);
	if (iter != m_map.end())
    {
        T_Iterator* pIterator = new NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, iter);
        if (!pIterator)
        {
            throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        }

        return (pIterator);
    }
	else
		return NULL;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::findFirstMatch(
	const T_Id& id)  
{
    hashmap_t::iterator iter = m_map.find(id);
	if (iter != m_map.end())
        return iter->second->m_pObject;
	else
		return NULL;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_ConstIterator* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::find(
	const T_Id& id) const
{
    hashmap_t::const_iterator iter = m_map.find(id);
	if (iter != m_map.end())
    {
        T_ConstIterator* pIterator = new NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, iter);
        if (!pIterator)
        {
            throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        }

        return (pIterator);
    }
	else
		return NULL;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Obj* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::findFirstMatch(
	const T_Id& id) const
{
    hashmap_t::const_iterator iter = m_map.find(id);
	if (iter != m_map.end())
        return iter->second->m_pObject;
	else
		return NULL;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::contains (
    const T_Id& id) const
{
    return m_map.find(id) != m_map.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
int NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::count () const
{
    return m_list.size();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Iterator* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::iterator () 
{
    // Construct a new iterator using the begining of the list as the start position.
    T_Iterator* pIterator = new NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, m_list.begin());
    if (!pIterator)
    {
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
    }
    return (pIterator);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_ConstIterator* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::iterator () const
{
    // Construct a new iterator using the begining of the list as the start position.
    T_ConstIterator* pIterator = new NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, m_list.begin());
    if (!pIterator)
    {
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
    }
    return (pIterator);
}



template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Id* NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::getObjectId (
	Object* pObject)   
{
    // Check for a id.
    // First cast the object to the IIdentifiable interface.
    IIdentifiable<T_Id>*pId = NULL;
	
	pId = dynamic_cast<IIdentifiable<T_Id>*> (pObject);

    // Return the object id.
    const T_Id* pObjectId=NULL;

	if (pId)
		pId->getObjectId(pObjectId);

    return pObjectId;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
Object::ValidityEnum NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::validate (
    IValidationEventSink* pEventSink) const
{
    int nCount = 0;
    Object::ValidityEnum returnSts = Object::kValid;

    for (list_t::const_iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        nCount++;
        if ((*iter)->m_pObject->validate(pEventSink) != Object::kValid)
            returnSts = Object::kCollectionContainsInvalidItems;
    }

    return returnSts;
}


// NamedObjMultiMapTmpl_CoreIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap)
    : m_objectMap(objectMap)
{
}



template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove (
   typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
{
    T_Obj* pObject = pXRef->m_pObject;
    ICollectable* pCollectable = m_objectMap.castObjectToICollectable(pObject);


    // Remove the item form the map and list in the object map.
    m_objectMap.m_map.erase(pXRef->m_mapPosition);
    m_objectMap.m_list.erase(pXRef->m_listPosition);

    // Call the object to set the collection location to null
    pCollectable->setContainingCollectionLocation(NULL);

    // Blow away the xref.
    delete pXRef;

    // Return the object.
    return pObject;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed (
typename    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
{
    T_Obj* pObject = pXRef->m_pObject;
    const T_Id* pId = m_objectMap.getObjectId(pObject);

    // First make sure the object originally had an Id.
    if (pXRef->m_mapPosition != m_objectMap.m_map.end())
    {
        // Remove the entry from the map
        m_objectMap.m_map.erase(pXRef->m_mapPosition);
    }

    // Add the object back into the map using the new name.
    if (pId)
    {
        // Add the xref to the map using the id.
        NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::iterator mapPosition; 
        mapPosition = m_objectMap.m_map.insert( NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::value_type(*pId, pXRef));

        // Set the map position.
        pXRef->m_mapPosition = mapPosition;
    }
    else
    {
       pXRef->m_mapPosition = m_objectMap.m_map.end();
    }

    return true;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}


// NamedObjMultiMapTmpl::IteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
   typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator stlIterator)
    : NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(objectMap), 
      m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectMap.m_list.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return (*m_stlIterator)->m_pObject;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator tmpIter = m_stlIterator;
    ++m_stlIterator;    // Move past element being removed
    return NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove(*tmpIter);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed ()
{
    return NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed(*m_stlIterator);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectCheckNewName ()
{
    return true;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRemoved ()
{
    remove();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release();
}


// NamedObjMultiMapTmpl_MapIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
typename    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::iterator stlIterator)
    : NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(objectMap),
      m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectMap.m_map.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return m_stlIterator->second->m_pObject;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove(m_stlIterator->second);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed ()
{
    return NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed(m_stlIterator->second);
}


// NamedObjMultiMapTmpl_ListConstIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    const NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
typename    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::const_iterator stlIterator)
    : m_objectMap(objectMap),
      m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectMap.m_list.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Obj* NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return (*m_stlIterator)->m_pObject;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}



// NamedObjMultiMapTmpl_MapConstIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    const NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
   typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::const_iterator stlIterator)
    : m_objectMap(objectMap),
      m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectMap.m_map.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Obj* NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return m_stlIterator->second->m_pObject;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{

    delete this;
}

} // End namespace LX
 
#pragma warning( pop )
#endif
