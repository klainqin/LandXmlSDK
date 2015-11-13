
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSQCInfoLevel2.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSQCInfoLevel2Tmpl.inl"
namespace LX
{
template class GPSQCInfoLevel2Tmpl<GPSQCInfoLevel2>;
GPSQCInfoLevel2Impl::GPSQCInfoLevel2Impl (DocumentImpl* pDoc)
    : GPSQCInfoLevel2Tmpl<GPSQCInfoLevel2>(pDoc)
{
}
}; // namespace : LX
