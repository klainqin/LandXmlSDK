
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PlanFeature.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PlanFeatureTmpl.inl"
namespace LX
{
template class PlanFeatureTmpl<PlanFeature>;
PlanFeatureImpl::PlanFeatureImpl (DocumentImpl* pDoc)
    : PlanFeatureTmpl<PlanFeature>(pDoc)
{
}
}; // namespace : LX
