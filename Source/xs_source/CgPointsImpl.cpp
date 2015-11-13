
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CgPoints.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CgPointsTmpl.inl"
namespace LX
{
template class CgPointsTmpl<CgPoints>;
CgPointsImpl::CgPointsImpl (DocumentImpl* pDoc)
    : CgPointsTmpl<CgPoints>(pDoc)
{
}
}; // namespace : LX
