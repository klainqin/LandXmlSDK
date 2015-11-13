#if !defined(__FULLSUPERSTACOLLECTIONIMPL_H)
#define __FULLSUPERSTACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "FullSuperSta.h"
#include "FullSuperStaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FullSuperStaImpl.h"
#endif

namespace LX
{
FullSuperStaCollection* createFullSuperStaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FullSuperStaCollectionImpl
class FullSuperStaCollectionImpl : public ObjListTmpl<FullSuperSta, FullSuperStaCollection, FullSuperStaCollectionIterator, FullSuperStaCollectionConstIterator>
{
public:
    FullSuperStaCollectionImpl::FullSuperStaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
