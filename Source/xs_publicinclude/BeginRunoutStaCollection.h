#if !defined(__BEGINRUNOUTSTACOLLECTION_H)
#define __BEGINRUNOUTSTACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "BeginRunoutSta.h"
namespace LX
{

// Iterator : BeginRunoutStaCollection
class BeginRunoutStaCollectionIterator : public Iterator<BeginRunoutSta*>
{
};

class BeginRunoutStaCollectionConstIterator : public ConstIterator<BeginRunoutSta>
{
};

// Collection : BeginRunoutStaCollection
class BeginRunoutStaCollection : public ObjList<BeginRunoutSta, BeginRunoutStaCollectionIterator, BeginRunoutStaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
