#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurfacesCollectionImpl.h"
namespace LX
{

SurfacesCollection* createSurfacesCollectionObject (DocumentImpl* pDocument)
{
    SurfacesCollection* pCollection = new SurfacesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurfacesCollectionImpl::SurfacesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
