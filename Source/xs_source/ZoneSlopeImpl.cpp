
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneSlope.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneSlopeTmpl.inl"
namespace LX
{
template class ZoneSlopeTmpl<ZoneSlope>;
ZoneSlopeImpl::ZoneSlopeImpl (DocumentImpl* pDoc)
    : ZoneSlopeTmpl<ZoneSlope>(pDoc)
{
}
}; // namespace : LX
