#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneSlopeCollectionImpl.h"
namespace LX
{

ZoneSlopeCollection* createZoneSlopeCollectionObject (DocumentImpl* pDocument)
{
    ZoneSlopeCollection* pCollection = new ZoneSlopeCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneSlopeCollectionImpl::ZoneSlopeCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
