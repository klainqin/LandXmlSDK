#if !defined(__CLIMBLANECOLLECTIONIMPL_H)
#define __CLIMBLANECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ClimbLane.h"
#include "ClimbLaneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ClimbLaneImpl.h"
#endif

namespace LX
{
ClimbLaneCollection* createClimbLaneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ClimbLaneCollectionImpl
class ClimbLaneCollectionImpl : public ObjListTmpl<ClimbLane, ClimbLaneCollection, ClimbLaneCollectionIterator, ClimbLaneCollectionConstIterator>
{
public:
    ClimbLaneCollectionImpl::ClimbLaneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
