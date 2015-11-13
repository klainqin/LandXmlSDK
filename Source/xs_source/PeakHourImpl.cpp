
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PeakHour.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PeakHourTmpl.inl"
namespace LX
{
template class PeakHourTmpl<PeakHour>;
PeakHourImpl::PeakHourImpl (DocumentImpl* pDoc)
    : PeakHourTmpl<PeakHour>(pDoc)
{
}
}; // namespace : LX
