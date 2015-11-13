#if !defined(__TARGETSETUPCOLLECTION_H)
#define __TARGETSETUPCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TargetSetup.h"
namespace LX
{

// Iterator : TargetSetupCollection
class TargetSetupCollectionIterator : public Iterator<TargetSetup*>
{
};

class TargetSetupCollectionConstIterator : public ConstIterator<TargetSetup>
{
};

// Collection : TargetSetupCollection
class TargetSetupCollection : public ObjList<TargetSetup, TargetSetupCollectionIterator, TargetSetupCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
