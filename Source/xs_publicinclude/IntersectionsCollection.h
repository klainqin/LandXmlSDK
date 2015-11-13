#if !defined(__INTERSECTIONSCOLLECTION_H)
#define __INTERSECTIONSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Intersections.h"
namespace LX
{

// Iterator : IntersectionsCollection
class IntersectionsCollectionIterator : public Iterator<Intersections*>
{
};

class IntersectionsCollectionConstIterator : public ConstIterator<Intersections>
{
};

// Collection : IntersectionsCollection
class IntersectionsCollection : public ObjList<Intersections, IntersectionsCollectionIterator, IntersectionsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
