#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "GPSPositionCollectionImpl.h"
namespace LX
{

GPSPositionCollection* createGPSPositionCollectionObject (DocumentImpl* pDocument)
{
    GPSPositionCollection* pCollection = new GPSPositionCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

GPSPositionCollectionImpl::GPSPositionCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
