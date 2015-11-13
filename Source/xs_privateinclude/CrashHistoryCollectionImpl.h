#if !defined(__CRASHHISTORYCOLLECTIONIMPL_H)
#define __CRASHHISTORYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CrashHistory.h"
#include "CrashHistoryCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CrashHistoryImpl.h"
#endif

namespace LX
{
CrashHistoryCollection* createCrashHistoryCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CrashHistoryCollectionImpl
class CrashHistoryCollectionImpl : public ObjListTmpl<CrashHistory, CrashHistoryCollection, CrashHistoryCollectionIterator, CrashHistoryCollectionConstIterator>
{
public:
    CrashHistoryCollectionImpl::CrashHistoryCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
