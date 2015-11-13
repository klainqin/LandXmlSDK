
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DrivewayDensity.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DrivewayDensityTmpl.inl"
namespace LX
{
template class DrivewayDensityTmpl<DrivewayDensity>;
DrivewayDensityImpl::DrivewayDensityImpl (DocumentImpl* pDoc)
    : DrivewayDensityTmpl<DrivewayDensity>(pDoc)
{
}
}; // namespace : LX
