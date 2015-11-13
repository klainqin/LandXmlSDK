#if !defined(__RAWOBSERVATIONCOLLECTION_H)
#define __RAWOBSERVATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "RawObservation.h"
namespace LX
{

// Iterator : RawObservationCollection
class RawObservationCollectionIterator : public Iterator<RawObservation*>
{
};

class RawObservationCollectionConstIterator : public ConstIterator<RawObservation>
{
};

// Collection : RawObservationCollection
class RawObservationCollection : public ObjList<RawObservation, RawObservationCollectionIterator, RawObservationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
