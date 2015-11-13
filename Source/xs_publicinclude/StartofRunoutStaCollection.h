#if !defined(__STARTOFRUNOUTSTACOLLECTION_H)
#define __STARTOFRUNOUTSTACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "StartofRunoutSta.h"
namespace LX
{

// Iterator : StartofRunoutStaCollection
class StartofRunoutStaCollectionIterator : public Iterator<StartofRunoutSta*>
{
};

class StartofRunoutStaCollectionConstIterator : public ConstIterator<StartofRunoutSta>
{
};

// Collection : StartofRunoutStaCollection
class StartofRunoutStaCollection : public ObjList<StartofRunoutSta, StartofRunoutStaCollectionIterator, StartofRunoutStaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
