#if !defined(__CGPOINTCOLLECTIONIMPL_H)
#define __CGPOINTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CgPoint.h"
#include "CgPointCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CgPointImpl.h"
#endif

namespace LX
{
CgPointCollection* createCgPointCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CgPointCollectionImpl
class CgPointCollectionImpl : public GlobalObjMapTmpl<CgPoint, CgPointCollection, String, CgPointCollectionIterator, CgPointCollectionConstIterator>
{
public:
    CgPointCollectionImpl::CgPointCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
