
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Location.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "LocationTmpl.inl"
namespace LX
{
template class LocationTmpl<Location>;
LocationImpl::LocationImpl (DocumentImpl* pDoc)
    : LocationTmpl<Location>(pDoc)
{
}
}; // namespace : LX
