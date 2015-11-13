
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ThruLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ThruLaneTmpl.inl"
namespace LX
{
template class ThruLaneTmpl<ThruLane>;
ThruLaneImpl::ThruLaneImpl (DocumentImpl* pDoc)
    : ThruLaneTmpl<ThruLane>(pDoc)
{
}
}; // namespace : LX
