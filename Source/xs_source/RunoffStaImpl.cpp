
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RunoffSta.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RunoffStaTmpl.inl"
namespace LX
{
template class RunoffStaTmpl<RunoffSta>;
RunoffStaImpl::RunoffStaImpl (DocumentImpl* pDoc)
    : RunoffStaTmpl<RunoffSta>(pDoc)
{
}
}; // namespace : LX
