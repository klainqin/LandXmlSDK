
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Watersheds.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "WatershedsTmpl.inl"
namespace LX
{
template class WatershedsTmpl<Watersheds>;
WatershedsImpl::WatershedsImpl (DocumentImpl* pDoc)
    : WatershedsTmpl<Watersheds>(pDoc)
{
}
}; // namespace : LX
