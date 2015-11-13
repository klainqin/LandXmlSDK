#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AuthorCollectionImpl.h"
namespace LX
{

AuthorCollection* createAuthorCollectionObject (DocumentImpl* pDocument)
{
    AuthorCollection* pCollection = new AuthorCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AuthorCollectionImpl::AuthorCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
