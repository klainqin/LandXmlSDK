#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RoadNameCollectionImpl.h"
namespace LX
{

RoadNameCollection* createRoadNameCollectionObject (DocumentImpl* pDocument)
{
    RoadNameCollection* pCollection = new RoadNameCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RoadNameCollectionImpl::RoadNameCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
