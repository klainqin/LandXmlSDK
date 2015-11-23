#if !defined(__SURFVOLUMECOLLECTIONIMPL_H)
#define __SURFVOLUMECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "SurfVolume.h"
#include "SurfVolumeCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurfVolumeImpl.h"
#endif

namespace LX
{
SurfVolumeCollection* createSurfVolumeCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurfVolumeCollectionImpl
class SurfVolumeCollectionImpl : public NamedObjMultiMapTmpl<SurfVolume, SurfVolumeCollection, String, SurfVolumeCollectionIterator, SurfVolumeCollectionConstIterator>
{
public:
    SurfVolumeCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
