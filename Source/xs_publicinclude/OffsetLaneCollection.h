#if !defined(__OFFSETLANECOLLECTION_H)
#define __OFFSETLANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "OffsetLane.h"
namespace LX
{

// Iterator : OffsetLaneCollection
class OffsetLaneCollectionIterator : public Iterator<OffsetLane*>
{
};

class OffsetLaneCollectionConstIterator : public ConstIterator<OffsetLane>
{
};

// Collection : OffsetLaneCollection
class OffsetLaneCollection : public ObjList<OffsetLane, OffsetLaneCollectionIterator, OffsetLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
