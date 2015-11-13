#if !defined(__CROSSSECTPNTCOLLECTION_H)
#define __CROSSSECTPNTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "CrossSectPnt.h"
namespace LX
{

// Iterator : CrossSectPntCollection
class CrossSectPntCollectionIterator : public Iterator<CrossSectPnt*>
{
};

class CrossSectPntCollectionConstIterator : public ConstIterator<CrossSectPnt>
{
};

// Collection : CrossSectPntCollection
class CrossSectPntCollection : public Map<CrossSectPnt, String, CrossSectPntCollectionIterator, CrossSectPntCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
