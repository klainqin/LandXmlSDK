
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSQCInfoLevel1.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSQCInfoLevel1Tmpl.inl"
namespace LX
{
template class GPSQCInfoLevel1Tmpl<GPSQCInfoLevel1>;
GPSQCInfoLevel1Impl::GPSQCInfoLevel1Impl (DocumentImpl* pDoc)
    : GPSQCInfoLevel1Tmpl<GPSQCInfoLevel1>(pDoc)
{
}
}; // namespace : LX
