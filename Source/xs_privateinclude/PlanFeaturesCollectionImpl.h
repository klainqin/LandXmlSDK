#if !defined(__PLANFEATURESCOLLECTIONIMPL_H)
#define __PLANFEATURESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PlanFeatures.h"
#include "PlanFeaturesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PlanFeaturesImpl.h"
#endif

namespace LX
{
PlanFeaturesCollection* createPlanFeaturesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PlanFeaturesCollectionImpl
class PlanFeaturesCollectionImpl : public NamedObjMultiMapTmpl<PlanFeatures, PlanFeaturesCollection, String, PlanFeaturesCollectionIterator, PlanFeaturesCollectionConstIterator>
{
public:
    PlanFeaturesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
