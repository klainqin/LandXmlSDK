
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Author.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AuthorTmpl.inl"
namespace LX
{
template class AuthorTmpl<Author>;
AuthorImpl::AuthorImpl (DocumentImpl* pDoc)
    : AuthorTmpl<Author>(pDoc)
{
}
}; // namespace : LX
