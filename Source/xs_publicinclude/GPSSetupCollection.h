#if !defined(__GPSSETUPCOLLECTION_H)
#define __GPSSETUPCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "GPSSetup.h"
namespace LX
{

// Iterator : GPSSetupCollection
class GPSSetupCollectionIterator : public Iterator<GPSSetup*>
{
};

class GPSSetupCollectionConstIterator : public ConstIterator<GPSSetup>
{
};

// Collection : GPSSetupCollection
class GPSSetupCollection : public ObjList<GPSSetup, GPSSetupCollectionIterator, GPSSetupCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
