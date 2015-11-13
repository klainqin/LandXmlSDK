
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneHinge.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneHingeTmpl.inl"
namespace LX
{
template class ZoneHingeTmpl<ZoneHinge>;
ZoneHingeImpl::ZoneHingeImpl (DocumentImpl* pDoc)
    : ZoneHingeTmpl<ZoneHinge>(pDoc)
{
}
}; // namespace : LX
