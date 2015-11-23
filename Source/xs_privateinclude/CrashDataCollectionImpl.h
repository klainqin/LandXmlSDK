#if !defined(__CRASHDATACOLLECTIONIMPL_H)
#define __CRASHDATACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CrashData.h"
#include "CrashDataCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CrashDataImpl.h"
#endif

namespace LX
{
CrashDataCollection* createCrashDataCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CrashDataCollectionImpl
class CrashDataCollectionImpl : public ObjListTmpl<CrashData, CrashDataCollection, CrashDataCollectionIterator, CrashDataCollectionConstIterator>
{
public:
    CrashDataCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
