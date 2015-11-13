#if !defined(__MAPPOINTCOLLECTIONIMPL_H)
#define __MAPPOINTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "MapPoint.h"
#include "MapPointCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "MapPointImpl.h"
#endif

namespace LX
{
MapPointCollection* createMapPointCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : MapPointCollectionImpl
class MapPointCollectionImpl : public NamedObjMultiMapTmpl<MapPoint, MapPointCollection, String, MapPointCollectionIterator, MapPointCollectionConstIterator>
{
public:
    MapPointCollectionImpl::MapPointCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
