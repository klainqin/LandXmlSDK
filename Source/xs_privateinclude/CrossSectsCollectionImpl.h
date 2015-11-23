#if !defined(__CROSSSECTSCOLLECTIONIMPL_H)
#define __CROSSSECTSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CrossSects.h"
#include "CrossSectsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CrossSectsImpl.h"
#endif

namespace LX
{
CrossSectsCollection* createCrossSectsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CrossSectsCollectionImpl
class CrossSectsCollectionImpl : public NamedObjMultiMapTmpl<CrossSects, CrossSectsCollection, String, CrossSectsCollectionIterator, CrossSectsCollectionConstIterator>
{
public:
    CrossSectsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
