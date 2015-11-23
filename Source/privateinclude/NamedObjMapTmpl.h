#if !defined(__LX_NAMEDOBJMAPTMPL_H)
#define __LX_NAMEDOBJMAPTMPL_H
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

template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMapTmpl_CoreIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMapTmpl_ListIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMapTmpl_MapIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMapTmpl_ListConstIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMapTmpl_MapConstIteratorImpl;
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator> class NamedObjMapTmpl;

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
class NamedObjMapTmpl_XRefItem
{
public:
    typedef std::list<NamedObjMapTmpl_XRefItem*> list_t;
    #if _MSC_VER > 1200
    #if _MSC_VER > 1300
    typedef stdext::hash_map<T_Id, NamedObjMapTmpl_XRefItem*, HashCompare> map_t;
    #else
    typedef std::hash_map<T_Id, NamedObjMapTmpl_XRefItem*, HashCompare> map_t;
    #endif
    #else
    typedef std::map<T_Id, NamedObjMapTmpl_XRefItem*, HashCompare> map_t;
    #endif

    NamedObjMapTmpl_XRefItem (
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
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMapTmpl : public ObjCollectionTmpl<T_Obj, T_Base>
{
public:	

	virtual ~NamedObjMapTmpl ();

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

    virtual void clear ();

    virtual T_Iterator* iterator();

  	virtual T_ConstIterator* find(
		const T_Id& id) const; 

    virtual T_Obj* findFirstMatch(
		const T_Id& id); 

    virtual const T_Obj* findFirstMatch(
		const T_Id& id) const; 

    virtual T_ConstIterator* iterator() const;

    virtual bool requiresUniqueId () const;

    virtual Object::ValidityEnum validate (IValidationEventSink* pEventSink) const;

protected:
    virtual const T_Id* getObjectId (
        Object* pObject);

    // Make friends with the Iterator Implementation since 
    // I can't put it in as an inner class.
    friend class NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMapTmpl_ListIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMapTmpl_MapIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMapTmpl_ListConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;
    friend class NamedObjMapTmpl_MapConstIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>;

    typedef NamedObjMapTmpl_XRefItem<T_Obj, T_Id> XRefItem;

    // Define the hashmap type.
    typedef typename XRefItem::list_t list_t;
    typedef typename XRefItem::map_t hashmap_t;

    typename list_t::iterator addItemHelper (
	    T_Obj* pObject);


    // Callbacks for derived classes.
    virtual void itemPreAdd (T_Obj* pObject);

    virtual void itemAdded (XRefItem* pItem);

    virtual void itemRemoved (T_Obj* pObject);


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
class NamedObjMapTmpl_CoreIteratorImpl : public T_Iterator
{
public:
    NamedObjMapTmpl_CoreIteratorImpl (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap);

    virtual void release ();

    virtual T_Obj* remove (
      typename   NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem *pXref);

    virtual bool objectRenamed ( 
       typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem *pXref);

    virtual bool objectCheckNewName ( 
       typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem *pXref);

    virtual void objectRemoved ( 
       typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem *pXref);


protected:
    NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& m_objectMap;
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
class NamedObjMapTmpl_ListIteratorImpl : public NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>,
                                         public NamedCollectionLocation
{
public:
    NamedObjMapTmpl_ListIteratorImpl (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
       typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator stlIterator);

    virtual bool next ();

    virtual T_Obj* current ();

    virtual bool atEnd ();

    virtual T_Obj* remove ();

    virtual bool objectRenamed ();

    virtual bool objectCheckNewName ();

    virtual void objectRemoved ();

    virtual void release ();

private:
   typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::iterator m_stlIterator;
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
class NamedObjMapTmpl_MapIteratorImpl : public NamedObjMapTmpl_CoreIteratorImpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>
{
public:
    NamedObjMapTmpl_MapIteratorImpl (
        NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
       typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef);

    virtual bool next ();

    virtual T_Obj* current ();

    virtual T_Obj* remove ();

    virtual bool atEnd ();

    virtual bool objectRenamed ();

private:
   typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* m_pXRef;
};

/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMapTmpl_ListConstIteratorImpl
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
class NamedObjMapTmpl_ListConstIteratorImpl : public T_ConstIterator
{
public:
    NamedObjMapTmpl_ListConstIteratorImpl (
        const NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
       typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::const_iterator stlIterator);

    virtual bool next ();

    virtual const T_Obj* current ();

    virtual bool atEnd ();

    virtual void release ();


private:
    const NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& m_objectMap;
   typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::list_t::const_iterator m_stlIterator;
};


/////////////////////////////////////////////////////////////////////////////
//
// Class: NamedObjMapTmpl_MapConstIteratorImpl
//
// Description: 
//      Another iterator class for iterating through the results of the find.
//      The difference is this is a read only (ie const) iterator.
//
// Template Parameters
//     See Above.... NamedObjMapTmpl
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class NamedObjMapTmpl_MapConstIteratorImpl : public T_ConstIterator
{
public:
    NamedObjMapTmpl_MapConstIteratorImpl (
        const NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& objectMap, 
        const typename  NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* pXRef);

    virtual bool next ();

    virtual const T_Obj* current ();

    virtual bool atEnd ();

    virtual void release ();

private:
    const NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>& m_objectMap;
    const typename NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>::XRefItem* m_pXRef;
};

}; // End Namespace.

#pragma warning( pop )

 
#endif
  