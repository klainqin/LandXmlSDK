#if !defined(__THRULANECOLLECTIONIMPL_H)
#define __THRULANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ThruLane.h"
#include "ThruLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ThruLaneImpl.h"
#endif

namespace LX
{
ThruLaneCollection* createThruLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ThruLaneCollectionImpl
class ThruLaneCollectionImpl : public ObjListTmpl<ThruLane, ThruLaneCollection, ThruLaneCollectionIterator, ThruLaneCollectionConstIterator>
{
public:
    ThruLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
