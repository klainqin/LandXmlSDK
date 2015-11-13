
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PointType3dReq.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PointType3dReqTmpl.inl"
namespace LX
{
template class PointType3dReqTmpl<PointType3dReq>;
PointType3dReqImpl::PointType3dReqImpl (DocumentImpl* pDoc)
    : PointType3dReqTmpl<PointType3dReq>(pDoc)
{
}
}; // namespace : LX
