
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TargetPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "TargetPointTmpl.inl"
namespace LX
{
template class TargetPointTmpl<TargetPoint>;
TargetPointImpl::TargetPointImpl (DocumentImpl* pDoc)
    : TargetPointTmpl<TargetPoint>(pDoc)
{
}
}; // namespace : LX
