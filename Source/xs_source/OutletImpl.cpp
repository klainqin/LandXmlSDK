
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Outlet.h"
#include "LXTypesTmpl.h"
#include "PointType3dReqImpl.h"

#include "LXTypesImpl.h"
#include "OutletTmpl.inl"
namespace LX
{
template class OutletTmpl<Outlet>;
OutletImpl::OutletImpl (DocumentImpl* pDoc)
    : OutletTmpl<Outlet>(pDoc)
{
}
}; // namespace : LX
