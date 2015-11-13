#if !defined(__CGPOINTCOLLECTION_H)
#define __CGPOINTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CgPoint.h"
namespace LX
{

// Iterator : CgPointCollection
class CgPointCollectionIterator : public Iterator<CgPoint*>
{
};

class CgPointCollectionConstIterator : public ConstIterator<CgPoint>
{
};

// Collection : CgPointCollection
class CgPointCollection : public Map<CgPoint, String, CgPointCollectionIterator, CgPointCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
