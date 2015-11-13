#if !defined(__GPSPOSITIONCOLLECTIONIMPL_H)
#define __GPSPOSITIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "GPSPosition.h"
#include "GPSPositionCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "GPSPositionImpl.h"
#endif

namespace LX
{
GPSPositionCollection* createGPSPositionCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : GPSPositionCollectionImpl
class GPSPositionCollectionImpl : public ObjListTmpl<GPSPosition, GPSPositionCollection, GPSPositionCollectionIterator, GPSPositionCollectionConstIterator>
{
public:
    GPSPositionCollectionImpl::GPSPositionCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
