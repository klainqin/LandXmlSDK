#if !defined(__RETWALLPNTCOLLECTION_H)
#define __RETWALLPNTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "RetWallPnt.h"
namespace LX
{

// Iterator : RetWallPntCollection
class RetWallPntCollectionIterator : public Iterator<RetWallPnt*>
{
};

class RetWallPntCollectionConstIterator : public ConstIterator<RetWallPnt>
{
};

// Collection : RetWallPntCollection
class RetWallPntCollection : public Map<RetWallPnt, String, RetWallPntCollectionIterator, RetWallPntCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
