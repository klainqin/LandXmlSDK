#if !defined(__SURFVOLUMESCOLLECTIONIMPL_H)
#define __SURFVOLUMESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "SurfVolumes.h"
#include "SurfVolumesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurfVolumesImpl.h"
#endif

namespace LX
{
SurfVolumesCollection* createSurfVolumesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurfVolumesCollectionImpl
class SurfVolumesCollectionImpl : public NamedObjMultiMapTmpl<SurfVolumes, SurfVolumesCollection, String, SurfVolumesCollectionIterator, SurfVolumesCollectionConstIterator>
{
public:
    SurfVolumesCollectionImpl::SurfVolumesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
