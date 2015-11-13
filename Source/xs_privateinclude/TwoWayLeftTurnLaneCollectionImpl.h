#if !defined(__TWOWAYLEFTTURNLANECOLLECTIONIMPL_H)
#define __TWOWAYLEFTTURNLANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TwoWayLeftTurnLane.h"
#include "TwoWayLeftTurnLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TwoWayLeftTurnLaneImpl.h"
#endif

namespace LX
{
TwoWayLeftTurnLaneCollection* createTwoWayLeftTurnLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TwoWayLeftTurnLaneCollectionImpl
class TwoWayLeftTurnLaneCollectionImpl : public ObjListTmpl<TwoWayLeftTurnLane, TwoWayLeftTurnLaneCollection, TwoWayLeftTurnLaneCollectionIterator, TwoWayLeftTurnLaneCollectionConstIterator>
{
public:
    TwoWayLeftTurnLaneCollectionImpl::TwoWayLeftTurnLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
