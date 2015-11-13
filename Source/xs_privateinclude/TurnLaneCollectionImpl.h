#if !defined(__TURNLANECOLLECTIONIMPL_H)
#define __TURNLANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TurnLane.h"
#include "TurnLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TurnLaneImpl.h"
#endif

namespace LX
{
TurnLaneCollection* createTurnLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TurnLaneCollectionImpl
class TurnLaneCollectionImpl : public ObjListTmpl<TurnLane, TurnLaneCollection, TurnLaneCollectionIterator, TurnLaneCollectionConstIterator>
{
public:
    TurnLaneCollectionImpl::TurnLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
