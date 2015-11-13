#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DataPointsCollectionImpl.h"
namespace LX
{

DataPointsCollection* createDataPointsCollectionObject (DocumentImpl* pDocument)
{
    DataPointsCollection* pCollection = new DataPointsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DataPointsCollectionImpl::DataPointsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
