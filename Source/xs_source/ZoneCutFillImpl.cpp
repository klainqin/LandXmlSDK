
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneCutFill.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneCutFillTmpl.inl"
namespace LX
{
template class ZoneCutFillTmpl<ZoneCutFill>;
ZoneCutFillImpl::ZoneCutFillImpl (DocumentImpl* pDoc)
    : ZoneCutFillTmpl<ZoneCutFill>(pDoc)
{
}
}; // namespace : LX
