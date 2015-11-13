#if !defined(__HAZARDRATINGCOLLECTIONIMPL_H)
#define __HAZARDRATINGCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "HazardRating.h"
#include "HazardRatingCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "HazardRatingImpl.h"
#endif

namespace LX
{
HazardRatingCollection* createHazardRatingCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : HazardRatingCollectionImpl
class HazardRatingCollectionImpl : public ObjListTmpl<HazardRating, HazardRatingCollection, HazardRatingCollectionIterator, HazardRatingCollectionConstIterator>
{
public:
    HazardRatingCollectionImpl::HazardRatingCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
