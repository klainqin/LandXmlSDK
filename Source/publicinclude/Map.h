#if !defined(__LX_MAP_H)
#define __LX_MAP_H
/**
 * \file Map.h
 *
 * Contains the template interface for the Map.
 */

#include "LXDefs.h"
#include "Object.h"
#include "ObjList.h"
#include "Iterator.h"
#include "ConstIterator.h"

namespace LX
{

/**
 * Basically this defines the Map interface.  The Map
 * is used to store LX::Object derived types that must implement the 
 * ICollectable and the Identifiable interface.  The collection is 
 * fundamentally a list/map hybrid since the items are not required
 * to have a name.  If the item does have a name it can be referenced
 * by that name.  NAMES ASSOCIATED TO OBJECTS DO NOT HAVE TO UNIQUE.
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
 * NO ARRAY ALLOCATED OBJECTS (ie new []).
 *
 * Template Parameters
 *
 *  T_Obj : 
 *  The object being stored. Must be derived from ObjectTmpl<T_Base>
 *  and must implement the IIdentifiable<T_Id> interface.
 *     
 *  T_Id : 
 *  The Id type (String, int, etc),  Must implment default constructor
 *  copy, equals, less than, etc...
 *
 *  T_Iterator : 
 *  The interface returned as the iterator.  Must be derived from Iterator<T>.
 *
 *  T_ConstIterator :
 *  The interface returned as the const interator.  Must be dervied from ConstIterator<T>
 *
 */
template<class T_Obj, class T_Id, class T_Iterator, class T_ConstIterator>
class Map : public ObjList<T_Obj, T_Iterator, T_ConstIterator>
{
public:	
    /**
     * Finds an item or set of objects whose identifying member matches the passed
     * id.  The iterator returned iterates through the set of matching objects.
     *
     * @param id The id to compare against.
     *
     * @return Retursn an iterator to the set of matches.
     */
    virtual T_Iterator* find(
		const T_Id& id) = 0; 

    /**
     * Finds an item or set of objects whose identifying member matches the passed
     * id.  The iterator returned, iterates through the set of matching objects.
     *
     * @param id The id to compare against.
     *
     * @return Returns a const iterator to the set of matches.
     */
    virtual T_ConstIterator* find(
		const T_Id& id) const = 0; 

    /**
     * Returns a pointer to the first object found in the set of matches against
     * the passed in id.
     *
     * @param id The id to compare against.
     *
     * @return Returns a const iterator to the set of matches.
     */
    virtual T_Obj* findFirstMatch(
		const T_Id& id) = 0; 

    /**
     * Returns a pointer to the first object found in the set of matches against
     * the passed in id.
     *
     * @param id The id to compare against.
     *
     * @return Returns a const pointer to the set of matches.
     */
    virtual const T_Obj* findFirstMatch(
		const T_Id& id) const = 0; 

    /**
     * Determines whether an object matching the passed in id is in the collection.
     *
     * @return true if a match is found.
     */
    virtual bool contains (
        const T_Id& id) const = 0;

    /**
     * This object requires all the containing objects to have a unique id. 
     *
     * @return true if a unique id is required.
     */
    virtual bool requiresUniqueId () const = 0;

};

}; // End Namespace.


#endif