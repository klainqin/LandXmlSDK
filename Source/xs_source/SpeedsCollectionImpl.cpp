#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SpeedsCollectionImpl.h"
namespace LX
{

SpeedsCollection* createSpeedsCollectionObject (DocumentImpl* pDocument)
{
    SpeedsCollection* pCollection = new SpeedsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SpeedsCollectionImpl::SpeedsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
