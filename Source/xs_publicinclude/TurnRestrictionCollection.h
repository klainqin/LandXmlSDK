#if !defined(__TURNRESTRICTIONCOLLECTION_H)
#define __TURNRESTRICTIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TurnRestriction.h"
namespace LX
{

// Iterator : TurnRestrictionCollection
class TurnRestrictionCollectionIterator : public Iterator<TurnRestriction*>
{
};

class TurnRestrictionCollectionConstIterator : public ConstIterator<TurnRestriction>
{
};

// Collection : TurnRestrictionCollection
class TurnRestrictionCollection : public ObjList<TurnRestriction, TurnRestrictionCollectionIterator, TurnRestrictionCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
