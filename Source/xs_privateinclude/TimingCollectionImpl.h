#if !defined(__TIMINGCOLLECTIONIMPL_H)
#define __TIMINGCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Timing.h"
#include "TimingCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TimingImpl.h"
#endif

namespace LX
{
TimingCollection* createTimingCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TimingCollectionImpl
class TimingCollectionImpl : public ObjListTmpl<Timing, TimingCollection, TimingCollectionIterator, TimingCollectionConstIterator>
{
public:
    TimingCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
