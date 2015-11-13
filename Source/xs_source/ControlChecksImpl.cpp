
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ControlChecks.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ControlChecksTmpl.inl"
namespace LX
{
template class ControlChecksTmpl<ControlChecks>;
ControlChecksImpl::ControlChecksImpl (DocumentImpl* pDoc)
    : ControlChecksTmpl<ControlChecks>(pDoc)
{
}
}; // namespace : LX
