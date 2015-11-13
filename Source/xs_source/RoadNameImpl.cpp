
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RoadName.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RoadNameTmpl.inl"
namespace LX
{
template class RoadNameTmpl<RoadName>;
RoadNameImpl::RoadNameImpl (DocumentImpl* pDoc)
    : RoadNameTmpl<RoadName>(pDoc)
{
}
}; // namespace : LX
