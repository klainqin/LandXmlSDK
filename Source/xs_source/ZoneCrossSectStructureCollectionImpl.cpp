#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ZoneCrossSectStructureCollectionImpl.h"
namespace LX
{

ZoneCrossSectStructureCollection* createZoneCrossSectStructureCollectionObject (DocumentImpl* pDocument)
{
    ZoneCrossSectStructureCollection* pCollection = new ZoneCrossSectStructureCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ZoneCrossSectStructureCollectionImpl::ZoneCrossSectStructureCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
