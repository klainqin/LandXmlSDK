#if !defined(__DATAPOINTSCOLLECTIONIMPL_H)
#define __DATAPOINTSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DataPoints.h"
#include "DataPointsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DataPointsImpl.h"
#endif

namespace LX
{
DataPointsCollection* createDataPointsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DataPointsCollectionImpl
class DataPointsCollectionImpl : public NamedObjMultiMapTmpl<DataPoints, DataPointsCollection, String, DataPointsCollectionIterator, DataPointsCollectionConstIterator>
{
public:
    DataPointsCollectionImpl::DataPointsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
