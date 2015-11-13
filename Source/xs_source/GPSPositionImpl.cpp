
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSPosition.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSPositionTmpl.inl"
namespace LX
{
template class GPSPositionTmpl<GPSPosition>;
GPSPositionImpl::GPSPositionImpl (DocumentImpl* pDoc)
    : GPSPositionTmpl<GPSPosition>(pDoc)
{
}
}; // namespace : LX
