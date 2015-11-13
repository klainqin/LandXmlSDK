#if !defined(__SURFVOLUMECOLLECTION_H)
#define __SURFVOLUMECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "SurfVolume.h"
namespace LX
{

// Iterator : SurfVolumeCollection
class SurfVolumeCollectionIterator : public Iterator<SurfVolume*>
{
};

class SurfVolumeCollectionConstIterator : public ConstIterator<SurfVolume>
{
};

// Collection : SurfVolumeCollection
class SurfVolumeCollection : public Map<SurfVolume, String, SurfVolumeCollectionIterator, SurfVolumeCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
