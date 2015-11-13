#if !defined(__LOCATIONADDRESSCOLLECTION_H)
#define __LOCATIONADDRESSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "LocationAddress.h"
namespace LX
{

// Iterator : LocationAddressCollection
class LocationAddressCollectionIterator : public Iterator<LocationAddress*>
{
};

class LocationAddressCollectionConstIterator : public ConstIterator<LocationAddress>
{
};

// Collection : LocationAddressCollection
class LocationAddressCollection : public ObjList<LocationAddress, LocationAddressCollectionIterator, LocationAddressCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
