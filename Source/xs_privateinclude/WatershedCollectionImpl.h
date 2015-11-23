#if !defined(__WATERSHEDCOLLECTIONIMPL_H)
#define __WATERSHEDCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Watershed.h"
#include "WatershedCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "WatershedImpl.h"
#endif

namespace LX
{
WatershedCollection* createWatershedCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : WatershedCollectionImpl
class WatershedCollectionImpl : public NamedObjMultiMapTmpl<Watershed, WatershedCollection, String, WatershedCollectionIterator, WatershedCollectionConstIterator>
{
public:
    WatershedCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
