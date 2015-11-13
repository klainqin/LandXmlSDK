
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "NoPassingZone.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "NoPassingZoneTmpl.inl"
namespace LX
{
template class NoPassingZoneTmpl<NoPassingZone>;
NoPassingZoneImpl::NoPassingZoneImpl (DocumentImpl* pDoc)
    : NoPassingZoneTmpl<NoPassingZone>(pDoc)
{
}
}; // namespace : LX
