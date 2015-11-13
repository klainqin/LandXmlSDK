#if !defined(__THRULANECOLLECTION_H)
#define __THRULANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ThruLane.h"
namespace LX
{

// Iterator : ThruLaneCollection
class ThruLaneCollectionIterator : public Iterator<ThruLane*>
{
};

class ThruLaneCollectionConstIterator : public ConstIterator<ThruLane>
{
};

// Collection : ThruLaneCollection
class ThruLaneCollection : public ObjList<ThruLane, ThruLaneCollectionIterator, ThruLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
