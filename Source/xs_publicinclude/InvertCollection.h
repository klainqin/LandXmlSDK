#if !defined(__INVERTCOLLECTION_H)
#define __INVERTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Invert.h"
namespace LX
{

// Iterator : InvertCollection
class InvertCollectionIterator : public Iterator<Invert*>
{
};

class InvertCollectionConstIterator : public ConstIterator<Invert>
{
};

// Collection : InvertCollection
class InvertCollection : public ObjList<Invert, InvertCollectionIterator, InvertCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
