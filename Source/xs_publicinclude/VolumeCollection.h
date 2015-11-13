#if !defined(__VOLUMECOLLECTION_H)
#define __VOLUMECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Volume.h"
namespace LX
{

// Iterator : VolumeCollection
class VolumeCollectionIterator : public Iterator<Volume*>
{
};

class VolumeCollectionConstIterator : public ConstIterator<Volume>
{
};

// Collection : VolumeCollection
class VolumeCollection : public ObjList<Volume, VolumeCollectionIterator, VolumeCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
