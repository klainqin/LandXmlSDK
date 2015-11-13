
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PassingLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PassingLaneTmpl.inl"
namespace LX
{
template class PassingLaneTmpl<PassingLane>;
PassingLaneImpl::PassingLaneImpl (DocumentImpl* pDoc)
    : PassingLaneTmpl<PassingLane>(pDoc)
{
}
}; // namespace : LX
