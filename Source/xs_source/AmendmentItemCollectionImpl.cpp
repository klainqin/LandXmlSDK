#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AmendmentItemCollectionImpl.h"
namespace LX
{

AmendmentItemCollection* createAmendmentItemCollectionObject (DocumentImpl* pDocument)
{
    AmendmentItemCollection* pCollection = new AmendmentItemCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AmendmentItemCollectionImpl::AmendmentItemCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
