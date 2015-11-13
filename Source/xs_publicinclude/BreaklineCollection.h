#if !defined(__BREAKLINECOLLECTION_H)
#define __BREAKLINECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Breakline.h"
namespace LX
{

// Iterator : BreaklineCollection
class BreaklineCollectionIterator : public Iterator<Breakline*>
{
};

class BreaklineCollectionConstIterator : public ConstIterator<Breakline>
{
};

// Collection : BreaklineCollection
class BreaklineCollection : public Map<Breakline, String, BreaklineCollectionIterator, BreaklineCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
