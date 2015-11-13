#if !defined(__OBSERVATIONGROUPCOLLECTION_H)
#define __OBSERVATIONGROUPCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ObservationGroup.h"
namespace LX
{

// Iterator : ObservationGroupCollection
class ObservationGroupCollectionIterator : public Iterator<ObservationGroup*>
{
};

class ObservationGroupCollectionConstIterator : public ConstIterator<ObservationGroup>
{
};

// Collection : ObservationGroupCollection
class ObservationGroupCollection : public ObjList<ObservationGroup, ObservationGroupCollectionIterator, ObservationGroupCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
