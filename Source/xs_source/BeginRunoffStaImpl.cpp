
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "BeginRunoffSta.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BeginRunoffStaTmpl.inl"
namespace LX
{
template class BeginRunoffStaTmpl<BeginRunoffSta>;
BeginRunoffStaImpl::BeginRunoffStaImpl (DocumentImpl* pDoc)
    : BeginRunoffStaTmpl<BeginRunoffSta>(pDoc)
{
}
}; // namespace : LX
