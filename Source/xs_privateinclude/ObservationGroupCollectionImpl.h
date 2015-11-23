#if !defined(__OBSERVATIONGROUPCOLLECTIONIMPL_H)
#define __OBSERVATIONGROUPCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ObservationGroup.h"
#include "ObservationGroupCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ObservationGroupImpl.h"
#endif

namespace LX
{
ObservationGroupCollection* createObservationGroupCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ObservationGroupCollectionImpl
class ObservationGroupCollectionImpl : public ObjListTmpl<ObservationGroup, ObservationGroupCollection, ObservationGroupCollectionIterator, ObservationGroupCollectionConstIterator>
{
public:
    ObservationGroupCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
