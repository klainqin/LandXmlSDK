#if !defined(__TIMINGCOLLECTION_H)
#define __TIMINGCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Timing.h"
namespace LX
{

// Iterator : TimingCollection
class TimingCollectionIterator : public Iterator<Timing*>
{
};

class TimingCollectionConstIterator : public ConstIterator<Timing>
{
};

// Collection : TimingCollection
class TimingCollection : public ObjList<Timing, TimingCollectionIterator, TimingCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
