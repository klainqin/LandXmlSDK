#if !defined(__POSTEDSPEEDCOLLECTIONIMPL_H)
#define __POSTEDSPEEDCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PostedSpeed.h"
#include "PostedSpeedCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PostedSpeedImpl.h"
#endif

namespace LX
{
PostedSpeedCollection* createPostedSpeedCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PostedSpeedCollectionImpl
class PostedSpeedCollectionImpl : public ObjListTmpl<PostedSpeed, PostedSpeedCollection, PostedSpeedCollectionIterator, PostedSpeedCollectionConstIterator>
{
public:
    PostedSpeedCollectionImpl::PostedSpeedCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
