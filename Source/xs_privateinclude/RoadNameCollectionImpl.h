#if !defined(__ROADNAMECOLLECTIONIMPL_H)
#define __ROADNAMECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "RoadName.h"
#include "RoadNameCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RoadNameImpl.h"
#endif

namespace LX
{
RoadNameCollection* createRoadNameCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RoadNameCollectionImpl
class RoadNameCollectionImpl : public ObjListTmpl<RoadName, RoadNameCollection, RoadNameCollectionIterator, RoadNameCollectionConstIterator>
{
public:
    RoadNameCollectionImpl::RoadNameCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
