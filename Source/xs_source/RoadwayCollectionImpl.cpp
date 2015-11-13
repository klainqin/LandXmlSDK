#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RoadwayCollectionImpl.h"
namespace LX
{

RoadwayCollection* createRoadwayCollectionObject (DocumentImpl* pDocument)
{
    RoadwayCollection* pCollection = new RoadwayCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RoadwayCollectionImpl::RoadwayCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
