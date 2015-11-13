#if !defined(__PARCELCOLLECTION_H)
#define __PARCELCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Parcel.h"
namespace LX
{

// Iterator : ParcelCollection
class ParcelCollectionIterator : public Iterator<Parcel*>
{
};

class ParcelCollectionConstIterator : public ConstIterator<Parcel>
{
};

// Collection : ParcelCollection
class ParcelCollection : public Map<Parcel, String, ParcelCollectionIterator, ParcelCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
