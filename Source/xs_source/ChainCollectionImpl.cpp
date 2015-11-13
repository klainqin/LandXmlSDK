#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ChainCollectionImpl.h"
namespace LX
{

ChainCollection* createChainCollectionObject (DocumentImpl* pDocument)
{
    ChainCollection* pCollection = new ChainCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ChainCollectionImpl::ChainCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
