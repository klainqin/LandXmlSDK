#if !defined(__PLANFEATURESCOLLECTION_H)
#define __PLANFEATURESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PlanFeatures.h"
namespace LX
{

// Iterator : PlanFeaturesCollection
class PlanFeaturesCollectionIterator : public Iterator<PlanFeatures*>
{
};

class PlanFeaturesCollectionConstIterator : public ConstIterator<PlanFeatures>
{
};

// Collection : PlanFeaturesCollection
class PlanFeaturesCollection : public Map<PlanFeatures, String, PlanFeaturesCollectionIterator, PlanFeaturesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
