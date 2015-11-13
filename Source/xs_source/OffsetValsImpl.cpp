
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "OffsetVals.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "OffsetValsTmpl.inl"
namespace LX
{
template class OffsetValsTmpl<OffsetVals>;
OffsetValsImpl::OffsetValsImpl (DocumentImpl* pDoc)
    : OffsetValsTmpl<OffsetVals>(pDoc)
{
}
}; // namespace : LX
