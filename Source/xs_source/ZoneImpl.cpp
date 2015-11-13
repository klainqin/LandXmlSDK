
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Zone.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneTmpl.inl"
namespace LX
{
template class ZoneTmpl<Zone>;
ZoneImpl::ZoneImpl (DocumentImpl* pDoc)
    : ZoneTmpl<Zone>(pDoc)
{
}
}; // namespace : LX
