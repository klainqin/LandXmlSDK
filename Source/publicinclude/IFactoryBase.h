#if !defined(__LX_IFACTORYBASE_H)
#define __LX_IFACTORYBASE_H

#include "LXDefs.h"
#include "IStream.h"
#include "LXString.h"
#include "ValueCollectionObjects.h"

/**
 * \file IFactoryBase.h
 *
 * Contains the definition of the IFactoryBase class.
 */

namespace LX
{
/**
 * IFactoryBase is the base interface for the IFactory interface which
 * gets returned by the Document object.
 *
 * This interface implements the creates for the core value collection type
 * objects.  Value collection objects represend an indexed array of values and
 * are used to pass array like data to some objects.  They are created useing
 * this interface.
 *
 * Again these objects can only be used by the document whos IFactory created them.
 */
class IFactoryBase
{
public:
    /**
     * Creates an integer collection object and returns it.
     *
     * @return A new Integer collection object.
     */
    virtual IntegerCollection* createIntegerCollection () = 0;

    /**
     * Creates an UInteger collection object and returns it.
     *
     * @return A new UInteger collection object.
     */
    virtual UIntegerCollection* createUIntegerCollection () = 0;

    /**
     * Creates an String collection object and returns it.
     *
     * @return A new String collection object.
     */
    virtual StringCollection* createStringCollection () = 0;


    /**
     * Creates an double collection object and returns it.
     *
     * @return A new Double collection object.
     */
    virtual DoubleCollection* createDoubleCollection () = 0;
};
};

#endif

