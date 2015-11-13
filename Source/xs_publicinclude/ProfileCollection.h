#if !defined(__PROFILECOLLECTION_H)
#define __PROFILECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Profile.h"
namespace LX
{

// Iterator : ProfileCollection
class ProfileCollectionIterator : public Iterator<Profile*>
{
};

class ProfileCollectionConstIterator : public ConstIterator<Profile>
{
};

// Collection : ProfileCollection
class ProfileCollection : public Map<Profile, String, ProfileCollectionIterator, ProfileCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
