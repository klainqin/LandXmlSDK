#if !defined(__CURBCOLLECTION_H)
#define __CURBCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Curb.h"
namespace LX
{

// Iterator : CurbCollection
class CurbCollectionIterator : public Iterator<Curb*>
{
};

class CurbCollectionConstIterator : public ConstIterator<Curb>
{
};

// Collection : CurbCollection
class CurbCollection : public ObjList<Curb, CurbCollectionIterator, CurbCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
