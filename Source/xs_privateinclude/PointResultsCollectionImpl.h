#if !defined(__POINTRESULTSCOLLECTIONIMPL_H)
#define __POINTRESULTSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PointResults.h"
#include "PointResultsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PointResultsImpl.h"
#endif

namespace LX
{
PointResultsCollection* createPointResultsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PointResultsCollectionImpl
class PointResultsCollectionImpl : public ObjListTmpl<PointResults, PointResultsCollection, PointResultsCollectionIterator, PointResultsCollectionConstIterator>
{
public:
    PointResultsCollectionImpl::PointResultsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
