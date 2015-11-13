#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "BoundaryCollectionImpl.h"
namespace LX
{

BoundaryCollection* createBoundaryCollectionObject (DocumentImpl* pDocument)
{
    BoundaryCollection* pCollection = new BoundaryCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

BoundaryCollectionImpl::BoundaryCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
