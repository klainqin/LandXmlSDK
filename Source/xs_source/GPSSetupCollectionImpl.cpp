#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "GPSSetupCollectionImpl.h"
namespace LX
{

GPSSetupCollection* createGPSSetupCollectionObject (DocumentImpl* pDocument)
{
    GPSSetupCollection* pCollection = new GPSSetupCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

GPSSetupCollectionImpl::GPSSetupCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
