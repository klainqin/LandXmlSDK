#if !defined(__TURNSPEEDCOLLECTIONIMPL_H)
#define __TURNSPEEDCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TurnSpeed.h"
#include "TurnSpeedCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TurnSpeedImpl.h"
#endif

namespace LX
{
TurnSpeedCollection* createTurnSpeedCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TurnSpeedCollectionImpl
class TurnSpeedCollectionImpl : public ObjListTmpl<TurnSpeed, TurnSpeedCollection, TurnSpeedCollectionIterator, TurnSpeedCollectionConstIterator>
{
public:
    TurnSpeedCollectionImpl::TurnSpeedCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
