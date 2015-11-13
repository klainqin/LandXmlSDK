#if !defined(__ZONECOLLECTIONIMPL_H)
#define __ZONECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Zone.h"
#include "ZoneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneImpl.h"
#endif

namespace LX
{
ZoneCollection* createZoneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneCollectionImpl
class ZoneCollectionImpl : public NamedObjMultiMapTmpl<Zone, ZoneCollection, String, ZoneCollectionIterator, ZoneCollectionConstIterator>
{
public:
    ZoneCollectionImpl::ZoneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
