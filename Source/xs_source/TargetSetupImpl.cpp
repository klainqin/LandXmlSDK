
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TargetSetup.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TargetSetupTmpl.inl"
namespace LX
{
template class TargetSetupTmpl<TargetSetup>;
TargetSetupImpl::TargetSetupImpl (DocumentImpl* pDoc)
    : TargetSetupTmpl<TargetSetup>(pDoc)
{
}
}; // namespace : LX
