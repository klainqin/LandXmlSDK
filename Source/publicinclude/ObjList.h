#if !defined(__LX_OBJLIST_H)
#define __LX_OBJLIST_H
/**
 * \file ObjList.h
 *
 * Contains the template interface for the ObjList.
 */

#include "LXDefs.h"
#include "Object.h"
#include "Iterator.h"
#include "ConstIterator.h"

namespace LX
{

/**
 * Basically this defines the ObjList interface.  The ObjList
 * is used to store LX::Object derived types in a simple list. 
 *
 * All the items in the collection can be access via 
 * a list iterator.  This iterator will return all items in the collection
 * (whether named or not) in the order they were added.  This order is 
 * is maintained when parsing in or seriallizing out the XML representation
 * of this list.
 *
 * Objects put into this collection are allocated externally and then added as 
 * pointers (This a collection of pointers).  ALL OBJECTS PUT IN THE LIST
 * MUST BE ALLOCATED ON THE HEAP.  Object put in the collection are owned
 * by the collection (ie, will be deallocated by the collection when the 
 * collection is deleted).  Objects removed from the collection are no
 * longer owned by the collection and must be deallocated externally.
 *  NO ARRAY ALLOCATED OBJECTS (ie new []).
 * 
 * Typically this template is not used direcly by the user.  The user
 * should use the collection interface corresponding to the 
 * object type they are dealing with (ex AlignmentCollectoin, 
 * CgPointCollection).  This collections are typically derived directly
 * from this interface.
 *
 * Template Parameters:
 *
 * T_Obj : The object being stored. Must be derived from Object.
 *
 */
template<class T_Obj, class T_Iterator, class T_ConstIterator>
class ObjList : public Object
{
public:	
    /**
     * Adds an item to the end of the list.  Remember! Once an item is
     * added to the list it should not be released.  The list will manage
     * the lifetime of all contained objects.
     *
     * @param p_Obj Pointer to the added object.
     */
	virtual void addItem (
		T_Obj* pObj) = 0;

    /**
     * Adds an item to the end of the list and returns an iterator which
     * has been initialized to start at this item.
     *
     * @param p_Obj Pointer to the added object.
     */
  	virtual T_Iterator* addItemReturnIterator (
		T_Obj* pObj) = 0;

    /**
     * Returns the number of objects in the list.
     *
     * @return p_Obj The number of objects in the list.
     */
    virtual int count () const = 0;

    /**
     * Returns a "mutable" iterator.  
     *
     * This iterator starts at the first item in the list.  When derefenced with
     * the "current()" method (see Iterator<T>) this iterator will return a pointer
     * to the contained object which can be modified.
     *
     * $return A mutable iterator.
     */
    virtual T_Iterator* iterator() = 0;

    /**
     * Returns a "nonmutable" iterator.  
     *
     * This iterator starts at the first item in the list.  When derefenced with
     * the "current()" method (see Iterator<T>) this iterator will return a const pointer
     * to the contained object which CANNOT be modified.
     *
     * $return A mutable iterator.
     */
    virtual T_ConstIterator* iterator() const = 0;
};

}; // End Namespace.

 
#endif