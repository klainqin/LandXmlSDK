#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RoadSignCollectionImpl.h"
namespace LX
{

RoadSignCollection* createRoadSignCollectionObject (DocumentImpl* pDocument)
{
    RoadSignCollection* pCollection = new RoadSignCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RoadSignCollectionImpl::RoadSignCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
