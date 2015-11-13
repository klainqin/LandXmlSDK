#if !defined(__TURNRESTRICTIONCOLLECTIONIMPL_H)
#define __TURNRESTRICTIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TurnRestriction.h"
#include "TurnRestrictionCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TurnRestrictionImpl.h"
#endif

namespace LX
{
TurnRestrictionCollection* createTurnRestrictionCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TurnRestrictionCollectionImpl
class TurnRestrictionCollectionImpl : public ObjListTmpl<TurnRestriction, TurnRestrictionCollection, TurnRestrictionCollectionIterator, TurnRestrictionCollectionConstIterator>
{
public:
    TurnRestrictionCollectionImpl::TurnRestrictionCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
