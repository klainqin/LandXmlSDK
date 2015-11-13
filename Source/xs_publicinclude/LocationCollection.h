#if !defined(__LOCATIONCOLLECTION_H)
#define __LOCATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Location.h"
namespace LX
{

// Iterator : LocationCollection
class LocationCollectionIterator : public Iterator<Location*>
{
};

class LocationCollectionConstIterator : public ConstIterator<Location>
{
};

// Collection : LocationCollection
class LocationCollection : public Map<Location, String, LocationCollectionIterator, LocationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
