#if !defined(__SURFACESCOLLECTIONIMPL_H)
#define __SURFACESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Surfaces.h"
#include "SurfacesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurfacesImpl.h"
#endif

namespace LX
{
SurfacesCollection* createSurfacesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurfacesCollectionImpl
class SurfacesCollectionImpl : public NamedObjMultiMapTmpl<Surfaces, SurfacesCollection, String, SurfacesCollectionIterator, SurfacesCollectionConstIterator>
{
public:
    SurfacesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
