
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Zones.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZonesTmpl.inl"
namespace LX
{
template class ZonesTmpl<Zones>;
ZonesImpl::ZonesImpl (DocumentImpl* pDoc)
    : ZonesTmpl<Zones>(pDoc)
{
}
}; // namespace : LX
