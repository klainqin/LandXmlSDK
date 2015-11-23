#if !defined(__PARCELSCOLLECTIONIMPL_H)
#define __PARCELSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Parcels.h"
#include "ParcelsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ParcelsImpl.h"
#endif

namespace LX
{
ParcelsCollection* createParcelsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ParcelsCollectionImpl
class ParcelsCollectionImpl : public NamedObjMultiMapTmpl<Parcels, ParcelsCollection, String, ParcelsCollectionIterator, ParcelsCollectionConstIterator>
{
public:
    ParcelsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
