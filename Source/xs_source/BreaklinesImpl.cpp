
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Breaklines.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BreaklinesTmpl.inl"
namespace LX
{
template class BreaklinesTmpl<Breaklines>;
BreaklinesImpl::BreaklinesImpl (DocumentImpl* pDoc)
    : BreaklinesTmpl<Breaklines>(pDoc)
{
}
}; // namespace : LX
