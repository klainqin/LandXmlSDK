#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "OutletCollectionImpl.h"
namespace LX
{

OutletCollection* createOutletCollectionObject (DocumentImpl* pDocument)
{
    OutletCollection* pCollection = new OutletCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

OutletCollectionImpl::OutletCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
