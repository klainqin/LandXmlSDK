#if !defined(__HAZARDRATINGCOLLECTION_H)
#define __HAZARDRATINGCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "HazardRating.h"
namespace LX
{

// Iterator : HazardRatingCollection
class HazardRatingCollectionIterator : public Iterator<HazardRating*>
{
};

class HazardRatingCollectionConstIterator : public ConstIterator<HazardRating>
{
};

// Collection : HazardRatingCollection
class HazardRatingCollection : public ObjList<HazardRating, HazardRatingCollectionIterator, HazardRatingCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
