
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TrafficVolume.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TrafficVolumeTmpl.inl"
namespace LX
{
template class TrafficVolumeTmpl<TrafficVolume>;
TrafficVolumeImpl::TrafficVolumeImpl (DocumentImpl* pDoc)
    : TrafficVolumeTmpl<TrafficVolume>(pDoc)
{
}
}; // namespace : LX
