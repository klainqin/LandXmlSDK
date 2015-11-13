#if !defined(__ZONEWIDTHCOLLECTION_H)
#define __ZONEWIDTHCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ZoneWidth.h"
namespace LX
{

// Iterator : ZoneWidthCollection
class ZoneWidthCollectionIterator : public Iterator<ZoneWidth*>
{
};

class ZoneWidthCollectionConstIterator : public ConstIterator<ZoneWidth>
{
};

// Collection : ZoneWidthCollection
class ZoneWidthCollection : public ObjList<ZoneWidth, ZoneWidthCollectionIterator, ZoneWidthCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
