#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneHingeCollectionImpl.h"
namespace LX
{

ZoneHingeCollection* createZoneHingeCollectionObject (DocumentImpl* pDocument)
{
    ZoneHingeCollection* pCollection = new ZoneHingeCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneHingeCollectionImpl::ZoneHingeCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
