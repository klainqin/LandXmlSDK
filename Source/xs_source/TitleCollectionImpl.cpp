#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TitleCollectionImpl.h"
namespace LX
{

TitleCollection* createTitleCollectionObject (DocumentImpl* pDocument)
{
    TitleCollection* pCollection = new TitleCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TitleCollectionImpl::TitleCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
