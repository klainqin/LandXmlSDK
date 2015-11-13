
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneMaterial.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneMaterialTmpl.inl"
namespace LX
{
template class ZoneMaterialTmpl<ZoneMaterial>;
ZoneMaterialImpl::ZoneMaterialImpl (DocumentImpl* pDoc)
    : ZoneMaterialTmpl<ZoneMaterial>(pDoc)
{
}
}; // namespace : LX
