
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TurnSpeed.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TurnSpeedTmpl.inl"
namespace LX
{
template class TurnSpeedTmpl<TurnSpeed>;
TurnSpeedImpl::TurnSpeedImpl (DocumentImpl* pDoc)
    : TurnSpeedTmpl<TurnSpeed>(pDoc)
{
}
}; // namespace : LX
