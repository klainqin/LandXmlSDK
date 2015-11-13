#if !defined(__LX_NAMEDOBJMAPTMPL_INL)
#define __LX_NAMEDOBJMAPTMPL_INL

#include "NamedObjMapTmpl.h"
#include "Exception.h"
#include "ObjCollectionTmpl.inl"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4710)

namespace LX
{


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::~NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> ()
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
                (*iter)->m_pObject=NULL;
            }

            // Delete the XrefItem.
            delete *iter;
        }
    }

    // Clear the list
    m_list.clear();

    // Clear the map
    m_map.clear();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::toXml (
    IStream& stream)
{
    for (list_t::iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        (*iter)->m_pObject->toXml(stream);
    }
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::requiresUniqueId () const
{
    return false;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Iterator* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::addItemReturnIterator (
	T_Obj* pObject)
{
    list_t::iterator stlIterator = addItemHelper(pObject);
    T_Iterator *pIter = new NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this,  stlIterator);
    if (!pIter)
        throw Exception(Exception::kUnableToAllocateMemory, L"Could not allocate iterator.");

    return pIter;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::addItem (
	T_Obj* pObject)
{
    addItemHelper(pObject);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::addItemHelper (
	T_Obj* pObject)
{
    XRefItem* pXref = NULL;
    try
    {
        // Make sure there is an object.
        if (!pObject)
        {
            throw Exception(Exception::kInvalidCollectionItem, L"Invalid Item.");
        }

        // Call the preadd callback.
        itemPreAdd(pObject);

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
            // We have an id.
            // Make sure the id isn't already being used.
            hashmap_t::iterator iter = m_map.find(*pId);
	        if (iter != m_map.end())
            {
                throw Exception(Exception::kObjectIsAlreadyInCollection, L"Unable to add object to collection since object id is already being used in the collection.");
            }

            // Add the xref to the map using the id.
            std::pair<hashmap_t::iterator, bool> returnPair;
            returnPair = m_map.insert(hashmap_t::value_type(*pId, pXref));

            if (!returnPair.second)
            {
                throw Exception(Exception::kCollectionMapInsertFailed, L"The STL Map insert call failed.");
            }

            // Set the map position.
            pXref->m_mapPosition = returnPair.first;
        }

        // Add the XRefItem to the list.
	    pXref->m_listPosition = m_list.insert(m_list.end(), pXref);

        // Set the item.
        pXref->m_pObject = pObject;

        itemAdded (pXref);

        return pXref->m_listPosition;
    }
    catch (Exception e)
    {
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

        // rethrow the exception
        throw e;
    }
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Iterator* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::find(
	const T_Id& id)  
{
    hashmap_t::iterator iter = m_map.find(id);
	if (iter != m_map.end())
    {
        T_Iterator* pIterator = new NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, iter->second);
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
T_Obj* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::findFirstMatch(
	const T_Id& id)  
{
    hashmap_t::iterator iter = m_map.find(id);
	if (iter != m_map.end())
        return iter->second->m_pObject;
	else
		return NULL;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_ConstIterator* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::find(
	const T_Id& id) const 
{
    hashmap_t::const_iterator iter = m_map.find(id);
	if (iter != m_map.end())
    {
        T_ConstIterator* pIterator = new NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, iter->second);
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
const T_Obj* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::findFirstMatch(
	const T_Id& id) const
{
    hashmap_t::const_iterator iter = m_map.find(id);
	if (iter != m_map.end())
        return iter->second->m_pObject;
	else
		return NULL;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::contains (
    const T_Id& id) const
{
    return m_map.find(id) != m_map.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
int NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::count () const
{
    return m_list.size();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Iterator* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::iterator () 
{
    // Construct a new iterator using the begining of the list as the start position.
    T_Iterator* pIterator = new NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, m_list.begin());
    if (!pIterator)
    {
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
    }
    return (pIterator);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_ConstIterator* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::iterator () const
{
    // Construct a new iterator using the begining of the list as the start position.
    T_ConstIterator* pIterator = new NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, m_list.begin());
    if (!pIterator)
    {
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
    }
    return (pIterator);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::clear ()   
{
    // ONLY CLEARS THE COLLECTION, DOES NOT DEALLOCATE CONTAINED OBJECTS.

    // Iterate through the list.  Delete all the objects.
    for (list_t::iterator iter = m_list.begin(); iter != m_list.end(); ++iter)
    {
        // Call the removed callback.
        itemRemoved((*iter)->m_pObject);

        // Make sure there is an XrefItem object.
        if (*iter)
        {
            // Delete the XrefItem.
            delete *iter;
        }
    }

    // Clear the list
    m_list.clear();

    // Clear the map
    m_map.clear();
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
Object::ValidityEnum NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::validate (
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



template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemPreAdd (
    T_Obj* pObject)   
{
    return;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemAdded (
    XRefItem* pItem)   
{
    return;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemRemoved (
    T_Obj* pObject)   
{
    return;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Id* NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::getObjectId (
	Object* pObject)   
{
    // Check for a id.
    // First cast the object to the IIdentifiable interface.
    IIdentifiable<T_Id>*pId = dynamic_cast<IIdentifiable<T_Id>*> (pObject);

    // Return the object id.
    const T_Id* pObjectId;
    pId->getObjectId(pObjectId);
    return pObjectId;
}



// NamedObjMapTmpl_CoreIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap)
    : m_objectMap(objectMap)
{
}



template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove (
typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
{
    T_Obj* pObject = pXRef->m_pObject;
    ICollectable* pCollectable = m_objectMap.castObjectToICollectable(pObject);


    // Remove the item form the map and list in the object map.
    m_objectMap.m_map.erase(pXRef->m_mapPosition);
    m_objectMap.m_list.erase(pXRef->m_listPosition);

    // Call the callback.
    m_objectMap.itemRemoved (pObject);

    // Blow away the xref.
    delete pXRef;

    // Return the object.
    return pObject;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed (
   typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
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
        std::pair<NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::iterator, bool> returnPair;
        returnPair = m_objectMap.m_map.insert(NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::value_type(*pId, pXRef));

        if (!returnPair.second)
        {
            throw Exception(Exception::kCollectionMapInsertFailed, L"The STL Map insert call failed.");
        }

        // Set the map position.
        pXRef->m_mapPosition = returnPair.first;
    }
    else
    {
       pXRef->m_mapPosition = m_objectMap.m_map.end();
    }

    return true;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectCheckNewName (
   typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
{
    T_Obj* pObject = pXRef->m_pObject;
    const T_Id* pId = m_objectMap.getObjectId(pObject);

    // Make sure the Id either does not exist in the map or is already mapped to this iterator's object.
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::iterator mapIterator = m_objectMap.m_map.find(*pId);
    if (mapIterator != m_objectMap.m_map.end())
    {
        // Uh Oh we have an item already associated to the objects new id.
        // Make sure its not the same object.
        if (mapIterator->second == pXRef)
        {
            // Its the same object (somebody renamed the object with the same name).
            // Let it go and return true.
            return true;
        }

        // Otherwise the name is taken bail out returning false
        return false;
    }

    return true;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRemoved (
   typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
{
    remove (pXRef);
    return ;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}


// NamedObjMapTmpl::IteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
   typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator stlIterator)
    : NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(objectMap), 
      m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectMap.m_list.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return (*m_stlIterator)->m_pObject;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");

    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator tmpIter = m_stlIterator;
    ++m_stlIterator;    // Move past element being removed
    return NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove(*tmpIter);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed ()
{
    return NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed(*m_stlIterator);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectCheckNewName ()
{
    return NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectCheckNewName(*m_stlIterator);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRemoved ()
{
    NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRemoved(*m_stlIterator);
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release();
}




// NamedObjMapTmpl_MapIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
typename    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
    : NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(objectMap),
      m_pXRef(pXRef)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (!m_pXRef)
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    m_pXRef = NULL;
    return false;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    if (m_pXRef)
        return false;
    return true;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not a current element.");
    return m_pXRef->m_pObject;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
T_Obj* NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not a current element.");
    return NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::remove(m_pXRef);
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed ()
{
    return NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::objectRenamed(m_pXRef);
}


// NamedObjMapTmpl_ListConstIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    const NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
   typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::const_iterator stlIterator)
    : m_objectMap(objectMap),
      m_stlIterator(stlIterator)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    ++m_stlIterator;
    return !atEnd();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    // Compare the iterator to the list end.
    return m_stlIterator == m_objectMap.m_list.end();
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Obj* NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return (*m_stlIterator)->m_pObject;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}



// NamedObjMapTmpl_MapConstIteratorImpl ============================================

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    const typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
    const typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef)
    : m_objectMap(objectMap),
      m_pXRef(pXRef)
{
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::next ()
{
    if (!m_pXRef)
		throw Exception(Exception::kIteratorNextElementDoesNotExist, L"There is not a next element.");
    m_pXRef = NULL;
    return false;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
bool NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::atEnd ()
{
    if (m_pXRef)
        return false;
    return true;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
const T_Obj* NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::current ()
{
    if (atEnd())
		throw Exception(Exception::kIteratorCurrentElementDoesNotExist, L"There is not an element for this iterator.");
    return m_pXRef->m_pObject;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::release ()
{
    delete this;
}


} // End namespace LX
 
#pragma warning( pop )

#endif
