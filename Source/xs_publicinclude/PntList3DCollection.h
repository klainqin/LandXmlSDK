#if !defined(__PNTLIST3DCOLLECTION_H)
#define __PNTLIST3DCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PntList3D.h"
namespace LX
{

// Iterator : PntList3DCollection
class PntList3DCollectionIterator : public Iterator<PntList3D*>
{
};

class PntList3DCollectionConstIterator : public ConstIterator<PntList3D>
{
};

// Collection : PntList3DCollection
class PntList3DCollection : public ObjList<PntList3D, PntList3DCollectionIterator, PntList3DCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
