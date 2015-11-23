#if !defined(__RETWALLCOLLECTIONIMPL_H)
#define __RETWALLCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "RetWall.h"
#include "RetWallCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RetWallImpl.h"
#endif

namespace LX
{
RetWallCollection* createRetWallCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RetWallCollectionImpl
class RetWallCollectionImpl : public NamedObjMultiMapTmpl<RetWall, RetWallCollection, String, RetWallCollectionIterator, RetWallCollectionConstIterator>
{
public:
    RetWallCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
