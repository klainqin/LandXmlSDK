#if !defined(__FULLSUPERELEVCOLLECTIONIMPL_H)
#define __FULLSUPERELEVCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "FullSuperelev.h"
#include "FullSuperelevCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FullSuperelevImpl.h"
#endif

namespace LX
{
FullSuperelevCollection* createFullSuperelevCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FullSuperelevCollectionImpl
class FullSuperelevCollectionImpl : public ObjListTmpl<FullSuperelev, FullSuperelevCollection, FullSuperelevCollectionIterator, FullSuperelevCollectionConstIterator>
{
public:
    FullSuperelevCollectionImpl::FullSuperelevCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
