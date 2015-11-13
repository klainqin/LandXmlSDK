#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "OffsetLaneCollectionImpl.h"
namespace LX
{

OffsetLaneCollection* createOffsetLaneCollectionObject (DocumentImpl* pDocument)
{
    OffsetLaneCollection* pCollection = new OffsetLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

OffsetLaneCollectionImpl::OffsetLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
