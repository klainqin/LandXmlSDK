#if !defined(__GPSVECTORCOLLECTIONIMPL_H)
#define __GPSVECTORCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "GPSVector.h"
#include "GPSVectorCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "GPSVectorImpl.h"
#endif

namespace LX
{
GPSVectorCollection* createGPSVectorCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : GPSVectorCollectionImpl
class GPSVectorCollectionImpl : public ObjListTmpl<GPSVector, GPSVectorCollection, GPSVectorCollectionIterator, GPSVectorCollectionConstIterator>
{
public:
    GPSVectorCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
