#if !defined(__MONUMENTCOLLECTIONIMPL_H)
#define __MONUMENTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Monument.h"
#include "MonumentCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "MonumentImpl.h"
#endif

namespace LX
{
MonumentCollection* createMonumentCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : MonumentCollectionImpl
class MonumentCollectionImpl : public GlobalObjMapTmpl<Monument, MonumentCollection, String, MonumentCollectionIterator, MonumentCollectionConstIterator>
{
public:
    MonumentCollectionImpl::MonumentCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
