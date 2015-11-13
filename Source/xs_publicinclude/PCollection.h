#if !defined(__PCOLLECTION_H)
#define __PCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "P.h"
namespace LX
{

// Iterator : PCollection
class PCollectionIterator : public Iterator<P*>
{
};

class PCollectionConstIterator : public ConstIterator<P>
{
};

// Collection : PCollection
class PCollection : public Map<P, unsigned int, PCollectionIterator, PCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
