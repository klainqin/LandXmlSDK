#if !defined(__WATERSHEDCOLLECTION_H)
#define __WATERSHEDCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Watershed.h"
namespace LX
{

// Iterator : WatershedCollection
class WatershedCollectionIterator : public Iterator<Watershed*>
{
};

class WatershedCollectionConstIterator : public ConstIterator<Watershed>
{
};

// Collection : WatershedCollection
class WatershedCollection : public Map<Watershed, String, WatershedCollectionIterator, WatershedCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
