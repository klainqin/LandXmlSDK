
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RawObservationType.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RawObservationTypeTmpl.inl"
namespace LX
{
template class RawObservationTypeTmpl<RawObservationType>;
RawObservationTypeImpl::RawObservationTypeImpl (DocumentImpl* pDoc)
    : RawObservationTypeTmpl<RawObservationType>(pDoc)
{
}
}; // namespace : LX
