#if !defined(__CGPOINTSCOLLECTIONIMPL_H)
#define __CGPOINTSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CgPoints.h"
#include "CgPointsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CgPointsImpl.h"
#endif

namespace LX
{
CgPointsCollection* createCgPointsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CgPointsCollectionImpl
class CgPointsCollectionImpl : public NamedObjMultiMapTmpl<CgPoints, CgPointsCollection, String, CgPointsCollectionIterator, CgPointsCollectionConstIterator>
{
public:
    CgPointsCollectionImpl::CgPointsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
