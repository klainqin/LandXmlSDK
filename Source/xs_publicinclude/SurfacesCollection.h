#if !defined(__SURFACESCOLLECTION_H)
#define __SURFACESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Surfaces.h"
namespace LX
{

// Iterator : SurfacesCollection
class SurfacesCollectionIterator : public Iterator<Surfaces*>
{
};

class SurfacesCollectionConstIterator : public ConstIterator<Surfaces>
{
};

// Collection : SurfacesCollection
class SurfacesCollection : public Map<Surfaces, String, SurfacesCollectionIterator, SurfacesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
