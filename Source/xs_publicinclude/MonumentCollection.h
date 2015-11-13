#if !defined(__MONUMENTCOLLECTION_H)
#define __MONUMENTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Monument.h"
namespace LX
{

// Iterator : MonumentCollection
class MonumentCollectionIterator : public Iterator<Monument*>
{
};

class MonumentCollectionConstIterator : public ConstIterator<Monument>
{
};

// Collection : MonumentCollection
class MonumentCollection : public Map<Monument, String, MonumentCollectionIterator, MonumentCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
