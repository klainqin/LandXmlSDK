#if !defined(__LX_NAMEDGLOBALOBJMAPTMPL_H)
#define __LX_NAMEDGLOBALOBJMAPTMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: NamedObjMapTmpl.h
//
// Description: 
//		Contains the template header for the NamedObjMapTmpl and the 
//      corresponding NamedObjMapTmplIterator.
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "ObjectTmpl.h"
#include "Iterator.h"
#include "ObjCollectionTmpl.h"
#include "NamedCollectionLocation.h"
#include "HashCompare.h"

#pragma warning(push, 1)
#include <map>
#include <hash_map>
#include <list>
#pragma warning(pop)


// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4097 4710)

namespace LX
{

template<class T_Obj, class T_Base, class T_Id, class T_Iterator> class NamedObjMapTmpl_CoreIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator> class NamedObjMapTmpl_ListIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator> class NamedObjMapTmpl_MapIteratorImpl;

/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMapTmpl
//
// Description: 
//     Basically this defines the NamedObjMapTmpl.  The NamedObjMapTmpl
//     is used to store LX::Object derived types that must implement the 
//     ICollectable and the Identifiable interface.  The collection is 
//     fundamentally a list/map hybrid since the items are not required
//     to have a name.  If the item does have a name it can be referenced
//     by that name. NAMES IN THIS COLLECTION MUST BE UNIQUE.
//     All the items in the collection can be access via 
//     a list iterator.  This iterator will return all items in the collection
//     (whether named or not) in the order they were added.  This order is 
//     is maintained when parsing in or seriallizing out the XML representation
//     of this list.
//
//     Objects put into this collection are allocated externally and then added as 
//     pointers (This a collection of pointers).  ALL OBJECTS PUT IN THE LIST
//     MUST BE ALLOCATED ON THE HEAP.  Object put in the collection are owned
//     by the collection (ie, will be deallocated by the collection when the 
//     collection is deleted).  Objects removed from the collection are no
//     longer owned by the collection and must be deallocated externally.
//     NO ARRAY ALLOCATED OBJECTS (ie new []).
//
// Template Parameters
//      T_Obj : 
//          The object being stored. Must be derived from ObjectTmpl<T_Base>
//          and must implement the IIdentifiable<T_Id> interface.
//      T_Base : 
//          The base interface that is being implmented by this collection
//          Must be derived from NamedObjMap.
//      T_Id : 
//          The Id type (String, int, etc),  Must implment default constructor
//          copy, equals, less than, etc...
//      T_Iterator :
//          The Iterator Interface that will be used by the collection.
//          Must be derived from Iterator<T_Obj*>
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator>
class NamedGlobalObjMapTmpl : public NamedObjMapTmpl<T_Obj, T_Base>
{
public:	

	virtual ~NamedGlobalObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator> ();

	virtual void addItem (
		T_Obj* pObj);

    virtual void clear ();

protected:
    virtual const T_Id* getObjectId (
        Object* pObject);

    // Make friends with the Iterator Implementation since 
    // I can't put it in as an inner class.
    friend class NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator>;
    friend class NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator>;
    friend class NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator>;

    class XRefItem;

    // Define the hashmap type.
    typedef std::list<XRefItem*> list_t;
    typedef std::hash_map<T_Id, XRefItem*, HashCompare> hashmap_t;

    /////////////////////////////////////////////////////////////////////////////
    //
    // Class: XRefItem
    //
    // Description: 
    //      Basically this class store the XRef between the list and and
    //      hash map in the NamedObjMultiMapTmpl collection.
    //
    /////////////////////////////////////////////////////////////////////////////
    struct XRefItem
    {
        XRefItem (
            hashmap_t::iterator mapPosition, 
            list_t::iterator listPosition)
        {
            m_mapPosition = mapPosition;
            m_listPosition = listPosition;
            m_pObject = NULL;
        }

        hashmap_t::iterator m_mapPosition;
        list_t::iterator m_listPosition;
        T_Obj* m_pObject;
    };


    hashmap_t m_map;
    list_t m_list;
};

/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl_CoreIteratorImpl
//
// Description: 
//     Base class for the type iterator class defined below.
//
//     Should be a inner class in NamedObjMapTmpl but VC++ doesn't allow this
//     so I'm doing the next best thing.
//
// Template Parameters
//     See Above.... NamedObjMultiMapTmpl
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator>
class NamedObjMapTmpl_CoreIteratorImpl : public T_Iterator, public NamedCollectionLocation
{
public:
    NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator> (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>& objectMap);

    virtual void release ();

    virtual T_Obj* remove (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>::XRefItem *pXref);

    virtual bool objectRenamed ( 
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>::XRefItem *pXref);

protected:
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>& m_objectMap;
};

/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl_IteratorImpl
//
// Description: 
//     Basically an implmentation of Iterator<T_Obj*> and NamedCollectionLocation
//     interfaces.  Provides basic iterator capabilities over the 
//     NamedObjMapTmpl collection.
//
//     Should be a inner class in NamedObjMapTmpl but VC++ doesn't allow this
//     so I'm doing the next best thing.
//
// Template Parameters
//     See Above.... NamedObjMultiMapTmpl
//
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator>
class NamedObjMapTmpl_ListIteratorImpl : public NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator>
{
public:
    NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator> (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>& objectMap, 
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>::list_t::iterator stlIterator);

    virtual T_Obj* next ();

    virtual T_Obj* current ();

    virtual bool hasNext ();

    virtual T_Obj* remove ();

    virtual bool objectRenamed ();

private:
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>::list_t::iterator m_stlIterator;
};


/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl_MapIteratorImpl
//
// Description: 
//     Basically an implmentation of ReadIterator<T_Obj*> and NamedCollectionLocation
//     interfaces.  Provides basic POSITIONAL ONLY iterator capabilities over the 
//     NamedObjMapTmpl collection (No remove).
//      
//     This iterator is used to iterate through the map and is returned throught
//     the NamedObjMultiMapTmpl::find.
//
//     Should be a inner class in NamedObjMapTmpl but VC++ doesn't allow this
//     so I'm doing the next best thing.
//
// Template Parameters
//     See Above.... NamedObjMultiMapTmpl
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator>
class NamedObjMapTmpl_MapIteratorImpl : public NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator>
{
public:
    NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator> (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>& objectMap, 
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>::XRefItem* pXRef);

    virtual T_Obj* next ();

    virtual T_Obj* current ();

    virtual T_Obj* remove ();

    virtual bool hasNext ();

    virtual bool objectRenamed ();

private:
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator>::XRefItem* m_pXRef;
};
}; // End Namespace.

#pragma warning( pop )

 
#endif
  