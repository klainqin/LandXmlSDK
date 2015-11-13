#if !defined(__ENDOFRUNOUTSTACOLLECTION_H)
#define __ENDOFRUNOUTSTACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "EndofRunoutSta.h"
namespace LX
{

// Iterator : EndofRunoutStaCollection
class EndofRunoutStaCollectionIterator : public Iterator<EndofRunoutSta*>
{
};

class EndofRunoutStaCollectionConstIterator : public ConstIterator<EndofRunoutSta>
{
};

// Collection : EndofRunoutStaCollection
class EndofRunoutStaCollection : public ObjList<EndofRunoutSta, EndofRunoutStaCollectionIterator, EndofRunoutStaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
