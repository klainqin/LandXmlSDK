#if !defined(__RAWOBSERVATIONCOLLECTIONIMPL_H)
#define __RAWOBSERVATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "RawObservation.h"
#include "RawObservationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RawObservationImpl.h"
#endif

namespace LX
{
RawObservationCollection* createRawObservationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RawObservationCollectionImpl
class RawObservationCollectionImpl : public ObjListTmpl<RawObservation, RawObservationCollection, RawObservationCollectionIterator, RawObservationCollectionConstIterator>
{
public:
    RawObservationCollectionImpl::RawObservationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
