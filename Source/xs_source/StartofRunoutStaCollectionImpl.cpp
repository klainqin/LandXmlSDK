#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "StartofRunoutStaCollectionImpl.h"
namespace LX
{

StartofRunoutStaCollection* createStartofRunoutStaCollectionObject (DocumentImpl* pDocument)
{
    StartofRunoutStaCollection* pCollection = new StartofRunoutStaCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

StartofRunoutStaCollectionImpl::StartofRunoutStaCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
