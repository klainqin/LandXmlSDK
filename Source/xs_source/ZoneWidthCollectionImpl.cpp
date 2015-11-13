#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneWidthCollectionImpl.h"
namespace LX
{

ZoneWidthCollection* createZoneWidthCollectionObject (DocumentImpl* pDocument)
{
    ZoneWidthCollection* pCollection = new ZoneWidthCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneWidthCollectionImpl::ZoneWidthCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
