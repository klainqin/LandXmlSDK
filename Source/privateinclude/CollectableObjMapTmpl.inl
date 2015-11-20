#if !defined(__LX_COLLECTABLEOBJMAPTMPL_INL)
#define __LX_COLLECTABLEOBJMAPTMPL_INL

#include "CollectableObjMapTmpl.h"
#include "Exception.h"
#include "NamedObjMapTmpl.inl"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4710)

namespace LX
{

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void CollectableObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemPreAdd (
    T_Obj* pObject)   
{
    ICollectable* pCollectable = castObjectToICollectable(pObject);

    // First check to make sure the item is not already in a collection.
    if (pCollectable->getContainingCollectionLocation())
    {
        throw Exception(Exception::kItemIsAlreadyInACollection, L"Item is already in a collection.");
    }

}


template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void CollectableObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemAdded (
    typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXref)
{
    CollectionLocation* pLocation = NULL;
    ICollectable* pCollectable = castObjectToICollectable(pXref->m_pObject);

    // Set the collection location on the newly added object.
    pLocation = new NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>(*this, pXref->m_listPosition);
    if (!pLocation)
    {
        throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
    }

    pCollectable->setContainingCollectionLocation(pLocation);

    return;
}

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
void CollectableObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::itemRemoved (
    T_Obj* pObject)   
{

    ICollectable* pCollectable = castObjectToICollectable(pObject);

    // Call the object to set the collection location to null
    pCollectable->setContainingCollectionLocation(NULL);

    return;
}

} // End namespace LX
 
#pragma warning( pop )

#endif
