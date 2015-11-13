#if !defined(__RUNOFFSTACOLLECTION_H)
#define __RUNOFFSTACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "RunoffSta.h"
namespace LX
{

// Iterator : RunoffStaCollection
class RunoffStaCollectionIterator : public Iterator<RunoffSta*>
{
};

class RunoffStaCollectionConstIterator : public ConstIterator<RunoffSta>
{
};

// Collection : RunoffStaCollection
class RunoffStaCollection : public ObjList<RunoffSta, RunoffStaCollectionIterator, RunoffStaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
