
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSSetup.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSSetupTmpl.inl"
namespace LX
{
template class GPSSetupTmpl<GPSSetup>;
GPSSetupImpl::GPSSetupImpl (DocumentImpl* pDoc)
    : GPSSetupTmpl<GPSSetup>(pDoc)
{
}
}; // namespace : LX
