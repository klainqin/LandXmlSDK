#if !defined(__STRUCTCOLLECTION_H)
#define __STRUCTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Struct.h"
namespace LX
{

// Iterator : StructCollection
class StructCollectionIterator : public Iterator<Struct*>
{
};

class StructCollectionConstIterator : public ConstIterator<Struct>
{
};

// Collection : StructCollection
class StructCollection : public Map<Struct, String, StructCollectionIterator, StructCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
