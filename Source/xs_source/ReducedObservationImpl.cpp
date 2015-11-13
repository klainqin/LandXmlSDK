
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ReducedObservation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ReducedObservationTmpl.inl"
namespace LX
{
template class ReducedObservationTmpl<ReducedObservation>;
ReducedObservationImpl::ReducedObservationImpl (DocumentImpl* pDoc)
    : ReducedObservationTmpl<ReducedObservation>(pDoc)
{
}
}; // namespace : LX
