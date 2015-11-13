#if !defined(__INTERSECTIONCOLLECTIONIMPL_H)
#define __INTERSECTIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Intersection.h"
#include "IntersectionCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "IntersectionImpl.h"
#endif

namespace LX
{
IntersectionCollection* createIntersectionCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : IntersectionCollectionImpl
class IntersectionCollectionImpl : public ObjListTmpl<Intersection, IntersectionCollection, IntersectionCollectionIterator, IntersectionCollectionConstIterator>
{
public:
    IntersectionCollectionImpl::IntersectionCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
