#if !defined(__HEADOFPOWERCOLLECTION_H)
#define __HEADOFPOWERCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "HeadOfPower.h"
namespace LX
{

// Iterator : HeadOfPowerCollection
class HeadOfPowerCollectionIterator : public Iterator<HeadOfPower*>
{
};

class HeadOfPowerCollectionConstIterator : public ConstIterator<HeadOfPower>
{
};

// Collection : HeadOfPowerCollection
class HeadOfPowerCollection : public Map<HeadOfPower, String, HeadOfPowerCollectionIterator, HeadOfPowerCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
