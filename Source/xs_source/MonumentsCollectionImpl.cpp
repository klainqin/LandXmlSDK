#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "MonumentsCollectionImpl.h"
namespace LX
{

MonumentsCollection* createMonumentsCollectionObject (DocumentImpl* pDocument)
{
    MonumentsCollection* pCollection = new MonumentsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

MonumentsCollectionImpl::MonumentsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
