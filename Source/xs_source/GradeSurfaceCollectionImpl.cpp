#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "GradeSurfaceCollectionImpl.h"
namespace LX
{

GradeSurfaceCollection* createGradeSurfaceCollectionObject (DocumentImpl* pDocument)
{
    GradeSurfaceCollection* pCollection = new GradeSurfaceCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

GradeSurfaceCollectionImpl::GradeSurfaceCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
