#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PlanFeatureCollectionImpl.h"
namespace LX
{

PlanFeatureCollection* createPlanFeatureCollectionObject (DocumentImpl* pDocument)
{
    PlanFeatureCollection* pCollection = new PlanFeatureCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PlanFeatureCollectionImpl::PlanFeatureCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
