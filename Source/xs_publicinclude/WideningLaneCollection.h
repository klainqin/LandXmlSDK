#if !defined(__WIDENINGLANECOLLECTION_H)
#define __WIDENINGLANECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "WideningLane.h"
namespace LX
{

// Iterator : WideningLaneCollection
class WideningLaneCollectionIterator : public Iterator<WideningLane*>
{
};

class WideningLaneCollectionConstIterator : public ConstIterator<WideningLane>
{
};

// Collection : WideningLaneCollection
class WideningLaneCollection : public ObjList<WideningLane, WideningLaneCollectionIterator, WideningLaneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
