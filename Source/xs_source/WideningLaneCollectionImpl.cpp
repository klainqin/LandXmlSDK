#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "WideningLaneCollectionImpl.h"
namespace LX
{

WideningLaneCollection* createWideningLaneCollectionObject (DocumentImpl* pDocument)
{
    WideningLaneCollection* pCollection = new WideningLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

WideningLaneCollectionImpl::WideningLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
