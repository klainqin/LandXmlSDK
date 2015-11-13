#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneMaterialCollectionImpl.h"
namespace LX
{

ZoneMaterialCollection* createZoneMaterialCollectionObject (DocumentImpl* pDocument)
{
    ZoneMaterialCollection* pCollection = new ZoneMaterialCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneMaterialCollectionImpl::ZoneMaterialCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
