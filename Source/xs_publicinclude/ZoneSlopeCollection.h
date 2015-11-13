#if !defined(__ZONESLOPECOLLECTION_H)
#define __ZONESLOPECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ZoneSlope.h"
namespace LX
{

// Iterator : ZoneSlopeCollection
class ZoneSlopeCollectionIterator : public Iterator<ZoneSlope*>
{
};

class ZoneSlopeCollectionConstIterator : public ConstIterator<ZoneSlope>
{
};

// Collection : ZoneSlopeCollection
class ZoneSlopeCollection : public ObjList<ZoneSlope, ZoneSlopeCollectionIterator, ZoneSlopeCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
