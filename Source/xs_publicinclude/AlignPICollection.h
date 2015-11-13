#if !defined(__ALIGNPICOLLECTION_H)
#define __ALIGNPICOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "AlignPI.h"
namespace LX
{

// Iterator : AlignPICollection
class AlignPICollectionIterator : public Iterator<AlignPI*>
{
};

class AlignPICollectionConstIterator : public ConstIterator<AlignPI>
{
};

// Collection : AlignPICollection
class AlignPICollection : public ObjList<AlignPI, AlignPICollectionIterator, AlignPICollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
