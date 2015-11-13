
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "FullSuperelev.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FullSuperelevTmpl.inl"
namespace LX
{
template class FullSuperelevTmpl<FullSuperelev>;
FullSuperelevImpl::FullSuperelevImpl (DocumentImpl* pDoc)
    : FullSuperelevTmpl<FullSuperelev>(pDoc)
{
}
}; // namespace : LX
