#if !defined(__FCOLLECTION_H)
#define __FCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "F.h"
namespace LX
{

// Iterator : FCollection
class FCollectionIterator : public Iterator<F*>
{
};

class FCollectionConstIterator : public ConstIterator<F>
{
};

// Collection : FCollection
class FCollection : public ObjList<F, FCollectionIterator, FCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
