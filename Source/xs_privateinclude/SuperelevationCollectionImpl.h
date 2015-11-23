#if !defined(__SUPERELEVATIONCOLLECTIONIMPL_H)
#define __SUPERELEVATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Superelevation.h"
#include "SuperelevationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SuperelevationImpl.h"
#endif

namespace LX
{
SuperelevationCollection* createSuperelevationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SuperelevationCollectionImpl
class SuperelevationCollectionImpl : public ObjListTmpl<Superelevation, SuperelevationCollection, SuperelevationCollectionIterator, SuperelevationCollectionConstIterator>
{
public:
    SuperelevationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
