#if !defined(__BACKSIGHTCOLLECTION_H)
#define __BACKSIGHTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Backsight.h"
namespace LX
{

// Iterator : BacksightCollection
class BacksightCollectionIterator : public Iterator<Backsight*>
{
};

class BacksightCollectionConstIterator : public ConstIterator<Backsight>
{
};

// Collection : BacksightCollection
class BacksightCollection : public ObjList<Backsight, BacksightCollectionIterator, BacksightCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
