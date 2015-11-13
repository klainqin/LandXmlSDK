
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Lanes.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "LanesTmpl.inl"
namespace LX
{
template class LanesTmpl<Lanes>;
LanesImpl::LanesImpl (DocumentImpl* pDoc)
    : LanesTmpl<Lanes>(pDoc)
{
}
}; // namespace : LX
