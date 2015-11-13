#if !defined(__PARCELSCOLLECTION_H)
#define __PARCELSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Parcels.h"
namespace LX
{

// Iterator : ParcelsCollection
class ParcelsCollectionIterator : public Iterator<Parcels*>
{
};

class ParcelsCollectionConstIterator : public ConstIterator<Parcels>
{
};

// Collection : ParcelsCollection
class ParcelsCollection : public Map<Parcels, String, ParcelsCollectionIterator, ParcelsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
