
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RawObservation.h"
#include "LXTypesTmpl.h"
#include "RawObservationTypeImpl.h"

#include "LXTypesImpl.h"
#include "RawObservationTmpl.inl"
namespace LX
{
template class RawObservationTmpl<RawObservation>;
RawObservationImpl::RawObservationImpl (DocumentImpl* pDoc)
    : RawObservationTmpl<RawObservation>(pDoc)
{
}
}; // namespace : LX
