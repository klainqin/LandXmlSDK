#if !defined(__ROADWAYCOLLECTIONIMPL_H)
#define __ROADWAYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Roadway.h"
#include "RoadwayCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RoadwayImpl.h"
#endif

namespace LX
{
RoadwayCollection* createRoadwayCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RoadwayCollectionImpl
class RoadwayCollectionImpl : public GlobalObjMapTmpl<Roadway, RoadwayCollection, String, RoadwayCollectionIterator, RoadwayCollectionConstIterator>
{
public:
    RoadwayCollectionImpl::RoadwayCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
