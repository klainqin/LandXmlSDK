#if !defined(__CANTSTATIONCOLLECTION_H)
#define __CANTSTATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CantStation.h"
namespace LX
{

// Iterator : CantStationCollection
class CantStationCollectionIterator : public Iterator<CantStation*>
{
};

class CantStationCollectionConstIterator : public ConstIterator<CantStation>
{
};

// Collection : CantStationCollection
class CantStationCollection : public ObjList<CantStation, CantStationCollectionIterator, CantStationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
