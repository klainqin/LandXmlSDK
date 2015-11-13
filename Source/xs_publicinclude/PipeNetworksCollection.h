#if !defined(__PIPENETWORKSCOLLECTION_H)
#define __PIPENETWORKSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PipeNetworks.h"
namespace LX
{

// Iterator : PipeNetworksCollection
class PipeNetworksCollectionIterator : public Iterator<PipeNetworks*>
{
};

class PipeNetworksCollectionConstIterator : public ConstIterator<PipeNetworks>
{
};

// Collection : PipeNetworksCollection
class PipeNetworksCollection : public Map<PipeNetworks, String, PipeNetworksCollectionIterator, PipeNetworksCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
