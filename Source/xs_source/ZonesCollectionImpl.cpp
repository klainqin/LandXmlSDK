#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZonesCollectionImpl.h"
namespace LX
{

ZonesCollection* createZonesCollectionObject (DocumentImpl* pDocument)
{
    ZonesCollection* pCollection = new ZonesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZonesCollectionImpl::ZonesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
