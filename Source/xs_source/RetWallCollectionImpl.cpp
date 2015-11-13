#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RetWallCollectionImpl.h"
namespace LX
{

RetWallCollection* createRetWallCollectionObject (DocumentImpl* pDocument)
{
    RetWallCollection* pCollection = new RetWallCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RetWallCollectionImpl::RetWallCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
