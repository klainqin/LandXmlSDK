#if !defined(__BOUNDARYCOLLECTION_H)
#define __BOUNDARYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Boundary.h"
namespace LX
{

// Iterator : BoundaryCollection
class BoundaryCollectionIterator : public Iterator<Boundary*>
{
};

class BoundaryCollectionConstIterator : public ConstIterator<Boundary>
{
};

// Collection : BoundaryCollection
class BoundaryCollection : public Map<Boundary, String, BoundaryCollectionIterator, BoundaryCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
