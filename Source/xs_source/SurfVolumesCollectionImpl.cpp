#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurfVolumesCollectionImpl.h"
namespace LX
{

SurfVolumesCollection* createSurfVolumesCollectionObject (DocumentImpl* pDocument)
{
    SurfVolumesCollection* pCollection = new SurfVolumesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurfVolumesCollectionImpl::SurfVolumesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
