
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "BeginRunoutSta.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BeginRunoutStaTmpl.inl"
namespace LX
{
template class BeginRunoutStaTmpl<BeginRunoutSta>;
BeginRunoutStaImpl::BeginRunoutStaImpl (DocumentImpl* pDoc)
    : BeginRunoutStaTmpl<BeginRunoutSta>(pDoc)
{
}
}; // namespace : LX
