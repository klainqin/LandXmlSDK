#if !defined(__ZONECUTFILLCOLLECTIONIMPL_H)
#define __ZONECUTFILLCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ZoneCutFill.h"
#include "ZoneCutFillCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneCutFillImpl.h"
#endif

namespace LX
{
ZoneCutFillCollection* createZoneCutFillCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneCutFillCollectionImpl
class ZoneCutFillCollectionImpl : public ObjListTmpl<ZoneCutFill, ZoneCutFillCollection, ZoneCutFillCollectionIterator, ZoneCutFillCollectionConstIterator>
{
public:
    ZoneCutFillCollectionImpl::ZoneCutFillCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
