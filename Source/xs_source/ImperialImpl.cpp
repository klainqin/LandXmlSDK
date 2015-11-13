
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Imperial.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ImperialTmpl.inl"
namespace LX
{
template class ImperialTmpl<Imperial>;
ImperialImpl::ImperialImpl (DocumentImpl* pDoc)
    : ImperialTmpl<Imperial>(pDoc)
{
}
}; // namespace : LX
