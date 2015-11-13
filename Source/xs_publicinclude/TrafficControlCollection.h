#if !defined(__TRAFFICCONTROLCOLLECTION_H)
#define __TRAFFICCONTROLCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TrafficControl.h"
namespace LX
{

// Iterator : TrafficControlCollection
class TrafficControlCollectionIterator : public Iterator<TrafficControl*>
{
};

class TrafficControlCollectionConstIterator : public ConstIterator<TrafficControl>
{
};

// Collection : TrafficControlCollection
class TrafficControlCollection : public ObjList<TrafficControl, TrafficControlCollectionIterator, TrafficControlCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
