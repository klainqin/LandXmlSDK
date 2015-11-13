#if !defined(__WIDENINGLANECOLLECTIONIMPL_H)
#define __WIDENINGLANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "WideningLane.h"
#include "WideningLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "WideningLaneImpl.h"
#endif

namespace LX
{
WideningLaneCollection* createWideningLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : WideningLaneCollectionImpl
class WideningLaneCollectionImpl : public ObjListTmpl<WideningLane, WideningLaneCollection, WideningLaneCollectionIterator, WideningLaneCollectionConstIterator>
{
public:
    WideningLaneCollectionImpl::WideningLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
