#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneCutFillCollectionImpl.h"
namespace LX
{

ZoneCutFillCollection* createZoneCutFillCollectionObject (DocumentImpl* pDocument)
{
    ZoneCutFillCollection* pCollection = new ZoneCutFillCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneCutFillCollectionImpl::ZoneCutFillCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
