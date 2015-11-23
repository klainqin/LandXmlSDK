#if !defined(__VOLUMECOLLECTIONIMPL_H)
#define __VOLUMECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Volume.h"
#include "VolumeCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "VolumeImpl.h"
#endif

namespace LX
{
VolumeCollection* createVolumeCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : VolumeCollectionImpl
class VolumeCollectionImpl : public ObjListTmpl<Volume, VolumeCollection, VolumeCollectionIterator, VolumeCollectionConstIterator>
{
public:
    VolumeCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
