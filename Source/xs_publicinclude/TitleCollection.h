#if !defined(__TITLECOLLECTION_H)
#define __TITLECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Title.h"
namespace LX
{

// Iterator : TitleCollection
class TitleCollectionIterator : public Iterator<Title*>
{
};

class TitleCollectionConstIterator : public ConstIterator<Title>
{
};

// Collection : TitleCollection
class TitleCollection : public Map<Title, String, TitleCollectionIterator, TitleCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
