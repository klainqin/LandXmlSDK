#if !defined(__SUPERELEVATIONCOLLECTION_H)
#define __SUPERELEVATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Superelevation.h"
namespace LX
{

// Iterator : SuperelevationCollection
class SuperelevationCollectionIterator : public Iterator<Superelevation*>
{
};

class SuperelevationCollectionConstIterator : public ConstIterator<Superelevation>
{
};

// Collection : SuperelevationCollection
class SuperelevationCollection : public ObjList<Superelevation, SuperelevationCollectionIterator, SuperelevationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
