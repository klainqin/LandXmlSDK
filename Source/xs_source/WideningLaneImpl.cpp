
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "WideningLane.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "WideningLaneTmpl.inl"
namespace LX
{
template class WideningLaneTmpl<WideningLane>;
WideningLaneImpl::WideningLaneImpl (DocumentImpl* pDoc)
    : WideningLaneTmpl<WideningLane>(pDoc)
{
}
}; // namespace : LX
