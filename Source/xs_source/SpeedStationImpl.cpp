
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SpeedStation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SpeedStationTmpl.inl"
namespace LX
{
template class SpeedStationTmpl<SpeedStation>;
SpeedStationImpl::SpeedStationImpl (DocumentImpl* pDoc)
    : SpeedStationTmpl<SpeedStation>(pDoc)
{
}
}; // namespace : LX
