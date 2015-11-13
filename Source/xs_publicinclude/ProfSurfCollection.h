#if !defined(__PROFSURFCOLLECTION_H)
#define __PROFSURFCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ProfSurf.h"
namespace LX
{

// Iterator : ProfSurfCollection
class ProfSurfCollectionIterator : public Iterator<ProfSurf*>
{
};

class ProfSurfCollectionConstIterator : public ConstIterator<ProfSurf>
{
};

// Collection : ProfSurfCollection
class ProfSurfCollection : public Map<ProfSurf, String, ProfSurfCollectionIterator, ProfSurfCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
