#if !defined(__LX_NAMEDOBJMULTIMAPTMPL_H)
#define __LX_NAMEDOBJMULTIMAPTMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: NamedObjMapTmpl.h
//
// Description: 
//		Contains the template header for the NamedObjMapTmpl and the 
//      corresponding NamedObjMapTmplIterator.
//
// $History: ParseGraphTraverser.h $
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

#if _MSC_VER > 1200
#include <hash_map>
#else
#include <map>
#endif
#include <list>
#pragma warning(pop)


// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( push )
#pragma warning( disable : 4786 4097 4710)

namespace LX
{

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMultiMapTmpl_CoreIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMultiMapTmpl_ListIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMultiMapTmpl_MapIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMultiMapTmpl_ListConstIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMultiMapTmpl_MapConstIteratorImpl;

/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl_XRefItem
//
// Description: 
//      Basically this class store the XRef between the list and and
//      hash map in the NamedObjMultiMapTmpl collection.
//
//      This was originally defined as an inner class to NamedObejMultiMapTmpl.
//      But this was taken out when the compiler started complaining about
//      names being too long.
//
/////////////////////////////////////////////////////////////////////////////
template <class T_Obj, class T_Id>
class NamedObjMultiMapTmpl_XRefItem
{
public:
    typedef std::list<NamedObjMultiMapTmpl_XRefItem*> list_t;
#if _MSC_VER > 1200
#if _MSC_VER > 1300
    typedef stdext::hash_multimap<T_Id, NamedObjMultiMapTmpl_XRefItem*, HashCompare> map_t;
#else
    typedef std::hash_multimap<T_Id, NamedObjMultiMapTmpl_XRefItem*, HashCompare> map_t;
#endif
#else
    typedef std::multimap<T_Id, NamedObjMultiMapTmpl_XRefItem*, HashCompare> map_t;
#endif
    

    NamedObjMultiMapTmpl_XRefItem<T_Obj, T_Id> (
        typename map_t::iterator mapPosition, 
        typename list_t::iterator listPosition)
    {
        m_mapPosition = mapPosition;
        m_listPosition = listPosition;
        m_pObject = NULL;
    }

    typename map_t::iterator m_mapPosition;
    typename list_t::iterator m_listPosition;
    T_Obj* m_pObject;
};

/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl
//
// Description: 
//     Basically this defines the NamedObjMultiMapTmpl.  The NamedObjMapTmpl
//     is used to store LX::Object derived types that must implement the 
//     ICollectable and the Identifiable interface.  The collection is 
//     fundamentally a list/map hybrid since the items are not required
//     to have a name.  If the item does have a name it can be referenced
//     by that name.  NAMES ASSOCIATED TO OBJECTS DO NOT HAVE TO UNIQUE.
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
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMultiMapTmpl : public ObjCollectionTmpl<T_Obj, T_Base>
{
public:	

	virtual ~NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> ();

    virtual void toXml (
        IStream& stream);

	virtual void addItem (
		T_Obj* pObj);

   	virtual T_Iterator* addItemReturnIterator (
		T_Obj* pObj);

	virtual T_Iterator* find(
		const T_Id& id); 

    virtual bool contains (
        const T_Id& id) const;

    virtual int count () const;

    virtual T_Iterator* iterator();

   	virtual T_ConstIterator* find(
		const T_Id& id) const; 

    virtual T_Obj* findFirstMatch(
		const T_Id& id); 

    virtual const T_Obj* findFirstMatch(
		const T_Id& id) const; 

    virtual bool requiresUniqueId () const;

    virtual T_ConstIterator* iterator() const;

    virtual Object::ValidityEnum validate (IValidationEventSink* pEventSink) const;


protected:
    virtual const T_Id* getObjectId (
        Object* pObject);

    // Make friends with the Iterator Implementation since 
    // I can't put it in as an inner class.
    friend class NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
//    friend class NamedObjMultiMapTmpl_XRefItem;

    typedef NamedObjMultiMapTmpl_XRefItem<T_Obj, T_Id> XRefItem;

    // Define the hashmap type.
    typedef typename XRefItem::list_t list_t;
    typedef typename XRefItem::map_t hashmap_t;


    typename list_t::iterator addItemHelper (
	    T_Obj* pObject);


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
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMultiMapTmpl_CoreIteratorImpl : public T_Iterator
{
public:
    NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
        NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap);

    virtual void release ();

    virtual T_Obj* remove (
       typename  NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem *pXref);

    virtual bool objectRenamed ( 
      typename   NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem *pXref);

protected:
    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& m_objectMap;
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
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMultiMapTmpl_ListIteratorImpl : public NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>, 
                                              public NamedCollectionLocation
{
public:
    NamedObjMultiMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
    NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
    typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator stlIterator);

    virtual bool next ();

    virtual T_Obj* current ();

    virtual bool atEnd ();

    virtual T_Obj* remove ();

    virtual bool objectRenamed ();

    virtual bool objectCheckNewName ();

    virtual void objectRemoved ();

    virtual void release ();


private:
  typename   NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator m_stlIterator;
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
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMultiMapTmpl_MapIteratorImpl : public NamedObjMultiMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>
{
public:
    NamedObjMultiMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
        NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
       typename  NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::iterator stlIterator);

    virtual bool next ();

    virtual T_Obj* current ();

    virtual T_Obj* remove ();

    virtual bool atEnd ();

    virtual bool objectRenamed ();



private:
  typename   NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::iterator m_stlIterator;
};


/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl_ListConstIteratorImpl
//
// Description: 
//      Another iterator implementation except this implements the ConstIterator.
//      This iterator is returned by the const iterator method.
//
// Template Parameters
//     See Above.... NamedObjMultiMapTmpl
//
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMultiMapTmpl_ListConstIteratorImpl : public T_ConstIterator
{
public:
    NamedObjMultiMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
        const NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
       typename  NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::const_iterator stlIterator);

    virtual bool next ();

    virtual const T_Obj* current ();

    virtual bool atEnd ();

    virtual void release ();


private:
    const NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& m_objectMap;
    typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::const_iterator m_stlIterator;
};


/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMultiMapTmpl_MapConstIteratorImpl
//
// Description: 
//      Another iterator class for iterating through the results of the find.
//      The difference is this is a read only (ie const) iterator.
//
// Template Parameters
//     See Above.... NamedObjMultiMapTmpl
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMultiMapTmpl_MapConstIteratorImpl : public T_ConstIterator
{
public:
    NamedObjMultiMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator> (
        const NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
       typename  NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::const_iterator stlIterator);

    virtual bool next ();

    virtual const T_Obj* current ();

    virtual bool atEnd ();

    virtual void release ();

private:
    const NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& m_objectMap;
    typename NamedObjMultiMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::hashmap_t::const_iterator m_stlIterator;
};
}; // End Namespace.

#pragma warning( pop )

 
#endif
  