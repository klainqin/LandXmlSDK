#if !defined(__ZONESCOLLECTIONIMPL_H)
#define __ZONESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Zones.h"
#include "ZonesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZonesImpl.h"
#endif

namespace LX
{
ZonesCollection* createZonesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZonesCollectionImpl
class ZonesCollectionImpl : public NamedObjMultiMapTmpl<Zones, ZonesCollection, String, ZonesCollectionIterator, ZonesCollectionConstIterator>
{
public:
    ZonesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
