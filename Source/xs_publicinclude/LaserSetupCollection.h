#if !defined(__LASERSETUPCOLLECTION_H)
#define __LASERSETUPCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "LaserSetup.h"
namespace LX
{

// Iterator : LaserSetupCollection
class LaserSetupCollectionIterator : public Iterator<LaserSetup*>
{
};

class LaserSetupCollectionConstIterator : public ConstIterator<LaserSetup>
{
};

// Collection : LaserSetupCollection
class LaserSetupCollection : public ObjList<LaserSetup, LaserSetupCollectionIterator, LaserSetupCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
