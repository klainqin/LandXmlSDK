
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Amendment.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AmendmentTmpl.inl"
namespace LX
{
template class AmendmentTmpl<Amendment>;
AmendmentImpl::AmendmentImpl (DocumentImpl* pDoc)
    : AmendmentTmpl<Amendment>(pDoc)
{
}
}; // namespace : LX
