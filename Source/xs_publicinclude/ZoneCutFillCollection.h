#if !defined(__ZONECUTFILLCOLLECTION_H)
#define __ZONECUTFILLCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ZoneCutFill.h"
namespace LX
{

// Iterator : ZoneCutFillCollection
class ZoneCutFillCollectionIterator : public Iterator<ZoneCutFill*>
{
};

class ZoneCutFillCollectionConstIterator : public ConstIterator<ZoneCutFill>
{
};

// Collection : ZoneCutFillCollection
class ZoneCutFillCollection : public ObjList<ZoneCutFill, ZoneCutFillCollectionIterator, ZoneCutFillCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
