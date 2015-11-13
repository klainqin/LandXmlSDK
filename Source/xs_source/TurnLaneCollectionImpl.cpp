#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TurnLaneCollectionImpl.h"
namespace LX
{

TurnLaneCollection* createTurnLaneCollectionObject (DocumentImpl* pDocument)
{
    TurnLaneCollection* pCollection = new TurnLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TurnLaneCollectionImpl::TurnLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
