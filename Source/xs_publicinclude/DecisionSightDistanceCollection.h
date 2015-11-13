#if !defined(__DECISIONSIGHTDISTANCECOLLECTION_H)
#define __DECISIONSIGHTDISTANCECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DecisionSightDistance.h"
namespace LX
{

// Iterator : DecisionSightDistanceCollection
class DecisionSightDistanceCollectionIterator : public Iterator<DecisionSightDistance*>
{
};

class DecisionSightDistanceCollectionConstIterator : public ConstIterator<DecisionSightDistance>
{
};

// Collection : DecisionSightDistanceCollection
class DecisionSightDistanceCollection : public ObjList<DecisionSightDistance, DecisionSightDistanceCollectionIterator, DecisionSightDistanceCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
