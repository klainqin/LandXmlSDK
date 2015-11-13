#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CornerCollectionImpl.h"
namespace LX
{

CornerCollection* createCornerCollectionObject (DocumentImpl* pDocument)
{
    CornerCollection* pCollection = new CornerCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CornerCollectionImpl::CornerCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
