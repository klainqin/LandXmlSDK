#if !defined(__ROADSIGNCOLLECTION_H)
#define __ROADSIGNCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "RoadSign.h"
namespace LX
{

// Iterator : RoadSignCollection
class RoadSignCollectionIterator : public Iterator<RoadSign*>
{
};

class RoadSignCollectionConstIterator : public ConstIterator<RoadSign>
{
};

// Collection : RoadSignCollection
class RoadSignCollection : public ObjList<RoadSign, RoadSignCollectionIterator, RoadSignCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
