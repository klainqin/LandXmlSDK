
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TurnLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TurnLaneTmpl.inl"
namespace LX
{
template class TurnLaneTmpl<TurnLane>;
TurnLaneImpl::TurnLaneImpl (DocumentImpl* pDoc)
    : TurnLaneTmpl<TurnLane>(pDoc)
{
}
}; // namespace : LX
