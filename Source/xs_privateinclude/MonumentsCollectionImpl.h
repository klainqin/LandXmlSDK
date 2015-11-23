#if !defined(__MONUMENTSCOLLECTIONIMPL_H)
#define __MONUMENTSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Monuments.h"
#include "MonumentsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "MonumentsImpl.h"
#endif

namespace LX
{
MonumentsCollection* createMonumentsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : MonumentsCollectionImpl
class MonumentsCollectionImpl : public NamedObjMultiMapTmpl<Monuments, MonumentsCollection, String, MonumentsCollectionIterator, MonumentsCollectionConstIterator>
{
public:
    MonumentsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
