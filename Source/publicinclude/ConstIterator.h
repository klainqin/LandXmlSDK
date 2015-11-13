#if !defined(__LX_CONSTITERATOR_H)
#define __LX_CONSTITERATOR_H

/**
 * \file ConstIterator.h
 *
 * Contains the definition of the ConstInterator template class.
 */

#include "LXDefs.h"

namespace LX
{
/**
 * The ConstIterator template class is a read only iterator used by all the SDK collections.
 *
 * The Iterator allows the caller to iterate through a sequence of objects in a collection.
 * The objects in the collection are returned by value, so values in the collection cannot
 * be changed through the iterator.  Pointers are returned as const pointers so that the 
 * underlying value cannot be changed.
 *
 * The initial iterator returned by any object will point to the first item in the collection.
 */
template <class T>
class ConstIterator
{
public:
    /**
     * This moves the iterator to the next element in the collection.  True is returned if 
     * there is a next element, in other words if true is returned, then the current ()
     * method will return a value (otherwise it will throw an exception).
     *
     * This method will throw an Exception if called past the end.
     *
     * @return True if the iterator points to a valid item.  False if the iterator is at 
     *      the end of the collection.
     */
    virtual bool next () = 0;

    /**
     * This method returns the current item in the collection.  The iterator is not moved.  
     * This method will throw an exception if call at end.
     *
     * @return The collection item currently referred to by the iterator.
     */
    virtual const T* current () = 0;

    /**
     * Indicates the iterator is at the end of an collection.  When at the end calls
     * to the current() and next() will result in thrown Exceptions.
     *
     * @return True if iterator points to the end of the collection.
     */
    virtual bool atEnd () = 0;

    /**
     * Destroys the iterator.
     */
    virtual void release () = 0;
};
}; // End Namespace.

 
#endif
  