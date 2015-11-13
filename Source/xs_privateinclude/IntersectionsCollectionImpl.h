#if !defined(__INTERSECTIONSCOLLECTIONIMPL_H)
#define __INTERSECTIONSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Intersections.h"
#include "IntersectionsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "IntersectionsImpl.h"
#endif

namespace LX
{
IntersectionsCollection* createIntersectionsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : IntersectionsCollectionImpl
class IntersectionsCollectionImpl : public ObjListTmpl<Intersections, IntersectionsCollection, IntersectionsCollectionIterator, IntersectionsCollectionConstIterator>
{
public:
    IntersectionsCollectionImpl::IntersectionsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
