#if !defined(__STAEQUATIONCOLLECTION_H)
#define __STAEQUATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "StaEquation.h"
namespace LX
{

// Iterator : StaEquationCollection
class StaEquationCollectionIterator : public Iterator<StaEquation*>
{
};

class StaEquationCollectionConstIterator : public ConstIterator<StaEquation>
{
};

// Collection : StaEquationCollection
class StaEquationCollection : public ObjList<StaEquation, StaEquationCollectionIterator, StaEquationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
