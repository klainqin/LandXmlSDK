
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneWidth.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneWidthTmpl.inl"
namespace LX
{
template class ZoneWidthTmpl<ZoneWidth>;
ZoneWidthImpl::ZoneWidthImpl (DocumentImpl* pDoc)
    : ZoneWidthTmpl<ZoneWidth>(pDoc)
{
}
}; // namespace : LX
