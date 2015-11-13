#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DecisionSightDistanceCollectionImpl.h"
namespace LX
{

DecisionSightDistanceCollection* createDecisionSightDistanceCollectionObject (DocumentImpl* pDocument)
{
    DecisionSightDistanceCollection* pCollection = new DecisionSightDistanceCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DecisionSightDistanceCollectionImpl::DecisionSightDistanceCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
