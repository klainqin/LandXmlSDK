#if !defined(__CORNERCOLLECTION_H)
#define __CORNERCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Corner.h"
namespace LX
{

// Iterator : CornerCollection
class CornerCollectionIterator : public Iterator<Corner*>
{
};

class CornerCollectionConstIterator : public ConstIterator<Corner>
{
};

// Collection : CornerCollection
class CornerCollection : public ObjList<Corner, CornerCollectionIterator, CornerCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
