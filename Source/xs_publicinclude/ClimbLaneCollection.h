#if !defined(__CLIMBLANECOLLECTION_H)
#define __CLIMBLANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ClimbLane.h"
namespace LX
{

// Iterator : ClimbLaneCollection
class ClimbLaneCollectionIterator : public Iterator<ClimbLane*>
{
};

class ClimbLaneCollectionConstIterator : public ConstIterator<ClimbLane>
{
};

// Collection : ClimbLaneCollection
class ClimbLaneCollection : public ObjList<ClimbLane, ClimbLaneCollectionIterator, ClimbLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
