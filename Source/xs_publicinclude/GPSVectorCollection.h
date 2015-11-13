#if !defined(__GPSVECTORCOLLECTION_H)
#define __GPSVECTORCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "GPSVector.h"
namespace LX
{

// Iterator : GPSVectorCollection
class GPSVectorCollectionIterator : public Iterator<GPSVector*>
{
};

class GPSVectorCollectionConstIterator : public ConstIterator<GPSVector>
{
};

// Collection : GPSVectorCollection
class GPSVectorCollection : public ObjList<GPSVector, GPSVectorCollectionIterator, GPSVectorCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
