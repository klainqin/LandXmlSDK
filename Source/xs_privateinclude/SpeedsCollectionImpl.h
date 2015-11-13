#if !defined(__SPEEDSCOLLECTIONIMPL_H)
#define __SPEEDSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Speeds.h"
#include "SpeedsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SpeedsImpl.h"
#endif

namespace LX
{
SpeedsCollection* createSpeedsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SpeedsCollectionImpl
class SpeedsCollectionImpl : public ObjListTmpl<Speeds, SpeedsCollection, SpeedsCollectionIterator, SpeedsCollectionConstIterator>
{
public:
    SpeedsCollectionImpl::SpeedsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
