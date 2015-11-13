
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Watershed.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "WatershedTmpl.inl"
namespace LX
{
template class WatershedTmpl<Watershed>;
WatershedImpl::WatershedImpl (DocumentImpl* pDoc)
    : WatershedTmpl<Watershed>(pDoc)
{
}
}; // namespace : LX
