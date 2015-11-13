#if !defined(__CGPOINTSCOLLECTION_H)
#define __CGPOINTSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CgPoints.h"
namespace LX
{

// Iterator : CgPointsCollection
class CgPointsCollectionIterator : public Iterator<CgPoints*>
{
};

class CgPointsCollectionConstIterator : public ConstIterator<CgPoints>
{
};

// Collection : CgPointsCollection
class CgPointsCollection : public Map<CgPoints, String, CgPointsCollectionIterator, CgPointsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
