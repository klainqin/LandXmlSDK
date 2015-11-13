#if !defined(__PIPENETWORKCOLLECTION_H)
#define __PIPENETWORKCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PipeNetwork.h"
namespace LX
{

// Iterator : PipeNetworkCollection
class PipeNetworkCollectionIterator : public Iterator<PipeNetwork*>
{
};

class PipeNetworkCollectionConstIterator : public ConstIterator<PipeNetwork>
{
};

// Collection : PipeNetworkCollection
class PipeNetworkCollection : public Map<PipeNetwork, String, PipeNetworkCollectionIterator, PipeNetworkCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
