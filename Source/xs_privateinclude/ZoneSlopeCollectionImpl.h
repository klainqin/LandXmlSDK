#if !defined(__ZONESLOPECOLLECTIONIMPL_H)
#define __ZONESLOPECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ZoneSlope.h"
#include "ZoneSlopeCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneSlopeImpl.h"
#endif

namespace LX
{
ZoneSlopeCollection* createZoneSlopeCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneSlopeCollectionImpl
class ZoneSlopeCollectionImpl : public ObjListTmpl<ZoneSlope, ZoneSlopeCollection, ZoneSlopeCollectionIterator, ZoneSlopeCollectionConstIterator>
{
public:
    ZoneSlopeCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
