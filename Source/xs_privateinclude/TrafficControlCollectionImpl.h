#if !defined(__TRAFFICCONTROLCOLLECTIONIMPL_H)
#define __TRAFFICCONTROLCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TrafficControl.h"
#include "TrafficControlCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TrafficControlImpl.h"
#endif

namespace LX
{
TrafficControlCollection* createTrafficControlCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TrafficControlCollectionImpl
class TrafficControlCollectionImpl : public ObjListTmpl<TrafficControl, TrafficControlCollection, TrafficControlCollectionIterator, TrafficControlCollectionConstIterator>
{
public:
    TrafficControlCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
