#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "NoPassingZoneCollectionImpl.h"
namespace LX
{

NoPassingZoneCollection* createNoPassingZoneCollectionObject (DocumentImpl* pDocument)
{
    NoPassingZoneCollection* pCollection = new NoPassingZoneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

NoPassingZoneCollectionImpl::NoPassingZoneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
