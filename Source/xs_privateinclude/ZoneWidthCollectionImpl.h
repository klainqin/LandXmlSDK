#if !defined(__ZONEWIDTHCOLLECTIONIMPL_H)
#define __ZONEWIDTHCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ZoneWidth.h"
#include "ZoneWidthCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneWidthImpl.h"
#endif

namespace LX
{
ZoneWidthCollection* createZoneWidthCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneWidthCollectionImpl
class ZoneWidthCollectionImpl : public ObjListTmpl<ZoneWidth, ZoneWidthCollection, ZoneWidthCollectionIterator, ZoneWidthCollectionConstIterator>
{
public:
    ZoneWidthCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
