#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurfVolumeCollectionImpl.h"
namespace LX
{

SurfVolumeCollection* createSurfVolumeCollectionObject (DocumentImpl* pDocument)
{
    SurfVolumeCollection* pCollection = new SurfVolumeCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurfVolumeCollectionImpl::SurfVolumeCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
