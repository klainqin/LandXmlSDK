#if !defined(__STRUCTCOLLECTIONIMPL_H)
#define __STRUCTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Struct.h"
#include "StructCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "StructImpl.h"
#endif

namespace LX
{
StructCollection* createStructCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : StructCollectionImpl
class StructCollectionImpl : public GlobalObjMapTmpl<Struct, StructCollection, String, StructCollectionIterator, StructCollectionConstIterator>
{
public:
    StructCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
