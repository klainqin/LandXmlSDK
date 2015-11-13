
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "BacksightPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "BacksightPointTmpl.inl"
namespace LX
{
template class BacksightPointTmpl<BacksightPoint>;
BacksightPointImpl::BacksightPointImpl (DocumentImpl* pDoc)
    : BacksightPointTmpl<BacksightPoint>(pDoc)
{
}
}; // namespace : LX
