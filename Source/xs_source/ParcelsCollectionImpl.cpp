#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ParcelsCollectionImpl.h"
namespace LX
{

ParcelsCollection* createParcelsCollectionObject (DocumentImpl* pDocument)
{
    ParcelsCollection* pCollection = new ParcelsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ParcelsCollectionImpl::ParcelsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
