#if !defined(__BOUNDARYCOLLECTIONIMPL_H)
#define __BOUNDARYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Boundary.h"
#include "BoundaryCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BoundaryImpl.h"
#endif

namespace LX
{
BoundaryCollection* createBoundaryCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BoundaryCollectionImpl
class BoundaryCollectionImpl : public NamedObjMultiMapTmpl<Boundary, BoundaryCollection, String, BoundaryCollectionIterator, BoundaryCollectionConstIterator>
{
public:
    BoundaryCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
