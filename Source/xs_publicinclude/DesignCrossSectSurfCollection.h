#if !defined(__DESIGNCROSSSECTSURFCOLLECTION_H)
#define __DESIGNCROSSSECTSURFCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DesignCrossSectSurf.h"
namespace LX
{

// Iterator : DesignCrossSectSurfCollection
class DesignCrossSectSurfCollectionIterator : public Iterator<DesignCrossSectSurf*>
{
};

class DesignCrossSectSurfCollectionConstIterator : public ConstIterator<DesignCrossSectSurf>
{
};

// Collection : DesignCrossSectSurfCollection
class DesignCrossSectSurfCollection : public Map<DesignCrossSectSurf, String, DesignCrossSectSurfCollectionIterator, DesignCrossSectSurfCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
