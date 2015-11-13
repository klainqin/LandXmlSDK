#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TrafficVolumeCollectionImpl.h"
namespace LX
{

TrafficVolumeCollection* createTrafficVolumeCollectionObject (DocumentImpl* pDocument)
{
    TrafficVolumeCollection* pCollection = new TrafficVolumeCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TrafficVolumeCollectionImpl::TrafficVolumeCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
