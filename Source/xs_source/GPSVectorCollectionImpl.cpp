#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "GPSVectorCollectionImpl.h"
namespace LX
{

GPSVectorCollection* createGPSVectorCollectionObject (DocumentImpl* pDocument)
{
    GPSVectorCollection* pCollection = new GPSVectorCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

GPSVectorCollectionImpl::GPSVectorCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
