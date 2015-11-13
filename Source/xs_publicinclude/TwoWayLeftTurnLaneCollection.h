#if !defined(__TWOWAYLEFTTURNLANECOLLECTION_H)
#define __TWOWAYLEFTTURNLANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TwoWayLeftTurnLane.h"
namespace LX
{

// Iterator : TwoWayLeftTurnLaneCollection
class TwoWayLeftTurnLaneCollectionIterator : public Iterator<TwoWayLeftTurnLane*>
{
};

class TwoWayLeftTurnLaneCollectionConstIterator : public ConstIterator<TwoWayLeftTurnLane>
{
};

// Collection : TwoWayLeftTurnLaneCollection
class TwoWayLeftTurnLaneCollection : public ObjList<TwoWayLeftTurnLane, TwoWayLeftTurnLaneCollectionIterator, TwoWayLeftTurnLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
