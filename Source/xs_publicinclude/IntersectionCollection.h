#if !defined(__INTERSECTIONCOLLECTION_H)
#define __INTERSECTIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Intersection.h"
namespace LX
{

// Iterator : IntersectionCollection
class IntersectionCollectionIterator : public Iterator<Intersection*>
{
};

class IntersectionCollectionConstIterator : public ConstIterator<Intersection>
{
};

// Collection : IntersectionCollection
class IntersectionCollection : public ObjList<Intersection, IntersectionCollectionIterator, IntersectionCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
