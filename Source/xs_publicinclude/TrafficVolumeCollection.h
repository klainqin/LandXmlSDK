#if !defined(__TRAFFICVOLUMECOLLECTION_H)
#define __TRAFFICVOLUMECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TrafficVolume.h"
namespace LX
{

// Iterator : TrafficVolumeCollection
class TrafficVolumeCollectionIterator : public Iterator<TrafficVolume*>
{
};

class TrafficVolumeCollectionConstIterator : public ConstIterator<TrafficVolume>
{
};

// Collection : TrafficVolumeCollection
class TrafficVolumeCollection : public ObjList<TrafficVolume, TrafficVolumeCollectionIterator, TrafficVolumeCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
