#if !defined(__CONTOURCOLLECTION_H)
#define __CONTOURCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Contour.h"
namespace LX
{

// Iterator : ContourCollection
class ContourCollectionIterator : public Iterator<Contour*>
{
};

class ContourCollectionConstIterator : public ConstIterator<Contour>
{
};

// Collection : ContourCollection
class ContourCollection : public ObjList<Contour, ContourCollectionIterator, ContourCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
