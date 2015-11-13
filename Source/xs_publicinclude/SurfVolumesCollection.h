#if !defined(__SURFVOLUMESCOLLECTION_H)
#define __SURFVOLUMESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "SurfVolumes.h"
namespace LX
{

// Iterator : SurfVolumesCollection
class SurfVolumesCollectionIterator : public Iterator<SurfVolumes*>
{
};

class SurfVolumesCollectionConstIterator : public ConstIterator<SurfVolumes>
{
};

// Collection : SurfVolumesCollection
class SurfVolumesCollection : public Map<SurfVolumes, String, SurfVolumesCollectionIterator, SurfVolumesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
