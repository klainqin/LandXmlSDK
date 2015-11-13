#if !defined(__LOCATIONADDRESSCOLLECTIONIMPL_H)
#define __LOCATIONADDRESSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "LocationAddress.h"
#include "LocationAddressCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "LocationAddressImpl.h"
#endif

namespace LX
{
LocationAddressCollection* createLocationAddressCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : LocationAddressCollectionImpl
class LocationAddressCollectionImpl : public ObjListTmpl<LocationAddress, LocationAddressCollection, LocationAddressCollectionIterator, LocationAddressCollectionConstIterator>
{
public:
    LocationAddressCollectionImpl::LocationAddressCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
