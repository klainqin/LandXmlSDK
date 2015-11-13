
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ReducedArcObservation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ReducedArcObservationTmpl.inl"
namespace LX
{
template class ReducedArcObservationTmpl<ReducedArcObservation>;
ReducedArcObservationImpl::ReducedArcObservationImpl (DocumentImpl* pDoc)
    : ReducedArcObservationTmpl<ReducedArcObservation>(pDoc)
{
}
}; // namespace : LX
