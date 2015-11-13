
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RedVerticalObservation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RedVerticalObservationTmpl.inl"
namespace LX
{
template class RedVerticalObservationTmpl<RedVerticalObservation>;
RedVerticalObservationImpl::RedVerticalObservationImpl (DocumentImpl* pDoc)
    : RedVerticalObservationTmpl<RedVerticalObservation>(pDoc)
{
}
}; // namespace : LX
