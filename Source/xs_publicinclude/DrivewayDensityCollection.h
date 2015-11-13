#if !defined(__DRIVEWAYDENSITYCOLLECTION_H)
#define __DRIVEWAYDENSITYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DrivewayDensity.h"
namespace LX
{

// Iterator : DrivewayDensityCollection
class DrivewayDensityCollectionIterator : public Iterator<DrivewayDensity*>
{
};

class DrivewayDensityCollectionConstIterator : public ConstIterator<DrivewayDensity>
{
};

// Collection : DrivewayDensityCollection
class DrivewayDensityCollection : public ObjList<DrivewayDensity, DrivewayDensityCollectionIterator, DrivewayDensityCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
