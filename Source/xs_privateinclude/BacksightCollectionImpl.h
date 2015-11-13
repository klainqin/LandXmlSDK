#if !defined(__BACKSIGHTCOLLECTIONIMPL_H)
#define __BACKSIGHTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Backsight.h"
#include "BacksightCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BacksightImpl.h"
#endif

namespace LX
{
BacksightCollection* createBacksightCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BacksightCollectionImpl
class BacksightCollectionImpl : public ObjListTmpl<Backsight, BacksightCollection, BacksightCollectionIterator, BacksightCollectionConstIterator>
{
public:
    BacksightCollectionImpl::BacksightCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
