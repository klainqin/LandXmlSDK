#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RoadwaysCollectionImpl.h"
namespace LX
{

RoadwaysCollection* createRoadwaysCollectionObject (DocumentImpl* pDocument)
{
    RoadwaysCollection* pCollection = new RoadwaysCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RoadwaysCollectionImpl::RoadwaysCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
