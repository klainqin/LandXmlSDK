#if !defined(__AUTHORCOLLECTIONIMPL_H)
#define __AUTHORCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Author.h"
#include "AuthorCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AuthorImpl.h"
#endif

namespace LX
{
AuthorCollection* createAuthorCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AuthorCollectionImpl
class AuthorCollectionImpl : public ObjListTmpl<Author, AuthorCollection, AuthorCollectionIterator, AuthorCollectionConstIterator>
{
public:
    AuthorCollectionImpl::AuthorCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
