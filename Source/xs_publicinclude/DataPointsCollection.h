#if !defined(__DATAPOINTSCOLLECTION_H)
#define __DATAPOINTSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DataPoints.h"
namespace LX
{

// Iterator : DataPointsCollection
class DataPointsCollectionIterator : public Iterator<DataPoints*>
{
};

class DataPointsCollectionConstIterator : public ConstIterator<DataPoints>
{
};

// Collection : DataPointsCollection
class DataPointsCollection : public Map<DataPoints, String, DataPointsCollectionIterator, DataPointsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
