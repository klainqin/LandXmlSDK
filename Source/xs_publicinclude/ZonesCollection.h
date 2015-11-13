#if !defined(__ZONESCOLLECTION_H)
#define __ZONESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Zones.h"
namespace LX
{

// Iterator : ZonesCollection
class ZonesCollectionIterator : public Iterator<Zones*>
{
};

class ZonesCollectionConstIterator : public ConstIterator<Zones>
{
};

// Collection : ZonesCollection
class ZonesCollection : public Map<Zones, String, ZonesCollectionIterator, ZonesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
