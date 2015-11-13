#if !defined(__PASSINGLANECOLLECTION_H)
#define __PASSINGLANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PassingLane.h"
namespace LX
{

// Iterator : PassingLaneCollection
class PassingLaneCollectionIterator : public Iterator<PassingLane*>
{
};

class PassingLaneCollectionConstIterator : public ConstIterator<PassingLane>
{
};

// Collection : PassingLaneCollection
class PassingLaneCollection : public ObjList<PassingLane, PassingLaneCollectionIterator, PassingLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
