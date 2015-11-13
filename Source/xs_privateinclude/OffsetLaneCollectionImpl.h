#if !defined(__OFFSETLANECOLLECTIONIMPL_H)
#define __OFFSETLANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "OffsetLane.h"
#include "OffsetLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "OffsetLaneImpl.h"
#endif

namespace LX
{
OffsetLaneCollection* createOffsetLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : OffsetLaneCollectionImpl
class OffsetLaneCollectionImpl : public ObjListTmpl<OffsetLane, OffsetLaneCollection, OffsetLaneCollectionIterator, OffsetLaneCollectionConstIterator>
{
public:
    OffsetLaneCollectionImpl::OffsetLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
