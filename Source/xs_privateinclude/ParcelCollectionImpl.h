#if !defined(__PARCELCOLLECTIONIMPL_H)
#define __PARCELCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Parcel.h"
#include "ParcelCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ParcelImpl.h"
#endif

namespace LX
{
ParcelCollection* createParcelCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ParcelCollectionImpl
class ParcelCollectionImpl : public GlobalObjMapTmpl<Parcel, ParcelCollection, String, ParcelCollectionIterator, ParcelCollectionConstIterator>
{
public:
    ParcelCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
