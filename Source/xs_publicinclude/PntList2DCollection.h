#if !defined(__PNTLIST2DCOLLECTION_H)
#define __PNTLIST2DCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PntList2D.h"
namespace LX
{

// Iterator : PntList2DCollection
class PntList2DCollectionIterator : public Iterator<PntList2D*>
{
};

class PntList2DCollectionConstIterator : public ConstIterator<PntList2D>
{
};

// Collection : PntList2DCollection
class PntList2DCollection : public ObjList<PntList2D, PntList2DCollectionIterator, PntList2DCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
