
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SurfVolume.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurfVolumeTmpl.inl"
namespace LX
{
template class SurfVolumeTmpl<SurfVolume>;
SurfVolumeImpl::SurfVolumeImpl (DocumentImpl* pDoc)
    : SurfVolumeTmpl<SurfVolume>(pDoc)
{
}
}; // namespace : LX
