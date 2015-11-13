#if !defined(__AUTHORCOLLECTION_H)
#define __AUTHORCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Author.h"
namespace LX
{

// Iterator : AuthorCollection
class AuthorCollectionIterator : public Iterator<Author*>
{
};

class AuthorCollectionConstIterator : public ConstIterator<Author>
{
};

// Collection : AuthorCollection
class AuthorCollection : public ObjList<Author, AuthorCollectionIterator, AuthorCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
