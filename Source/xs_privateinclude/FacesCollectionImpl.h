#if !defined(__FACESCOLLECTIONIMPL_H)
#define __FACESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Faces.h"
#include "FacesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FacesImpl.h"
#endif

namespace LX
{
FacesCollection* createFacesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FacesCollectionImpl
class FacesCollectionImpl : public NamedObjMultiMapTmpl<Faces, FacesCollection, String, FacesCollectionIterator, FacesCollectionConstIterator>
{
public:
    FacesCollectionImpl::FacesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
