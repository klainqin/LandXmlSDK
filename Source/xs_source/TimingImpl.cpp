
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Timing.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TimingTmpl.inl"
namespace LX
{
template class TimingTmpl<Timing>;
TimingImpl::TimingImpl (DocumentImpl* pDoc)
    : TimingTmpl<Timing>(pDoc)
{
}
}; // namespace : LX
