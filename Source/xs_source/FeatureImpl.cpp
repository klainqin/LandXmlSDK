
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Feature.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FeatureTmpl.inl"
namespace LX
{
template class FeatureTmpl<Feature>;
FeatureImpl::FeatureImpl (DocumentImpl* pDoc)
    : FeatureTmpl<Feature>(pDoc)
{
}
}; // namespace : LX
