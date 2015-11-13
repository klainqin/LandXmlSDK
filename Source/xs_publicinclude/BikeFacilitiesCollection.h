#if !defined(__BIKEFACILITIESCOLLECTION_H)
#define __BIKEFACILITIESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "BikeFacilities.h"
namespace LX
{

// Iterator : BikeFacilitiesCollection
class BikeFacilitiesCollectionIterator : public Iterator<BikeFacilities*>
{
};

class BikeFacilitiesCollectionConstIterator : public ConstIterator<BikeFacilities>
{
};

// Collection : BikeFacilitiesCollection
class BikeFacilitiesCollection : public ObjList<BikeFacilities, BikeFacilitiesCollectionIterator, BikeFacilitiesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
