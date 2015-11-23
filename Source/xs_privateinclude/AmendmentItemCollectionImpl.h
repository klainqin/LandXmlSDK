#if !defined(__AMENDMENTITEMCOLLECTIONIMPL_H)
#define __AMENDMENTITEMCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "AmendmentItem.h"
#include "AmendmentItemCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AmendmentItemImpl.h"
#endif

namespace LX
{
AmendmentItemCollection* createAmendmentItemCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AmendmentItemCollectionImpl
class AmendmentItemCollectionImpl : public ObjListTmpl<AmendmentItem, AmendmentItemCollection, AmendmentItemCollectionIterator, AmendmentItemCollectionConstIterator>
{
public:
    AmendmentItemCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
