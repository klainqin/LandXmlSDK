#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RawObservationCollectionImpl.h"
namespace LX
{

RawObservationCollection* createRawObservationCollectionObject (DocumentImpl* pDocument)
{
    RawObservationCollection* pCollection = new RawObservationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RawObservationCollectionImpl::RawObservationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
