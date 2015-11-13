
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DecisionSightDistance.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DecisionSightDistanceTmpl.inl"
namespace LX
{
template class DecisionSightDistanceTmpl<DecisionSightDistance>;
DecisionSightDistanceImpl::DecisionSightDistanceImpl (DocumentImpl* pDoc)
    : DecisionSightDistanceTmpl<DecisionSightDistance>(pDoc)
{
}
}; // namespace : LX
