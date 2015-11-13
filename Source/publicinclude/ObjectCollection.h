#if !defined(__LX_OBJECTCOLLECTION_H)
#define __LX_OBJECTCOLLECTION_H

#include "LXDefs.h"
#include "Object.h"
#include "Map.h"
#include "Iterator.h"

#pragma warning (push)
#pragma warning (disable: 4786)

/////////////////////////////////////////////////////////////////////////////
//
// File: ObjectCollection.h
//
// Description: 
//		Contains the definition of the for the value types
//
// $History: ObjectCollection.h $
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{
// Iterator : ObjectCollectionIterator
class ObjectCollectionIterator : public Iterator<Object*>
{
};

// Iterator : ObjectCollectionIterator
class ObjectCollectionConstIterator : public ConstIterator<Object>
{
};


// Collection : ObjectCollection
class ObjectCollection : public Map<Object, Object::IdType, ObjectCollectionIterator, ObjectCollectionConstIterator>
{
};

#pragma warning(pop)

}; // End namespace LX

#endif