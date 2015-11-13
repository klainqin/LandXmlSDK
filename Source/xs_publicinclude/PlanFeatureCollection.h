#if !defined(__PLANFEATURECOLLECTION_H)
#define __PLANFEATURECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PlanFeature.h"
namespace LX
{

// Iterator : PlanFeatureCollection
class PlanFeatureCollectionIterator : public Iterator<PlanFeature*>
{
};

class PlanFeatureCollectionConstIterator : public ConstIterator<PlanFeature>
{
};

// Collection : PlanFeatureCollection
class PlanFeatureCollection : public Map<PlanFeature, String, PlanFeatureCollectionIterator, PlanFeatureCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
