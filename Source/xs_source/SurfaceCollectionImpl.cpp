#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurfaceCollectionImpl.h"
namespace LX
{

SurfaceCollection* createSurfaceCollectionObject (DocumentImpl* pDocument)
{
    SurfaceCollection* pCollection = new SurfaceCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurfaceCollectionImpl::SurfaceCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
