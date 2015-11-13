#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ObservationGroupCollectionImpl.h"
namespace LX
{

ObservationGroupCollection* createObservationGroupCollectionObject (DocumentImpl* pDocument)
{
    ObservationGroupCollection* pCollection = new ObservationGroupCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ObservationGroupCollectionImpl::ObservationGroupCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
