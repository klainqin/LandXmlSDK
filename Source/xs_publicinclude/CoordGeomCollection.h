#if !defined(__COORDGEOMCOLLECTION_H)
#define __COORDGEOMCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CoordGeom.h"
namespace LX
{

// Iterator : CoordGeomCollection
class CoordGeomCollectionIterator : public Iterator<CoordGeom*>
{
};

class CoordGeomCollectionConstIterator : public ConstIterator<CoordGeom>
{
};

// Collection : CoordGeomCollection
class CoordGeomCollection : public Map<CoordGeom, String, CoordGeomCollectionIterator, CoordGeomCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
