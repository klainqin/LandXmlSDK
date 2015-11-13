#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "LanesCollectionImpl.h"
namespace LX
{

LanesCollection* createLanesCollectionObject (DocumentImpl* pDocument)
{
    LanesCollection* pCollection = new LanesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

LanesCollectionImpl::LanesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
