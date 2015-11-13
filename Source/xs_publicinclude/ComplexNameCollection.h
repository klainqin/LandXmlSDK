#if !defined(__COMPLEXNAMECOLLECTION_H)
#define __COMPLEXNAMECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ComplexName.h"
namespace LX
{

// Iterator : ComplexNameCollection
class ComplexNameCollectionIterator : public Iterator<ComplexName*>
{
};

class ComplexNameCollectionConstIterator : public ConstIterator<ComplexName>
{
};

// Collection : ComplexNameCollection
class ComplexNameCollection : public ObjList<ComplexName, ComplexNameCollectionIterator, ComplexNameCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
