#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AmendmentCollectionImpl.h"
namespace LX
{

AmendmentCollection* createAmendmentCollectionObject (DocumentImpl* pDocument)
{
    AmendmentCollection* pCollection = new AmendmentCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AmendmentCollectionImpl::AmendmentCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
