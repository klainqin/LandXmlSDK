#if !defined(__OUTLETCOLLECTIONIMPL_H)
#define __OUTLETCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Outlet.h"
#include "OutletCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "OutletImpl.h"
#endif

namespace LX
{
OutletCollection* createOutletCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : OutletCollectionImpl
class OutletCollectionImpl : public NamedObjMultiMapTmpl<Outlet, OutletCollection, String, OutletCollectionIterator, OutletCollectionConstIterator>
{
public:
    OutletCollectionImpl::OutletCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
