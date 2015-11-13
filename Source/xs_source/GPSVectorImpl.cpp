
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSVector.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSVectorTmpl.inl"
namespace LX
{
template class GPSVectorTmpl<GPSVector>;
GPSVectorImpl::GPSVectorImpl (DocumentImpl* pDoc)
    : GPSVectorTmpl<GPSVector>(pDoc)
{
}
}; // namespace : LX
