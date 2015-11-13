
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RetWallPnt.h"
#include "LXTypesTmpl.h"
#include "PointType3dReqImpl.h"

#include "LXTypesImpl.h"
#include "RetWallPntTmpl.inl"
namespace LX
{
template class RetWallPntTmpl<RetWallPnt>;
RetWallPntImpl::RetWallPntImpl (DocumentImpl* pDoc)
    : RetWallPntTmpl<RetWallPnt>(pDoc)
{
}
}; // namespace : LX
