#if !defined(__PASSINGLANECOLLECTIONIMPL_H)
#define __PASSINGLANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PassingLane.h"
#include "PassingLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PassingLaneImpl.h"
#endif

namespace LX
{
PassingLaneCollection* createPassingLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PassingLaneCollectionImpl
class PassingLaneCollectionImpl : public ObjListTmpl<PassingLane, PassingLaneCollection, PassingLaneCollectionIterator, PassingLaneCollectionConstIterator>
{
public:
    PassingLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
