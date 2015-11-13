#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TwoWayLeftTurnLaneCollectionImpl.h"
namespace LX
{

TwoWayLeftTurnLaneCollection* createTwoWayLeftTurnLaneCollectionObject (DocumentImpl* pDocument)
{
    TwoWayLeftTurnLaneCollection* pCollection = new TwoWayLeftTurnLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TwoWayLeftTurnLaneCollectionImpl::TwoWayLeftTurnLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
