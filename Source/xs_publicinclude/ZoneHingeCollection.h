#if !defined(__ZONEHINGECOLLECTION_H)
#define __ZONEHINGECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ZoneHinge.h"
namespace LX
{

// Iterator : ZoneHingeCollection
class ZoneHingeCollectionIterator : public Iterator<ZoneHinge*>
{
};

class ZoneHingeCollectionConstIterator : public ConstIterator<ZoneHinge>
{
};

// Collection : ZoneHingeCollection
class ZoneHingeCollection : public ObjList<ZoneHinge, ZoneHingeCollectionIterator, ZoneHingeCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
