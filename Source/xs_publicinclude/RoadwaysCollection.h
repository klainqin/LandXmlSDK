#if !defined(__ROADWAYSCOLLECTION_H)
#define __ROADWAYSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Roadways.h"
namespace LX
{

// Iterator : RoadwaysCollection
class RoadwaysCollectionIterator : public Iterator<Roadways*>
{
};

class RoadwaysCollectionConstIterator : public ConstIterator<Roadways>
{
};

// Collection : RoadwaysCollection
class RoadwaysCollection : public Map<Roadways, String, RoadwaysCollectionIterator, RoadwaysCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
