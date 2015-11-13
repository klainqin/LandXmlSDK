#if !defined(__PIPECOLLECTION_H)
#define __PIPECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Pipe.h"
namespace LX
{

// Iterator : PipeCollection
class PipeCollectionIterator : public Iterator<Pipe*>
{
};

class PipeCollectionConstIterator : public ConstIterator<Pipe>
{
};

// Collection : PipeCollection
class PipeCollection : public Map<Pipe, String, PipeCollectionIterator, PipeCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
