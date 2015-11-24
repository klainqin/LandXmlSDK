#if !defined(__DESIGNCROSSSECTSURFCOLLECTIONIMPL_H)
#define __DESIGNCROSSSECTSURFCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DesignCrossSectSurf.h"
#include "DesignCrossSectSurfCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DesignCrossSectSurfImpl.h"
#endif

namespace LX
{
DesignCrossSectSurfCollection* createDesignCrossSectSurfCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DesignCrossSectSurfCollectionImpl
class DesignCrossSectSurfCollectionImpl : public NamedObjMultiMapTmpl<DesignCrossSectSurf, DesignCrossSectSurfCollection, String, DesignCrossSectSurfCollectionIterator, DesignCrossSectSurfCollectionConstIterator>
{
public:
    DesignCrossSectSurfCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
