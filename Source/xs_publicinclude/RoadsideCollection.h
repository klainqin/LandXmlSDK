#if !defined(__ROADSIDECOLLECTION_H)
#define __ROADSIDECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Roadside.h"
namespace LX
{

// Iterator : RoadsideCollection
class RoadsideCollectionIterator : public Iterator<Roadside*>
{
};

class RoadsideCollectionConstIterator : public ConstIterator<Roadside>
{
};

// Collection : RoadsideCollection
class RoadsideCollection : public ObjList<Roadside, RoadsideCollectionIterator, RoadsideCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
