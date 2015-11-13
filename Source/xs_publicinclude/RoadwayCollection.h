#if !defined(__ROADWAYCOLLECTION_H)
#define __ROADWAYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Roadway.h"
namespace LX
{

// Iterator : RoadwayCollection
class RoadwayCollectionIterator : public Iterator<Roadway*>
{
};

class RoadwayCollectionConstIterator : public ConstIterator<Roadway>
{
};

// Collection : RoadwayCollection
class RoadwayCollection : public Map<Roadway, String, RoadwayCollectionIterator, RoadwayCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
