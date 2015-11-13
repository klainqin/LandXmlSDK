#if !defined(__RETWALLCOLLECTION_H)
#define __RETWALLCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "RetWall.h"
namespace LX
{

// Iterator : RetWallCollection
class RetWallCollectionIterator : public Iterator<RetWall*>
{
};

class RetWallCollectionConstIterator : public ConstIterator<RetWall>
{
};

// Collection : RetWallCollection
class RetWallCollection : public Map<RetWall, String, RetWallCollectionIterator, RetWallCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
