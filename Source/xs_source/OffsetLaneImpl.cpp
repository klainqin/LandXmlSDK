
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "OffsetLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "OffsetLaneTmpl.inl"
namespace LX
{
template class OffsetLaneTmpl<OffsetLane>;
OffsetLaneImpl::OffsetLaneImpl (DocumentImpl* pDoc)
    : OffsetLaneTmpl<OffsetLane>(pDoc)
{
}
}; // namespace : LX
