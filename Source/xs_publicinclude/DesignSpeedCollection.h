#if !defined(__DESIGNSPEEDCOLLECTION_H)
#define __DESIGNSPEEDCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DesignSpeed.h"
namespace LX
{

// Iterator : DesignSpeedCollection
class DesignSpeedCollectionIterator : public Iterator<DesignSpeed*>
{
};

class DesignSpeedCollectionConstIterator : public ConstIterator<DesignSpeed>
{
};

// Collection : DesignSpeedCollection
class DesignSpeedCollection : public ObjList<DesignSpeed, DesignSpeedCollectionIterator, DesignSpeedCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
