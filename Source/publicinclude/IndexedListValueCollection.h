#if !defined(__LX_INDEXEDLISTVALUECOLLECTION_H)
#define __LX_INDEXEDLISTVALUECOLLECTION_H
/**
 * \file IndexedListValueCollection.h
 *
 * Contains the definition of the IndexedListValueCollection.
 */

#include "LXDefs.h"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning(push, 1)
#include <vector>
#pragma warning(pop)

#include "ValueObject.h"
#include "IStream.h"
#include "IParserEventSink.h"


namespace LX
{
#pragma warning(push)
#pragma warning(disable : 4251 4786 4710 4097) 

/**
 * The IndexedListValueCollection object is indexed, ordered collection of values (basically an 
 * array).
 *
 * The IndexedListValueCollection is used to pass arrays of values in SDK.  This collection is mostly
 * used to pass coordinates for point objects.  The items in the collection are passed by value.  The
 * collection is accessed via index (as I said an array).  The collection is resized by the "reserve" method.
 */
template <class T>
class IndexedListValueCollection : public ValueObject
{
public:
	typedef IndexedListValueCollection<T>* Type;

    /**
     * This method is used to add items to the end of the array.
     *
     * This method will add capacity to array if needed.
     *
     * @param item The item to add to the array.
     */
	virtual void addItem (
		T item) = 0;

    /**
     * Adds item parsed from a string.
     *
     * Basically this method takes a string and parses a list of values from it.  The values
     * must be space delimited.  The value type objects (DoubleObject, IntegerObject, etc) are used
     * to parse the value.
     *
     * @param strValue The string value to parse.
     * @param nValueLen The number of characters to parse from the string.
     */
	virtual void addParsedItems (
		const wchar_t* strValue, 
		int nValueLen) = 0;

    /**
     * Returns a reference to itself.
     *
     * This seemingly pointless method is used by derived objects.
     *
     * @return A reference to "this" object.
     */
	virtual IndexedListValueCollection<T>& value() = 0;

    /**
     * Returns a const reference to itself.
     *
     * This seemingly pointless method is used by derived objects.
     *
     * @return A const reference to "this" object.
     */

#if _MSC_VER > 1200
    virtual const IndexedListValueCollection<T>& value() const = 0;
#endif
   
    /**
     * Streams the list of values as an string to the passed in stream object.
     *
     * Streams the items in the array as a string in which the values are space 
     * delimited.  The value type object are used to write the string representation
     * of the values.
     *
     * @param stream The stream to send the string out.
     */
    virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns the string representation of the list.
     *
     * Again the list is space delimited.
     *
     * @return A reference to "this" object.
     */
  	virtual String toString () const = 0;

    /**
     * Returns the number the of items in the collection.
     *
     * @return Returns the number of items in the collection.
     */
	virtual int size () const = 0;

    /**
     * Reserves space in the array.
     *
     * This actually allocates space for the array.  THIS NEEDS TO CALLED 
     * BEFORE ANY ACCESSES CAN TAKE PLACE.
     */
    virtual void reserve (int nSize) = 0;


    /**
     * Clear all items from the array.
     *
     */
    virtual void  clearItems () = 0;


    /**
     * Returns a reference to the item an the passed index.
     *
     * ARRAY IS NOT AUTOMATICALLY GROWN TO THE INDEX.  
     * RESERVE MUST BE CALLED FIRST.
     *
     * @param i The index.
     */
	virtual const T& at (
		const int i) const = 0;

    /**
     * Returns a reference to the item an the passed index.
     *
     * @param i The index.
     */
	virtual T& at (
		const int i) = 0;

    /**
     * Returns a reference to the item an the passed index.
     *
     * @param i The index.
     */
	virtual const T& operator[] (
		const int i) const = 0;

    /**
     * Returns a reference to the item an the passed index.
     *
     * @param i The index.
     */
	virtual T& operator[] (
		const int i) = 0;
};

#pragma warning (pop)

}; // End Namespace.


#endif
  
