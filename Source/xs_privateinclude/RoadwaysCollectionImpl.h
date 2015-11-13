#if !defined(__ROADWAYSCOLLECTIONIMPL_H)
#define __ROADWAYSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Roadways.h"
#include "RoadwaysCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RoadwaysImpl.h"
#endif

namespace LX
{
RoadwaysCollection* createRoadwaysCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RoadwaysCollectionImpl
class RoadwaysCollectionImpl : public NamedObjMultiMapTmpl<Roadways, RoadwaysCollection, String, RoadwaysCollectionIterator, RoadwaysCollectionConstIterator>
{
public:
    RoadwaysCollectionImpl::RoadwaysCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
