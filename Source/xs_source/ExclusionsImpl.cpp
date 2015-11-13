
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Exclusions.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ExclusionsTmpl.inl"
namespace LX
{
template class ExclusionsTmpl<Exclusions>;
ExclusionsImpl::ExclusionsImpl (DocumentImpl* pDoc)
    : ExclusionsTmpl<Exclusions>(pDoc)
{
}
}; // namespace : LX
