#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TurnSpeedCollectionImpl.h"
namespace LX
{

TurnSpeedCollection* createTurnSpeedCollectionObject (DocumentImpl* pDocument)
{
    TurnSpeedCollection* pCollection = new TurnSpeedCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TurnSpeedCollectionImpl::TurnSpeedCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
