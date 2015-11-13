#if !defined(__ZONECOLLECTION_H)
#define __ZONECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Zone.h"
namespace LX
{

// Iterator : ZoneCollection
class ZoneCollectionIterator : public Iterator<Zone*>
{
};

class ZoneCollectionConstIterator : public ConstIterator<Zone>
{
};

// Collection : ZoneCollection
class ZoneCollection : public Map<Zone, String, ZoneCollectionIterator, ZoneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
