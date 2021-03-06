#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "FacesCollectionImpl.h"
namespace LX
{

FacesCollection* createFacesCollectionObject (DocumentImpl* pDocument)
{
    FacesCollection* pCollection = new FacesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

FacesCollectionImpl::FacesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
