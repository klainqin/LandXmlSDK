#if !defined(__CROSSSECTSCOLLECTION_H)
#define __CROSSSECTSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CrossSects.h"
namespace LX
{

// Iterator : CrossSectsCollection
class CrossSectsCollectionIterator : public Iterator<CrossSects*>
{
};

class CrossSectsCollectionConstIterator : public ConstIterator<CrossSects>
{
};

// Collection : CrossSectsCollection
class CrossSectsCollection : public Map<CrossSects, String, CrossSectsCollectionIterator, CrossSectsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
