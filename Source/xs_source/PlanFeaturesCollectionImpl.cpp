#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PlanFeaturesCollectionImpl.h"
namespace LX
{

PlanFeaturesCollection* createPlanFeaturesCollectionObject (DocumentImpl* pDocument)
{
    PlanFeaturesCollection* pCollection = new PlanFeaturesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PlanFeaturesCollectionImpl::PlanFeaturesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
