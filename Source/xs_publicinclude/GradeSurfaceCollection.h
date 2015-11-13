#if !defined(__GRADESURFACECOLLECTION_H)
#define __GRADESURFACECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "GradeSurface.h"
namespace LX
{

// Iterator : GradeSurfaceCollection
class GradeSurfaceCollectionIterator : public Iterator<GradeSurface*>
{
};

class GradeSurfaceCollectionConstIterator : public ConstIterator<GradeSurface>
{
};

// Collection : GradeSurfaceCollection
class GradeSurfaceCollection : public Map<GradeSurface, String, GradeSurfaceCollectionIterator, GradeSurfaceCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
