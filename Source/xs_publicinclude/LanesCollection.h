#if !defined(__LANESCOLLECTION_H)
#define __LANESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Lanes.h"
namespace LX
{

// Iterator : LanesCollection
class LanesCollectionIterator : public Iterator<Lanes*>
{
};

class LanesCollectionConstIterator : public ConstIterator<Lanes>
{
};

// Collection : LanesCollection
class LanesCollection : public ObjList<Lanes, LanesCollectionIterator, LanesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
