#if !defined(__POINTFILECOLLECTION_H)
#define __POINTFILECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PointFile.h"
namespace LX
{

// Iterator : PointFileCollection
class PointFileCollectionIterator : public Iterator<PointFile*>
{
};

class PointFileCollectionConstIterator : public ConstIterator<PointFile>
{
};

// Collection : PointFileCollection
class PointFileCollection : public ObjList<PointFile, PointFileCollectionIterator, PointFileCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
