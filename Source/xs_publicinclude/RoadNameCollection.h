#if !defined(__ROADNAMECOLLECTION_H)
#define __ROADNAMECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "RoadName.h"
namespace LX
{

// Iterator : RoadNameCollection
class RoadNameCollectionIterator : public Iterator<RoadName*>
{
};

class RoadNameCollectionConstIterator : public ConstIterator<RoadName>
{
};

// Collection : RoadNameCollection
class RoadNameCollection : public ObjList<RoadName, RoadNameCollectionIterator, RoadNameCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
