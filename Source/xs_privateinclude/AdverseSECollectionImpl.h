#if !defined(__ADVERSESECOLLECTIONIMPL_H)
#define __ADVERSESECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "AdverseSE.h"
#include "AdverseSECollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AdverseSEImpl.h"
#endif

namespace LX
{
AdverseSECollection* createAdverseSECollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AdverseSECollectionImpl
class AdverseSECollectionImpl : public ObjListTmpl<AdverseSE, AdverseSECollection, AdverseSECollectionIterator, AdverseSECollectionConstIterator>
{
public:
    AdverseSECollectionImpl::AdverseSECollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
