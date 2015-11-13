#if !defined(__CRASHDATACOLLECTION_H)
#define __CRASHDATACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CrashData.h"
namespace LX
{

// Iterator : CrashDataCollection
class CrashDataCollectionIterator : public Iterator<CrashData*>
{
};

class CrashDataCollectionConstIterator : public ConstIterator<CrashData>
{
};

// Collection : CrashDataCollection
class CrashDataCollection : public ObjList<CrashData, CrashDataCollectionIterator, CrashDataCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
