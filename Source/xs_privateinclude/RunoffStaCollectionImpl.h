#if !defined(__RUNOFFSTACOLLECTIONIMPL_H)
#define __RUNOFFSTACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "RunoffSta.h"
#include "RunoffStaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RunoffStaImpl.h"
#endif

namespace LX
{
RunoffStaCollection* createRunoffStaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RunoffStaCollectionImpl
class RunoffStaCollectionImpl : public ObjListTmpl<RunoffSta, RunoffStaCollection, RunoffStaCollectionIterator, RunoffStaCollectionConstIterator>
{
public:
    RunoffStaCollectionImpl::RunoffStaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
