#if !defined(__GPSSETUPCOLLECTIONIMPL_H)
#define __GPSSETUPCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "GPSSetup.h"
#include "GPSSetupCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "GPSSetupImpl.h"
#endif

namespace LX
{
GPSSetupCollection* createGPSSetupCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : GPSSetupCollectionImpl
class GPSSetupCollectionImpl : public ObjListTmpl<GPSSetup, GPSSetupCollection, GPSSetupCollectionIterator, GPSSetupCollectionConstIterator>
{
public:
    GPSSetupCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
