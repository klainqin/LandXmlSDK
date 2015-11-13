#if !defined(__POINTRESULTSCOLLECTION_H)
#define __POINTRESULTSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PointResults.h"
namespace LX
{

// Iterator : PointResultsCollection
class PointResultsCollectionIterator : public Iterator<PointResults*>
{
};

class PointResultsCollectionConstIterator : public ConstIterator<PointResults>
{
};

// Collection : PointResultsCollection
class PointResultsCollection : public ObjList<PointResults, PointResultsCollectionIterator, PointResultsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
