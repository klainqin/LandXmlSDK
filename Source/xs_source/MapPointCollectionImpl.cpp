#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "MapPointCollectionImpl.h"
namespace LX
{

MapPointCollection* createMapPointCollectionObject (DocumentImpl* pDocument)
{
    MapPointCollection* pCollection = new MapPointCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

MapPointCollectionImpl::MapPointCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
