#if !defined(__CHAINCOLLECTION_H)
#define __CHAINCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Chain.h"
namespace LX
{

// Iterator : ChainCollection
class ChainCollectionIterator : public Iterator<Chain*>
{
};

class ChainCollectionConstIterator : public ConstIterator<Chain>
{
};

// Collection : ChainCollection
class ChainCollection : public Map<Chain, String, ChainCollectionIterator, ChainCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
