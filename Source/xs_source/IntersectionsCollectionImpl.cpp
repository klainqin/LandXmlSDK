#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "IntersectionsCollectionImpl.h"
namespace LX
{

IntersectionsCollection* createIntersectionsCollectionObject (DocumentImpl* pDocument)
{
    IntersectionsCollection* pCollection = new IntersectionsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

IntersectionsCollectionImpl::IntersectionsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
