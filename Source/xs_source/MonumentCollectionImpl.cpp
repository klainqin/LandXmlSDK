#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "MonumentCollectionImpl.h"
namespace LX
{

MonumentCollection* createMonumentCollectionObject (DocumentImpl* pDocument)
{
    MonumentCollection* pCollection = new MonumentCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

MonumentCollectionImpl::MonumentCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
