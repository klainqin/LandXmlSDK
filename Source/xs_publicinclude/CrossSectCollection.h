#if !defined(__CROSSSECTCOLLECTION_H)
#define __CROSSSECTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CrossSect.h"
namespace LX
{

// Iterator : CrossSectCollection
class CrossSectCollectionIterator : public Iterator<CrossSect*>
{
};

class CrossSectCollectionConstIterator : public ConstIterator<CrossSect>
{
};

// Collection : CrossSectCollection
class CrossSectCollection : public Map<CrossSect, String, CrossSectCollectionIterator, CrossSectCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
