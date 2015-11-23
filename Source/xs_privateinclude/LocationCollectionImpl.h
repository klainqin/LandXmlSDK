#if !defined(__LOCATIONCOLLECTIONIMPL_H)
#define __LOCATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Location.h"
#include "LocationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "LocationImpl.h"
#endif

namespace LX
{
LocationCollection* createLocationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : LocationCollectionImpl
class LocationCollectionImpl : public NamedObjMultiMapTmpl<Location, LocationCollection, String, LocationCollectionIterator, LocationCollectionConstIterator>
{
public:
    LocationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
