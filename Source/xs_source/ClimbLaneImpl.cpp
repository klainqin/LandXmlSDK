
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ClimbLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ClimbLaneTmpl.inl"
namespace LX
{
template class ClimbLaneTmpl<ClimbLane>;
ClimbLaneImpl::ClimbLaneImpl (DocumentImpl* pDoc)
    : ClimbLaneTmpl<ClimbLane>(pDoc)
{
}
}; // namespace : LX
