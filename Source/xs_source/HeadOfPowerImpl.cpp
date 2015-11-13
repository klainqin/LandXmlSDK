
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "HeadOfPower.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "HeadOfPowerTmpl.inl"
namespace LX
{
template class HeadOfPowerTmpl<HeadOfPower>;
HeadOfPowerImpl::HeadOfPowerImpl (DocumentImpl* pDoc)
    : HeadOfPowerTmpl<HeadOfPower>(pDoc)
{
}
}; // namespace : LX
