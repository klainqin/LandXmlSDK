
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AlignPIs.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AlignPIsTmpl.inl"
namespace LX
{
template class AlignPIsTmpl<AlignPIs>;
AlignPIsImpl::AlignPIsImpl (DocumentImpl* pDoc)
    : AlignPIsTmpl<AlignPIs>(pDoc)
{
}
}; // namespace : LX
