#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "EndofRunoutStaCollectionImpl.h"
namespace LX
{

EndofRunoutStaCollection* createEndofRunoutStaCollectionObject (DocumentImpl* pDocument)
{
    EndofRunoutStaCollection* pCollection = new EndofRunoutStaCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

EndofRunoutStaCollectionImpl::EndofRunoutStaCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
