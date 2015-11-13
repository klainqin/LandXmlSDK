
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "FullSuperSta.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FullSuperStaTmpl.inl"
namespace LX
{
template class FullSuperStaTmpl<FullSuperSta>;
FullSuperStaImpl::FullSuperStaImpl (DocumentImpl* pDoc)
    : FullSuperStaTmpl<FullSuperSta>(pDoc)
{
}
}; // namespace : LX
