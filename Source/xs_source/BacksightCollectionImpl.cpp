#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "BacksightCollectionImpl.h"
namespace LX
{

BacksightCollection* createBacksightCollectionObject (DocumentImpl* pDocument)
{
    BacksightCollection* pCollection = new BacksightCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

BacksightCollectionImpl::BacksightCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
