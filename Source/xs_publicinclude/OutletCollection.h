#if !defined(__OUTLETCOLLECTION_H)
#define __OUTLETCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Outlet.h"
namespace LX
{

// Iterator : OutletCollection
class OutletCollectionIterator : public Iterator<Outlet*>
{
};

class OutletCollectionConstIterator : public ConstIterator<Outlet>
{
};

// Collection : OutletCollection
class OutletCollection : public Map<Outlet, String, OutletCollectionIterator, OutletCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
