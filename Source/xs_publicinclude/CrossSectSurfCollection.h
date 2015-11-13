#if !defined(__CROSSSECTSURFCOLLECTION_H)
#define __CROSSSECTSURFCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CrossSectSurf.h"
namespace LX
{

// Iterator : CrossSectSurfCollection
class CrossSectSurfCollectionIterator : public Iterator<CrossSectSurf*>
{
};

class CrossSectSurfCollectionConstIterator : public ConstIterator<CrossSectSurf>
{
};

// Collection : CrossSectSurfCollection
class CrossSectSurfCollection : public Map<CrossSectSurf, String, CrossSectSurfCollectionIterator, CrossSectSurfCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
