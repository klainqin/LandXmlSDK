#if !defined(__TURNSPEEDCOLLECTION_H)
#define __TURNSPEEDCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TurnSpeed.h"
namespace LX
{

// Iterator : TurnSpeedCollection
class TurnSpeedCollectionIterator : public Iterator<TurnSpeed*>
{
};

class TurnSpeedCollectionConstIterator : public ConstIterator<TurnSpeed>
{
};

// Collection : TurnSpeedCollection
class TurnSpeedCollection : public ObjList<TurnSpeed, TurnSpeedCollectionIterator, TurnSpeedCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
