#if !defined(__ZONEHINGECOLLECTIONIMPL_H)
#define __ZONEHINGECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ZoneHinge.h"
#include "ZoneHingeCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneHingeImpl.h"
#endif

namespace LX
{
ZoneHingeCollection* createZoneHingeCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneHingeCollectionImpl
class ZoneHingeCollectionImpl : public ObjListTmpl<ZoneHinge, ZoneHingeCollection, ZoneHingeCollectionIterator, ZoneHingeCollectionConstIterator>
{
public:
    ZoneHingeCollectionImpl::ZoneHingeCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
