#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "IntersectionCollectionImpl.h"
namespace LX
{

IntersectionCollection* createIntersectionCollectionObject (DocumentImpl* pDocument)
{
    IntersectionCollection* pCollection = new IntersectionCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

IntersectionCollectionImpl::IntersectionCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
