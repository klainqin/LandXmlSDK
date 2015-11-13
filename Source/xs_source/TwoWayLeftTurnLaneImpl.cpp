
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TwoWayLeftTurnLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TwoWayLeftTurnLaneTmpl.inl"
namespace LX
{
template class TwoWayLeftTurnLaneTmpl<TwoWayLeftTurnLane>;
TwoWayLeftTurnLaneImpl::TwoWayLeftTurnLaneImpl (DocumentImpl* pDoc)
    : TwoWayLeftTurnLaneTmpl<TwoWayLeftTurnLane>(pDoc)
{
}
}; // namespace : LX
