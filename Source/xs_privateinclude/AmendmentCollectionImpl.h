#if !defined(__AMENDMENTCOLLECTIONIMPL_H)
#define __AMENDMENTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Amendment.h"
#include "AmendmentCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AmendmentImpl.h"
#endif

namespace LX
{
AmendmentCollection* createAmendmentCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AmendmentCollectionImpl
class AmendmentCollectionImpl : public ObjListTmpl<Amendment, AmendmentCollection, AmendmentCollectionIterator, AmendmentCollectionConstIterator>
{
public:
    AmendmentCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
