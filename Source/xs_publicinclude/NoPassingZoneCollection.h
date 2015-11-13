#if !defined(__NOPASSINGZONECOLLECTION_H)
#define __NOPASSINGZONECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "NoPassingZone.h"
namespace LX
{

// Iterator : NoPassingZoneCollection
class NoPassingZoneCollectionIterator : public Iterator<NoPassingZone*>
{
};

class NoPassingZoneCollectionConstIterator : public ConstIterator<NoPassingZone>
{
};

// Collection : NoPassingZoneCollection
class NoPassingZoneCollection : public ObjList<NoPassingZone, NoPassingZoneCollectionIterator, NoPassingZoneCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
