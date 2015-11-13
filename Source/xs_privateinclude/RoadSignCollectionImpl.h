#if !defined(__ROADSIGNCOLLECTIONIMPL_H)
#define __ROADSIGNCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "RoadSign.h"
#include "RoadSignCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RoadSignImpl.h"
#endif

namespace LX
{
RoadSignCollection* createRoadSignCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RoadSignCollectionImpl
class RoadSignCollectionImpl : public ObjListTmpl<RoadSign, RoadSignCollection, RoadSignCollectionIterator, RoadSignCollectionConstIterator>
{
public:
    RoadSignCollectionImpl::RoadSignCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
