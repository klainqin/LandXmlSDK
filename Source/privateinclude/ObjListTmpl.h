#if !defined(__LX_OBJLISTTMPL_H)
#define __LX_OBJLISTTMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: List.h
//
// Description: 
//		Contains the template interface for the List.
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "ObjectTmpl.h"
#include "Iterator.h"
#include "ConstIterator.h"
#include "ObjCollectionTmpl.h"
#include "CollectionLocation.h"


#include <list>

namespace LX
{
template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator> class ObjListTmpl_IteratorImpl;
template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator> class ObjListTmpl_ConstIteratorImpl;

/////////////////////////////////////////////////////////////////////////////
//
// Class: ObjListTmpl
//
// Description: 
//     Basically this defines the ObjList interface.  The ObjList
//     is used to store LX::Object derived types in a simple list. 
//
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
//          The object being stored.
//          Must be derived from Object.
//      T_Iterator : 
//          The type of the iterator interface to use for iterating through
//          the items in the collection.  This interface must be derived
//          from Interface<T_Obj*>
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
class ObjListTmpl : public ObjCollectionTmpl<T_Obj, T_Base>
{
public:	
    virtual ~ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator> ();

    virtual void toXml (
        IStream& stream);

	virtual void addItem (
		T_Obj* pObj);

   	virtual T_Iterator* addItemReturnIterator (
		T_Obj* pObj);

    virtual int count () const;

    virtual T_Iterator* iterator();

    virtual T_ConstIterator* iterator() const;

    virtual Object::ValidityEnum validate (IValidationEventSink* pEventSink) const;


private:
    typedef typename std::list<T_Obj*> list_t;
    list_t m_list;

    typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::iterator addItemHelper (
	    T_Obj* pObject);


    // Make frieds with the iterator class
   friend class ObjListTmpl_IteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>;
   friend class ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>;
};


/////////////////////////////////////////////////////////////////////////////
//
// Class: ObjList_IteratorImpl
//
// Description: 
//     Basically an implmentation of Iterator<T_Obj*> and CollectionLocaltion
//     interfaces.  Provides basic iterator capabilities over the 
//     ObjList collection.
//
//     Should be a inner class in ObjList but VC++ doesn't allow this
//     so I'm doing the next best thing.
//
// Template Parameters
//      See Above.
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>

class ObjListTmpl_IteratorImpl : public T_Iterator, public CollectionLocation
{
public:
    
     typedef ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator> ObjListTmpl_t;
    
     ObjListTmpl_IteratorImpl< T_Obj, T_Base, T_Iterator, T_ConstIterator> (
        ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>& objectList,
        typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::iterator stlIterator);

    virtual bool next ();

    virtual T_Obj* current ();

    virtual T_Obj* remove ();

    virtual bool atEnd ();

    virtual void release ();

private:
    ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>& m_objectList;
    typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::iterator m_stlIterator;
};

/////////////////////////////////////////////////////////////////////////////
//
// Class: ObjListTmpl_ConstIteratorImpl
//
// Description: 
//     Basically an implmentation of ConstIterator<T_Obj*>
//     interfaces.  Provides basic iterator capabilities over the 
//     ObjList collection.  All method returns a read only const pointer.
//
//     Should be a inner class in ObjList but VC++ doesn't allow this
//     so I'm doing the next best thing.
//
// Template Parameters
//      See above.
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base, class T_Iterator, class T_ConstIterator>
class ObjListTmpl_ConstIteratorImpl : public T_ConstIterator
{
public:
    ObjListTmpl_ConstIteratorImpl<T_Obj, T_Base, T_Iterator, T_ConstIterator> (
        const ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>& objectList,
        typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::const_iterator stlIterator);

    virtual bool next ();

    virtual const T_Obj* current ();

    virtual bool atEnd ();

    virtual void release ();

private:
    const ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>& m_objectList;
    typename ObjListTmpl<T_Obj, T_Base, T_Iterator, T_ConstIterator>::list_t::const_iterator m_stlIterator;
};

}; // End Namespace.

#endif
