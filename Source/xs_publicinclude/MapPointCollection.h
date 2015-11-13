#if !defined(__MAPPOINTCOLLECTION_H)
#define __MAPPOINTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "MapPoint.h"
namespace LX
{

// Iterator : MapPointCollection
class MapPointCollectionIterator : public Iterator<MapPoint*>
{
};

class MapPointCollectionConstIterator : public ConstIterator<MapPoint>
{
};

// Collection : MapPointCollection
class MapPointCollection : public Map<MapPoint, String, MapPointCollectionIterator, MapPointCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
