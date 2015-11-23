#if !defined(__DECISIONSIGHTDISTANCECOLLECTIONIMPL_H)
#define __DECISIONSIGHTDISTANCECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DecisionSightDistance.h"
#include "DecisionSightDistanceCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DecisionSightDistanceImpl.h"
#endif

namespace LX
{
DecisionSightDistanceCollection* createDecisionSightDistanceCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DecisionSightDistanceCollectionImpl
class DecisionSightDistanceCollectionImpl : public ObjListTmpl<DecisionSightDistance, DecisionSightDistanceCollection, DecisionSightDistanceCollectionIterator, DecisionSightDistanceCollectionConstIterator>
{
public:
    DecisionSightDistanceCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
