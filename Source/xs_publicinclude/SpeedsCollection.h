#if !defined(__SPEEDSCOLLECTION_H)
#define __SPEEDSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Speeds.h"
namespace LX
{

// Iterator : SpeedsCollection
class SpeedsCollectionIterator : public Iterator<Speeds*>
{
};

class SpeedsCollectionConstIterator : public ConstIterator<Speeds>
{
};

// Collection : SpeedsCollection
class SpeedsCollection : public ObjList<Speeds, SpeedsCollectionIterator, SpeedsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
