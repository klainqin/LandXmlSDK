#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "FullSuperelevCollectionImpl.h"
namespace LX
{

FullSuperelevCollection* createFullSuperelevCollectionObject (DocumentImpl* pDocument)
{
    FullSuperelevCollection* pCollection = new FullSuperelevCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

FullSuperelevCollectionImpl::FullSuperelevCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
