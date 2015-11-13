
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PlanFeatures.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PlanFeaturesTmpl.inl"
namespace LX
{
template class PlanFeaturesTmpl<PlanFeatures>;
PlanFeaturesImpl::PlanFeaturesImpl (DocumentImpl* pDoc)
    : PlanFeaturesTmpl<PlanFeatures>(pDoc)
{
}
}; // namespace : LX
