#if !defined(__GRADESURFACECOLLECTIONIMPL_H)
#define __GRADESURFACECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "GradeSurface.h"
#include "GradeSurfaceCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "GradeSurfaceImpl.h"
#endif

namespace LX
{
GradeSurfaceCollection* createGradeSurfaceCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : GradeSurfaceCollectionImpl
class GradeSurfaceCollectionImpl : public NamedObjMultiMapTmpl<GradeSurface, GradeSurfaceCollection, String, GradeSurfaceCollectionIterator, GradeSurfaceCollectionConstIterator>
{
public:
    GradeSurfaceCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
