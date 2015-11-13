#if !defined(__LX_VALUEOBJECT_H)
#define __LX_VALUEOBJECT_H

#include "LXDefs.h"
#include "LXString.h"
#include "Object.h"

/**
 * \file ValueObject.h
 *
 * Contains the definition of the ValueObject object.
 */
#pragma warning (push)
#pragma warning (disable : 4710) // ? not inlined/

namespace LX
{

/**
 * The ValueObject object is the base class for all the simple object types 
 * (StringObject, DoubleObject, etc).
 *
 * This base class provides the common interface that available to all the 
 * simple objects.  Mainly whether the value is set of not (has a null or
 * nothing value).
 */
class ValueObject : public Object
{
public:
    /**
     * Returns true if the object has no value, or in other words is set to nothing.
     *
     * @return true if the object does not have a value or is set to nothing.
     */
	virtual bool isNothing () const = 0;

    /**
     * Sets the object value to "no value" or nothing.
     */
	virtual void setToNothing () = 0;
};

#pragma warning (pop)

}; // Namespace LX

#endif // __LX_VALUEOBJECT_H