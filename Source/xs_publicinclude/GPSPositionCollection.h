#if !defined(__GPSPOSITIONCOLLECTION_H)
#define __GPSPOSITIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "GPSPosition.h"
namespace LX
{

// Iterator : GPSPositionCollection
class GPSPositionCollectionIterator : public Iterator<GPSPosition*>
{
};

class GPSPositionCollectionConstIterator : public ConstIterator<GPSPosition>
{
};

// Collection : GPSPositionCollection
class GPSPositionCollection : public ObjList<GPSPosition, GPSPositionCollectionIterator, GPSPositionCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
