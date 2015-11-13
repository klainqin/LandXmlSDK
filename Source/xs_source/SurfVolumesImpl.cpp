
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SurfVolumes.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurfVolumesTmpl.inl"
namespace LX
{
template class SurfVolumesTmpl<SurfVolumes>;
SurfVolumesImpl::SurfVolumesImpl (DocumentImpl* pDoc)
    : SurfVolumesTmpl<SurfVolumes>(pDoc)
{
}
}; // namespace : LX
