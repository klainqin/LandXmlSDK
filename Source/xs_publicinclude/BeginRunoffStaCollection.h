#if !defined(__BEGINRUNOFFSTACOLLECTION_H)
#define __BEGINRUNOFFSTACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "BeginRunoffSta.h"
namespace LX
{

// Iterator : BeginRunoffStaCollection
class BeginRunoffStaCollectionIterator : public Iterator<BeginRunoffSta*>
{
};

class BeginRunoffStaCollectionConstIterator : public ConstIterator<BeginRunoffSta>
{
};

// Collection : BeginRunoffStaCollection
class BeginRunoffStaCollection : public ObjList<BeginRunoffSta, BeginRunoffStaCollectionIterator, BeginRunoffStaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
