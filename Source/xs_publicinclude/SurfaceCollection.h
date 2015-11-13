#if !defined(__SURFACECOLLECTION_H)
#define __SURFACECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Surface.h"
namespace LX
{

// Iterator : SurfaceCollection
class SurfaceCollectionIterator : public Iterator<Surface*>
{
};

class SurfaceCollectionConstIterator : public ConstIterator<Surface>
{
};

// Collection : SurfaceCollection
class SurfaceCollection : public Map<Surface, String, SurfaceCollectionIterator, SurfaceCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
