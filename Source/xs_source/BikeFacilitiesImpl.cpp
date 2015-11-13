
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "BikeFacilities.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BikeFacilitiesTmpl.inl"
namespace LX
{
template class BikeFacilitiesTmpl<BikeFacilities>;
BikeFacilitiesImpl::BikeFacilitiesImpl (DocumentImpl* pDoc)
    : BikeFacilitiesTmpl<BikeFacilities>(pDoc)
{
}
}; // namespace : LX
