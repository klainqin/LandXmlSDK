#if !defined(__TURNLANECOLLECTION_H)
#define __TURNLANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TurnLane.h"
namespace LX
{

// Iterator : TurnLaneCollection
class TurnLaneCollectionIterator : public Iterator<TurnLane*>
{
};

class TurnLaneCollectionConstIterator : public ConstIterator<TurnLane>
{
};

// Collection : TurnLaneCollection
class TurnLaneCollection : public ObjList<TurnLane, TurnLaneCollectionIterator, TurnLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
