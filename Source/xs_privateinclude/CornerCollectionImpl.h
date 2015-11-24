#if !defined(__CORNERCOLLECTIONIMPL_H)
#define __CORNERCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Corner.h"
#include "CornerCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CornerImpl.h"
#endif

namespace LX
{
CornerCollection* createCornerCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CornerCollectionImpl
class CornerCollectionImpl : public ObjListTmpl<Corner, CornerCollection, CornerCollectionIterator, CornerCollectionConstIterator>
{
public:
    CornerCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
