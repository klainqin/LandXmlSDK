#if !defined(__CRASHHISTORYCOLLECTION_H)
#define __CRASHHISTORYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CrashHistory.h"
namespace LX
{

// Iterator : CrashHistoryCollection
class CrashHistoryCollectionIterator : public Iterator<CrashHistory*>
{
};

class CrashHistoryCollectionConstIterator : public ConstIterator<CrashHistory>
{
};

// Collection : CrashHistoryCollection
class CrashHistoryCollection : public ObjList<CrashHistory, CrashHistoryCollectionIterator, CrashHistoryCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
