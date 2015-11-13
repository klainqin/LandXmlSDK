#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ParcelCollectionImpl.h"
namespace LX
{

ParcelCollection* createParcelCollectionObject (DocumentImpl* pDocument)
{
    ParcelCollection* pCollection = new ParcelCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ParcelCollectionImpl::ParcelCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
