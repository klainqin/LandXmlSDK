#if !defined(__LX_GLOBALOBJMAPTMPL_INL)
#define __LX_GLOBALOBJMAPTMPL_INL

#include "GlobalObjMapTmpl.h"
#include "Exception.h"
#include "NamedObjMapTmpl.inl"
#include "GlobalCollectionLocation.h"
#include "assert.h"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4710)

namespace LX
{

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void GlobalObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemPreAdd (
    T_Obj* pObject)   
{
    ICollectable* pCollectable = this->castObjectToICollectable(pObject);

    // First check to make sure the item is not already in a collection.
    if (pCollectable->getContainingCollectionLocation())
    {
        throw Exception(Exception::kItemIsAlreadyInACollection, L"Item is already in a collection.");
    }

    // Next make sure the id is not being used in the global collection.
    // Check for a id.
    const T_Id* pId = this->getObjectId(pObject);

    // Make sure we have an id and the Object Id has a value.
    // If we have id and since this object has global visibility by definition, we need to make
    // sure the id does not conflict within the global collection.
    if (pId) 
    {
        // Make sure the map doesn't have the id already mapped.
        T_Iterator* pIter = getObjectsGlobalCollection(pCollectable)->find(*pId);
        if (pIter)
        {
            pIter->release();
            throw Exception(Exception::kObjectIdHasGlobalConflict, L"Item id must be globally unique.");
        }
    }
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void GlobalObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemAdded (
    typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXref)
{
    NamedCollectionLocation* pLocalLocation = NULL;
    T_Iterator* pGlobalIter = NULL;
    GlobalCollectionLocation* pLocation = NULL;
    ICollectable* pCollectable = this->castObjectToICollectable(pXref->m_pObject);

    // Add the item to the Global collection
    pGlobalIter = getObjectsGlobalCollection(pCollectable)->addItemReturnIterator(pXref->m_pObject);

    // WARNING HACK.
    // The Global iterator must also implement the NamedCollectionLocation for this work.
    NamedCollectionLocation* pGlobalLocation = dynamic_cast<NamedCollectionLocation*>(pGlobalIter);
    assert(pGlobalLocation);
    if (!pGlobalIter)
        throw Exception(Exception::kFail, L"Global collection requires contained iterator to implement NamedCollectionLocation.");

    // Set the collection location on the newly added object.
    pLocalLocation = new NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, pXref->m_listPosition);
    if (!pLocalLocation)
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");

    // Allocate a GlobalCollectionLocation object and add the two locations.
    pLocation = new GlobalCollectionLocation(pLocalLocation, pGlobalLocation);
    if (!pLocation)
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");

    // Set the containing objects collection.
    pCollectable->setContainingCollectionLocation(pLocation);

    return;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void GlobalObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemRemoved (
    T_Obj* pObject)   
{
    return;
}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
typename GlobalObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::object_map_t* GlobalObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::getObjectsGlobalCollection (
    ICollectable* pCollectable)   
{
    // Get the global collection object.
    Object* pCollObj = pCollectable->getGlobalCollection();
    assert(pCollObj);
    if (!pCollObj)
        throw Exception(Exception::kFail, L"Collection requires its contained items getGlobalCollection to return a valid pointer.");

    // Cast the object to the appropriate map.
    object_map_t* pGlobalMap = dynamic_cast<object_map_t*>(pCollObj);
    assert(pGlobalMap);
    if (!pGlobalMap)
        throw Exception(Exception::kFail, L"Collection requires its contained items getGlobalCollection to return a valid Map pointer.");

    return pGlobalMap;
}


} // End namespace LX
 
#pragma warning( pop )

#endif
