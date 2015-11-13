#if !defined(__SPEEDSTATIONCOLLECTION_H)
#define __SPEEDSTATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "SpeedStation.h"
namespace LX
{

// Iterator : SpeedStationCollection
class SpeedStationCollectionIterator : public Iterator<SpeedStation*>
{
};

class SpeedStationCollectionConstIterator : public ConstIterator<SpeedStation>
{
};

// Collection : SpeedStationCollection
class SpeedStationCollection : public ObjList<SpeedStation, SpeedStationCollectionIterator, SpeedStationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
