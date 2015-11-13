#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SpeedStationCollectionImpl.h"
namespace LX
{

SpeedStationCollection* createSpeedStationCollectionObject (DocumentImpl* pDocument)
{
    SpeedStationCollection* pCollection = new SpeedStationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SpeedStationCollectionImpl::SpeedStationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
