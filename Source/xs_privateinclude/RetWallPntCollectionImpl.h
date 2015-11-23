#if !defined(__RETWALLPNTCOLLECTIONIMPL_H)
#define __RETWALLPNTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "RetWallPnt.h"
#include "RetWallPntCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RetWallPntImpl.h"
#endif

namespace LX
{
RetWallPntCollection* createRetWallPntCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RetWallPntCollectionImpl
class RetWallPntCollectionImpl : public NamedObjMultiMapTmpl<RetWallPnt, RetWallPntCollection, String, RetWallPntCollectionIterator, RetWallPntCollectionConstIterator>
{
public:
    RetWallPntCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
