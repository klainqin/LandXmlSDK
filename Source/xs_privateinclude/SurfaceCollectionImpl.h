#if !defined(__SURFACECOLLECTIONIMPL_H)
#define __SURFACECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Surface.h"
#include "SurfaceCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurfaceImpl.h"
#endif

namespace LX
{
SurfaceCollection* createSurfaceCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurfaceCollectionImpl
class SurfaceCollectionImpl : public GlobalObjMapTmpl<Surface, SurfaceCollection, String, SurfaceCollectionIterator, SurfaceCollectionConstIterator>
{
public:
    SurfaceCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
