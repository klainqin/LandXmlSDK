#if !defined(__FCOLLECTIONIMPL_H)
#define __FCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "F.h"
#include "FCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FImpl.h"
#endif

namespace LX
{
FCollection* createFCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FCollectionImpl
class FCollectionImpl : public ObjListTmpl<F, FCollection, FCollectionIterator, FCollectionConstIterator>
{
public:
    FCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
