
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DailyTrafficVolume.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DailyTrafficVolumeTmpl.inl"
namespace LX
{
template class DailyTrafficVolumeTmpl<DailyTrafficVolume>;
DailyTrafficVolumeImpl::DailyTrafficVolumeImpl (DocumentImpl* pDoc)
    : DailyTrafficVolumeTmpl<DailyTrafficVolume>(pDoc)
{
}
}; // namespace : LX
