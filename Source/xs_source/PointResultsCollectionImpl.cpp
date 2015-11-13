#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PointResultsCollectionImpl.h"
namespace LX
{

PointResultsCollection* createPointResultsCollectionObject (DocumentImpl* pDocument)
{
    PointResultsCollection* pCollection = new PointResultsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PointResultsCollectionImpl::PointResultsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
