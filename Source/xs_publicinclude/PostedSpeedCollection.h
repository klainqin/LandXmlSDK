#if !defined(__POSTEDSPEEDCOLLECTION_H)
#define __POSTEDSPEEDCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PostedSpeed.h"
namespace LX
{

// Iterator : PostedSpeedCollection
class PostedSpeedCollectionIterator : public Iterator<PostedSpeed*>
{
};

class PostedSpeedCollectionConstIterator : public ConstIterator<PostedSpeed>
{
};

// Collection : PostedSpeedCollection
class PostedSpeedCollection : public ObjList<PostedSpeed, PostedSpeedCollectionIterator, PostedSpeedCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
