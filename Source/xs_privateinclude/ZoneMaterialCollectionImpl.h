#if !defined(__ZONEMATERIALCOLLECTIONIMPL_H)
#define __ZONEMATERIALCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ZoneMaterial.h"
#include "ZoneMaterialCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneMaterialImpl.h"
#endif

namespace LX
{
ZoneMaterialCollection* createZoneMaterialCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneMaterialCollectionImpl
class ZoneMaterialCollectionImpl : public ObjListTmpl<ZoneMaterial, ZoneMaterialCollection, ZoneMaterialCollectionIterator, ZoneMaterialCollectionConstIterator>
{
public:
    ZoneMaterialCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
