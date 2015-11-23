#if !defined(__PLANFEATURECOLLECTIONIMPL_H)
#define __PLANFEATURECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PlanFeature.h"
#include "PlanFeatureCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PlanFeatureImpl.h"
#endif

namespace LX
{
PlanFeatureCollection* createPlanFeatureCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PlanFeatureCollectionImpl
class PlanFeatureCollectionImpl : public NamedObjMultiMapTmpl<PlanFeature, PlanFeatureCollection, String, PlanFeatureCollectionIterator, PlanFeatureCollectionConstIterator>
{
public:
    PlanFeatureCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
