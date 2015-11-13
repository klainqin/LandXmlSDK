#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "WatershedCollectionImpl.h"
namespace LX
{

WatershedCollection* createWatershedCollectionObject (DocumentImpl* pDocument)
{
    WatershedCollection* pCollection = new WatershedCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

WatershedCollectionImpl::WatershedCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
