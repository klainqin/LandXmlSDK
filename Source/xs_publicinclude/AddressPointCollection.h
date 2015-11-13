#if !defined(__ADDRESSPOINTCOLLECTION_H)
#define __ADDRESSPOINTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "AddressPoint.h"
namespace LX
{

// Iterator : AddressPointCollection
class AddressPointCollectionIterator : public Iterator<AddressPoint*>
{
};

class AddressPointCollectionConstIterator : public ConstIterator<AddressPoint>
{
};

// Collection : AddressPointCollection
class AddressPointCollection : public Map<AddressPoint, String, AddressPointCollectionIterator, AddressPointCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
