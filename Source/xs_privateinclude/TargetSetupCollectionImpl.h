#if !defined(__TARGETSETUPCOLLECTIONIMPL_H)
#define __TARGETSETUPCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TargetSetup.h"
#include "TargetSetupCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TargetSetupImpl.h"
#endif

namespace LX
{
TargetSetupCollection* createTargetSetupCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TargetSetupCollectionImpl
class TargetSetupCollectionImpl : public ObjListTmpl<TargetSetup, TargetSetupCollection, TargetSetupCollectionIterator, TargetSetupCollectionConstIterator>
{
public:
    TargetSetupCollectionImpl::TargetSetupCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
