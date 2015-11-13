#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneCollectionImpl.h"
namespace LX
{

ZoneCollection* createZoneCollectionObject (DocumentImpl* pDocument)
{
    ZoneCollection* pCollection = new ZoneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneCollectionImpl::ZoneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
