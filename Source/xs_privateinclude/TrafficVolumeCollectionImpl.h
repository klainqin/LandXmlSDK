#if !defined(__TRAFFICVOLUMECOLLECTIONIMPL_H)
#define __TRAFFICVOLUMECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TrafficVolume.h"
#include "TrafficVolumeCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TrafficVolumeImpl.h"
#endif

namespace LX
{
TrafficVolumeCollection* createTrafficVolumeCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TrafficVolumeCollectionImpl
class TrafficVolumeCollectionImpl : public ObjListTmpl<TrafficVolume, TrafficVolumeCollection, TrafficVolumeCollectionIterator, TrafficVolumeCollectionConstIterator>
{
public:
    TrafficVolumeCollectionImpl::TrafficVolumeCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
