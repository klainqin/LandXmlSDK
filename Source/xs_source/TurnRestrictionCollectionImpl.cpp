#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TurnRestrictionCollectionImpl.h"
namespace LX
{

TurnRestrictionCollection* createTurnRestrictionCollectionObject (DocumentImpl* pDocument)
{
    TurnRestrictionCollection* pCollection = new TurnRestrictionCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TurnRestrictionCollectionImpl::TurnRestrictionCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
