#if !defined(__BIKEFACILITIESCOLLECTIONIMPL_H)
#define __BIKEFACILITIESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "BikeFacilities.h"
#include "BikeFacilitiesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BikeFacilitiesImpl.h"
#endif

namespace LX
{
BikeFacilitiesCollection* createBikeFacilitiesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BikeFacilitiesCollectionImpl
class BikeFacilitiesCollectionImpl : public ObjListTmpl<BikeFacilities, BikeFacilitiesCollection, BikeFacilitiesCollectionIterator, BikeFacilitiesCollectionConstIterator>
{
public:
    BikeFacilitiesCollectionImpl::BikeFacilitiesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
