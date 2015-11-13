
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSAntennaDetails.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSAntennaDetailsTmpl.inl"
namespace LX
{
template class GPSAntennaDetailsTmpl<GPSAntennaDetails>;
GPSAntennaDetailsImpl::GPSAntennaDetailsImpl (DocumentImpl* pDoc)
    : GPSAntennaDetailsTmpl<GPSAntennaDetails>(pDoc)
{
}
}; // namespace : LX
