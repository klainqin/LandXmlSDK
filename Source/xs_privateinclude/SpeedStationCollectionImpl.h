#if !defined(__SPEEDSTATIONCOLLECTIONIMPL_H)
#define __SPEEDSTATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "SpeedStation.h"
#include "SpeedStationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SpeedStationImpl.h"
#endif

namespace LX
{
SpeedStationCollection* createSpeedStationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SpeedStationCollectionImpl
class SpeedStationCollectionImpl : public ObjListTmpl<SpeedStation, SpeedStationCollection, SpeedStationCollectionIterator, SpeedStationCollectionConstIterator>
{
public:
    SpeedStationCollectionImpl::SpeedStationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
